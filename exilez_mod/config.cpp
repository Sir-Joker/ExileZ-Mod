/*

ExileZ Mod by [FPS]kuplion - Based on ExileZ 2.0 by Patrix87

*/

class CfgPatches
{
	class exilez_mod
	{
		units[] = {};
		weapons[] = {};
		exileZmod_version = "v0.5 - 24/04/17";
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_server_config","Ryanzombies","ryanzombiesfunctions","Ryanzombiesanims","Ryanzombiesfaces"};
	};
};

class CfgFunctions
{
	class exilez_mod
	{
		class exilez_mod_main
		{
			file = "exilez_mod\init";
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
	};
};
