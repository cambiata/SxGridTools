package sx;

/**
 * ...
 * @author Jonas Nyström
 */
class Files
{
	static public var projectName:String = '';
	static public var pdfFileName:String = '';
	static public var mp3FilesNames:Array<String> = [];
	static public var pngFilesNames:Array<String> = [];	
	static public var sqliteFileName:String = '';
	
	static public var observers:Array < Void->Void > = [] ;
	static public var xmlData:Xml;
	static public function notify():Void
	{
		for (observer in observers) observer();
	}
}