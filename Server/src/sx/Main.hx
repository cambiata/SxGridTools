package sx;

import cx.EncodeTools;
import cx.FileTools;
import haxe.Json;
import neko.Web;
import sx.util.ScorxDb;
import sx.util.ScorxTools;
using StringTools;
 
class Main {
	public static function main() 
	{
		var uri = Web.getURI();
		var datafile = '';
		
		var conf = 'server.conf';
		
		var _data = Web.getParams().get('data') ;
		if (_data != null) 
		{
			var confdata = StringTools.urlDecode(_data);
			if (FileTools.exists(confdata))
			{
				var datafile = confdata;
				FileTools.putContent(conf, datafile);
			}
			else
			{
				Sys.println('Can\'t find SQLite file $confdata');
			}
		}
		
		if (FileTools.exists(conf))
		{
			var confdata = FileTools.getContent(conf);
			if (FileTools.exists(confdata)) datafile = confdata;
		}		
		if (!FileTools.exists(datafile)) 
		{
			Sys.println('NO DATA FILE!');
			return;
		}
		
		//-------------------------------------------------------------------------
		
		
		var factorfile = 'factor.conf';
		var factor = 1.0;		
		var _factor = Web.getParams().get('factor') ;
		if (_factor != null)
		{
			factor = Std.parseFloat(_factor);
			if (factor < 0.5 || factor > 1.5) 
			{
				Sys.println('Strange factor value: $factor');
				return;
			}
			//Sys.println('Saving $factorfile');
			FileTools.putContent(factorfile, Std.string(factor));
		}
		
		if (FileTools.exists(factorfile))
		{
			//Sys.println('Reading factor file...');
			var factordata  = FileTools.getContent(factorfile);
			//Sys.println(factordata);
			factor = Std.parseFloat(factordata);
		}		
		
		//---------------------------------------------------------------------------		
		if (uri.startsWith('/media/screen/count/1'))
		{
			var pages = ScorxDb.getPagesBase(datafile);
			Sys.println(Std.string(pages.length));			
			
		}
		else if (uri.startsWith('/media/screen/1/'))
		{
			var pageNr = Std.parseInt(uri.substr('/media/screen/1/'.length));
			//trace(pageNr);
			var pagedata = ScorxDb.getPages(datafile)[pageNr];
			Web.setHeader('Content-Type', 'image/png');
			Sys.println(pagedata.data.toString());
		}
		else if (uri.startsWith('/media/grid/1'))
		{
			var grid = ScorxDb.getGrid(datafile);
			var gridXml = ScorxTools.createGridXml(grid, factor);
			Sys.println(gridXml.toString());
		}	
		else if (uri.startsWith('/media/channels/1'))
		{			
			var chdata = new Array<{Id:String, Label:String}>();
			var channels = ScorxDb.getChannelsBase(datafile);
			for (channel in channels)
			{
				
				chdata.push( { Id:FileTools.getFilename(channel.id), Label:FileTools.getFilename(channel.name) } );
			}
			Sys.println(Json.stringify(chdata));
		}
		else if (uri.startsWith('/media/channel/1'))
		{
			var id = Std.parseInt(uri.substr('/media/channel/1/'.length));		
			var channels = ScorxDb.getChannels(datafile);
			//trace(channels.length);
			
			for (channel in channels)
			{
				if (Std.parseInt(channel.id) == id)
				{
					//Sys.println(Std.parseInt(channel.id) + ' ' +  id);			
					Web.setHeader('Content-Type', 'audio/mpeg3');
					var channeldata = channel.data;
					Sys.println(channeldata.toString());					
					break;
				}
			}
			Sys.println('CANT FIND MP3 '+ id);					
		}		
		else
		{
			Sys.println('SQLITE DATA: ' + datafile + '<br/>GRID FACTOR: ' + factor);
			var playerHtml = FileTools.getContent('player.html');
			Sys.println(playerHtml);			
		}
	}
    
	    
}