package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/img/default.png", "assets/img/default.png");
			type.set ("assets/img/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/slurm_logo.png", "assets/img/slurm_logo.png");
			type.set ("assets/img/slurm_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/script.xml", "assets/script.xml");
			type.set ("assets/script.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/default.png", "img/default.png");
			type.set ("img/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/slurm_logo.png", "img/slurm_logo.png");
			type.set ("img/slurm_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData