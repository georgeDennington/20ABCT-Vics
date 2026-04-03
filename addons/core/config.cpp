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
		icon="\20ABCT_Core\data\ironfist.paa";
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
class CfgUnitInsignia
{
	class 20abct_ironfist_blue
	{
		displayName="[20X] 20th ABCT - Flash - Blue";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\20abct_blue.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_ironfist_green
	{
		displayName="[20X] 20th ABCT - Flash - Green";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\20abct_green.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_5rifles_blue
	{
		displayName="[20X] 20th ABCT - RIFLES - Garrison";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\rifles_blue.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_5rifles_green
	{
		displayName="[20X] 20th ABCT - RIFLES - Deployment";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\rifles_green.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_1amr_blue
	{
		displayName="[20X] 20th ABCT - 1 AMR - Garrison";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\1amr_blue.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_1amr_green
	{
		displayName="[20X] 20th ABCT - 1 AMR - Deployment";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\1amr_green.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_1rlc_green
	{
		displayName="[20X] 1 Regt RLC - Deployment";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\1rlc_green.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_1rlc_blue
	{
		displayName="[20X] 1 Regt RLC - Garrison";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\1rlc_blue.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_1itb_rifles
	{
		displayName="[20X] 1st ITB - RIFLES";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\rifles_itc.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
	class 20abct_1itb_rams
	{
		displayName="[20X] 1st ITB - RAMS";
		author="20th ABCT MCT";
		texture="\20ABCT\icon\rams_itc.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle="";
	};
};
class RCWSOptics;
class Optics_Armored;
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class cfgMods
{
	class 20ABCT_DLC
	{
		action="https://discord.gg/t7PryysJCn";
		dir="20ABCT";
		Logo="\20ABCT\data\UI\Logo.paa";
		LogoOver="\20ABCT\data\UI\Logo_a.paa";
		LogoSmall="\20ABCT\data\UI\Logo.paa";
		name="20th ABCT";
		picture="\20ABCT\data\UI\Logo.paa";
		overview="";
		author="20th ABCT Mod Creation Team";
		tooltip="20th ABCT";
		tooltipOwned="20th ABCT";
	};
	author="20th ABCT MCT";
	timepacked="1771804971";
};
