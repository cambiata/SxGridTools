package sx;
import cx.FileTools;

/**
 * ...
 * @author Jonas Nyström
 */
class Environment
{	
	public static var exeDir = FileTools.getDirectory(Sys.executablePath());	
	public static var exePdfTk = exeDir + '\\pdftk.exe';
	public static var exeConvert = exeDir + '\\convert.exe';
	public static var exeGrideditor = exeDir + '\\ScorxSqLite1.exe'; 
	
	public static var tempDir = exeDir + '/temp';
	
	
}