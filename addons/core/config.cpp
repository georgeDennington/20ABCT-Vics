class CfgPatches
{
	class 20ABCT_core
	{
		name="20th ABCT Core";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Modules_F",
			"A3_Weapons_F",
			"A3_Armor_F_EPB_APC_tracked_03",
			"A3_Armor_F_Beta",
			"ace_common",
			"ace_medical",
			"ace_cargo",
			"ace_arsenal",
			"ace_interact_menu",
			"ace_rearm",
			"jsrs2025_config_c",
			"jsrs2025_data",
			"jsrs2025_sounds_weapons",
			"QAV_Challenger"
		};
		author="20th ABCT Mod Development Team";
	};
};
class CfgFactionClasses
{
	class 20ABCT
	{
		displayName="20th ABCT";
		priority=10;
		side=1;
		icon="\20ABCT_Core\data\ui\fist.paa";
	};
};
class CfgEditorSubcategories
{
	class 20ABCT_AFV
	{
		displayName="Armoured Fighting Vehicles";
	};
	class 20ABCT_Supt
	{
		displayName="Support Vehicles";
	};
	class 20ABCT_LRI
	{
		displayName="Light Role Infantry";
	};
	class 20ABCT_AI
	{
		displayName="Armoured Infantry";
	};
	class 20ABCT_Log
	{
		displayName="Logistics and Supplies";
	};
	class 20ABCT_Bots
	{
		displayName="AI-oriented Vehicles";
	};
};
class cfgMods
{
	class 20ABCT_DLC
	{
		action="https://discord.gg/t7PryysJCn";
		dir="20ABCT";
		Logo="\core\data\UI\Logo.paa";
		LogoOver="\core\data\UI\Logo_a.paa";
		LogoSmall="\core\data\UI\Logo.paa";
		name="20th ABCT";
		picture="\core\data\UI\Logo.paa";
		overview="";
		author="20th ABCT Mod Creation Team";
		tooltip="20th ABCT";
		tooltipOwned="20th ABCT";
	};
	author="20th ABCT MCT";
	timepacked="1771804971";
};
