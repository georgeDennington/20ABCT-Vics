class CfgPatches
{
	class 20ABCT_cvrt
	{
		name="20th ABCT CVRT";
		units[]=
		{
			"20ABCT_CVRT_d",
			"20ABCT_CVRT_w",
			"20ABCT_CVRT_d_dep",
			"20ABCT_CVRT_w_dep",
			"20ABCT_CVRT_ai_d",
			"20ABCT_CVRT_ai_w"
		};
		weapons[]={};
		requiredVersion=0.50;
		requiredAddons[]=
		{
			"20ABCT_core",
			"20ABCT_weapons",
			"afuk_vehicles",
			"afuk_common"
		};
		author="20th ABCT Mod Development Team";
	};
};

class Extended_PreInit_EventHandlers
{
	class 20ABCT_cvrt
	{
		init="call compile preprocessFileLineNumbers '\z\20abct\addons\cvrt\XEH_preInit.sqf'";
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

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class viewPilot;
	};
	class Tank_F: Tank
	{
		class AnimationSources;
		class ACE_SelfActions;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class viewOptics;
		class OpticsIn: Optics_Gunner_MBT_03
		{
			class Wide;
			class Medium;
			class Narrow;
		};
		class Sounds;
	};
	class afuk_scimitar2a_base: Tank_F
	{
	};
	class afuk_scimitar2a_d: afuk_scimitar2a_base
	{
	};
	class afuk_scimitar2a_1: afuk_scimitar2a_base
	{
	};
	class 20ABCT_CVRT_d: afuk_scimitar2a_d
	{
		author="AF:UK; edited by 20th ABCT";
		displayName="FV107 Scimitar Mk II (Desert)";
		class AnimationSources: AnimationSources
		{
			class recpanel_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class ecm_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camoslat_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camonetbody_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camonetgun_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camonetturret_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camoslatturret_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class training_hide
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class outerid_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class innerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class autocannon_30mm_revolving
			{
				source="revolving";
				weapon="20ABCT_30mm_L21A2";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="20ABCT_30mm_L21A2";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="20ABCT_30mm_L21A2";
			};
			class recoil_source
			{
				source="reload";
				weapon="20ABCT_30mm_L21A2";
			};
			class Smoke_source
			{
				source="revolving";
				weapon="20ABCT_FV_SmokeLauncher";
			};
		};
		animationList[]=
		{
			"recpanel_toggle",
			0,
			"ecm_toggle",
			0,
			"camoslat_toggle",
			0,
			"camonetbody_toggle",
			0,
			"camonetgun_toggle",
			0,
			"camonetturret_toggle",
			0,
			"camoslatturret_toggle",
			0,
			"outerid_toggle",
			0,
			"training_hide",
			1,
			"innerid_toggle",
			1
		};
		side=1;
		scope=2;
		scopeCurator="2,";
		faction="20ABCT";
		editorSubcategory="20ABCT_AFV";
		crew="20ABCT_AFV_Crew";
		picture="\cvrt\data\UI\Garage_Icon.paa";
		simulation="tankX";
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		forceHideDriver=0;
		showNVGDriver=1;
		showNVGCommander=0;
		castDriverShadow=1;
		enableManualFire=1;
		enginePower=175;
		ace_vehicles_engineStartDelay=2.3;
		ace_refuel_fuelCapacity=386;
		incomingMissileDetectionSystem=0;
		crewVulnerable=1;
		lockDetection=0;
		weapons[]=
		{
			"CarHorn"
		};
		smokeLauncherGrenadeCount=4;
		smokeLauncherOnTurret=1;
		smokeLauncherVelocity=10;
		smokeLauncherAngle=110;
		maximumLoad=4250;
		maxSpeed=75;
		maxFordingDepth=1;
		forceInGarage=1;
		hideWeaponsGunner=1;
		viewGunnerInExternal=0;
		magazines[]={};
		class ace_viewports
		{
			class SLD_commander
			{
				type="screen";
				camLocation[]={0,0,-0.050000001};
				maxDistance=5;
				camAttach[]={0,0};
				screenLocation[]={-0.5,2,2};
				roles[]=
				{
					"driver"
				};
			};
			class SLD_Reverse
			{
				type="";
				camLocation[]={-0.25,-2.5,1.6};
				maxDistance=50;
				camAttach=180;
				screenLocation[]={-0.5,2,1.8};
				roles[]=
				{
					"driver"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_20ABCT_Item_30mm_APDST
			{
				name="20ABCT_Item_30mm_APDST";
				count=33;
			};
			class _xx_20ABCT_Item_30mm_HEIT
			{
				name="20ABCT_Item_30mm_HEIT";
				count=22;
			};
			class _xx_20ABCT_Item_COAX_600
			{
				name="20ABCT_Item_COAX_600";
				count=5;
			};
			class _xx_GME_IFAK
			{
				name="GME_IFAK";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				name="ACE_EarPlugs";
				count=3;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_ACE_EntrenchingTool
			{
				name="ACE_EntrenchingTool";
				count=2;
			};
			class _xx_ACE_ACE_Fortify
			{
				name="ACE_ACE_Fortify";
				count=2;
			};
			class _xx_ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=1;
			};
			class _xx_ACE_Canteen
			{
				name="ACE_Canteen";
				count=3;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				name="ACE_Humanitarian_Ration";
				count=3;
			};
			class _xx_ACE_Clacker
			{
				name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[]={200,400,600,800,1000,1200,1400,1600};
				discreteDistanceInitIndex=2;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minElev=-15;
						maxElev=15;
						minTurn=-25;
						maxTurn=25;
						initTurn=0;
						stabilizedInAxes=1;
						startEngine="false";
						canUseScanner=0;
						weapons[]=
						{
							"Laserdesignator_mounted",
							"20ABCT_FV_SmokeLauncher"
						};
						magazines[]=
						{
							"Laserbatteries",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						class ViewOptics: ViewOptics
						{
							initFov=0.25;
							minFov=0.017857144;
							maxFov=0.25;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
						};
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								visionMode[]=
								{
									"Normal"
								};
							};
							class Medium: Narrow
							{
								initFov=0.025;
								minFov=0.025;
								maxFov=0.025;
								visionMode[]=
								{
									"Normal"
								};
							};
							class WideTI: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class NarrowTI: Narrow
							{
								initFov=0.025;
								minFov=0.025;
								maxFov=0.025;
								gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class VeryNarrow: Narrow
							{
								initFov=0.017857144;
								minFov=0.017857144;
								maxFov=0.017857144;
								gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
						};
					};
				};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class WideDay: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						gunnerOpticsShowCursor=0;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Medium: Medium
					{
						initFov=0.025;
						minFov=0.025;
						maxFov=0.025;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Wide: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class NarrowTI: Medium
					{
						initFov=0.025;
						minFov=0.025;
						maxFov=0.025;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class VeryNarrow: Medium
					{
						initFov=0.017857144;
						minFov=0.017857144;
						maxFov=0.017857144;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
				};
				stabilizedInAxes="StabilizedInAxesNone";
				maxHorizontalRotSpeed=0.25;
				maxVerticalRotSpeed=0.25;
				startEngine="false";
				inGunnerMayFire=1;
				gunnerOutOpticsShowCursor=0;
				initElev=15;
				initTurn=0;
				maxElev=35;
				minElev=-5.8000002;
				canUseScanner=0;
				weapons[]=
				{
					"20ABCT_safe",
					"20ABCT_30mm_L21A2",
					"20ABCT_762_L37A1"
				};
				magazines[]={};
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Crew Intercom";
				shortName="INT";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				masterPositons[]=
				{
					"commander"
				};
				connectedByDefault=1;
			};
		};
		acre_hasInfantryPhone=0;
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Bowman Radio 1";
				shortName="Radio 1";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
			class Rack_2
			{
				displayName="Bowman Radio 2";
				shortName="Radio 2";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class RARDENStatus
			{
				icon="\cvrt\data\UI\RARDEN.paa";
				displayName="RARDEN Status";
				condition="player == (vehicle player) turretUnit [0,0]";
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
				statement="execVM '\z\20abct\addons\cvrt\scripts\rardenStatus.sqf'";
				showDisabled=0;
				priority=10;
			};
			class LoadRARDEN
			{
				icon="\cvrt\data\UI\RARDEN.paa";
				displayName="Load RARDEN";
				condition="player == (vehicle player) turretUnit [0,0] && ({_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']} count ((vehicle player) magazinesTurret [0])) < 2";
				exceptions[]=
				{
					"isNotSitting"
				};
				class APDSLoad
				{
					displayName="Load SABOT";
					condition="'20ABCT_Item_30mm_APDST' in (magazineCargo (vehicle player))";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_Item_30mm_APDST', '20ABCT_APDS_mag', 'Loading SABOT'] execVM '\z\20abct\addons\cvrt\scripts\loadRarden.sqf'";
					exceptions[]={};
					priority=3;
				};
				class HELoad
				{
					displayName="Load SHELL";
					condition="'20ABCT_HEIT_mag' in (magazineCargo (vehicle player))";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_Item_30mm_HEIT', '20ABCT_HEIT_mag', 'Loading SHELL'] execVM '\z\20abct\addons\cvrt\scripts\loadRarden.sqf'";
					exceptions[]={};
					priority=2;
				};
			};
			class UnloadRARDEN
			{
				icon="\cvrt\data\UI\RARDEN.paa";
				displayName="Unload RARDEN";
				condition="player == (vehicle player) turretUnit [0,0] && ({_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']} count ((vehicle player) magazinesTurret [0])) > 0";
				exceptions[]=
				{
					"isNotSitting"
				};
				class Unload_Mag1_APDS
				{
					displayName="Mag 1: SABOT";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 1 && {(_rm select 0) == '20ABCT_APDS_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_APDS_mag', '20ABCT_Item_30mm_APDS', 'Unloading SABOT'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=2;
				};
				class Unload_Mag1_HEIT
				{
					displayName="Mag 1: SHELL";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 1 && {(_rm select 0) == '20ABCT_HEIT_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_HEIT_mag', '20ABCT_Item_30mm_HEIT', 'Unloading SHELL'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=2;
				};
				class Unload_Mag2_APDS
				{
					displayName="Mag 2: SABOT";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 2 && {(_rm select 1) == '20ABCT_APDS_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_APDS_mag', '20ABCT_Item_30mm_APDS', 'Unloading SABOT'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=1;
				};
				class Unload_Mag2_HEIT
				{
					displayName="Mag 2: SHELL";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 2 && {(_rm select 1) == '20ABCT_HEIT_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_HEIT_mag', '20ABCT_Item_30mm_HEIT', 'Unloading SHELL'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=1;
				};
			};
			class L37Status
			{
				displayName="COAX Status";
				condition="player == (vehicle player) turretUnit [0,0]";
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
				statement="execVM '\z\20abct\addons\cvrt\scripts\l37Status.sqf'";
				showDisabled=0;
				priority=10;
			};
			class LoadL37
			{
				displayName="Load COAX";
				condition="player == (vehicle player) turretUnit [0,0] && ({_x in ['20ABCT_600Rnd_762x51_Red']} count ((vehicle player) magazinesTurret [0])) < 1";
				exceptions[]=
				{
					"isNotSitting"
				};
				class Load600
				{
					displayName="Load 600 rds";
					condition="'20ABCT_Item_COAX_600' in (items player) || '20ABCT_Item_COAX_600' in (itemCargo (vehicle player))";
					statement="['20ABCT_Item_COAX_600', '20ABCT_600Rnd_762x51_Red', 'Loading 600 rds'] execVM '\z\20abct\addons\cvrt\scripts\loadL37.sqf'";
					exceptions[]={};
					priority=3;
				};
			};
			class UnloadL37
			{
				displayName="Unload COAX";
				condition="player == (vehicle player) turretUnit [0,0] && ({_x in ['20ABCT_600Rnd_762x51_Red']} count ((vehicle player) magazinesTurret [0])) > 0";
				exceptions[]=
				{
					"isNotSitting"
				};
				class UnloadL37
				{
					displayName="Unload 600 rds";
					condition="'20ABCT_600Rnd_762x51_Red' in ((vehicle player) magazinesTurret [0])";
					statement="['20ABCT_600Rnd_762x51_Red', '20ABCT_Item_COAX_600', 'Unloading 600 rds'] execVM '\z\20abct\addons\cvrt\scripts\unloadL37.sqf'";
					exceptions[]={};
					priority=3;
				};
			};
			class 20ABCT_ACE_Flag
			{
				scope=2;
				displayName="Flag";
				condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\cvrt\data\fist_ca.paa";
				class 20ABCT_ACE_RaiseFlag
				{
					scope=2;
					displayName="Raise";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_uk_CO.paa"";";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_LowerFlag
				{
					scope=2;
					displayName="Lower";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture """";";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\cvrt\data\fist_ca.paa";
				class 20ABCT_ACE_Set_Texture_61A
				{
					scope=2;
					displayName="61A";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_a_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61B
				{
					scope=2;
					displayName="61B";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_b_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61C
				{
					scope=2;
					displayName="61C";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_c_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61D
				{
					scope=2;
					displayName="61D";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_d_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
		};
	};
	class 20ABCT_CVRT_w: afuk_scimitar2a_1
	{
		author="AF: UK, edited by 20th ABCT";
		displayName="FV107 Scimitar Mk II (Woodland)";
		class AnimationSources: AnimationSources
		{
			class recpanel_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class ecm_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camoslat_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camonetbody_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camonetgun_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camonetturret_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class camoslatturret_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class training_hide
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class outerid_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class innerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class autocannon_30mm_revolving
			{
				source="revolving";
				weapon="20ABCT_30mm_L21A2";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="20ABCT_30mm_L21A2";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="20ABCT_30mm_L21A2";
			};
			class recoil_source
			{
				source="reload";
				weapon="20ABCT_30mm_L21A2";
			};
			class Smoke_source
			{
				source="revolving";
				weapon="20ABCT_FV_SmokeLauncher";
			};
		};
		animationList[]=
		{
			"recpanel_toggle",
			0,
			"ecm_toggle",
			0,
			"camoslat_toggle",
			0,
			"camonetbody_toggle",
			0,
			"camonetgun_toggle",
			0,
			"camonetturret_toggle",
			0,
			"camoslatturret_toggle",
			0,
			"training_hide",
			1,
			"outerid_toggle",
			0,
			"innerid_toggle",
			1
		};
		side=1;
		scope=2;
		scopeCurator="2,";
		faction="20ABCT";
		editorSubcategory="20ABCT_AFV";
		crew="20ABCT_AFV_Crew";
		picture="\cvrt\data\UI\Garage_Icon.paa";
		simulation="tankX";
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		forceHideDriver=0;
		showNVGDriver=1;
		showNVGCommander=0;
		castDriverShadow=1;
		enableManualFire=1;
		enginePower=175;
		ace_refuel_fuelCapacity=386;
		incomingMissileDetectionSystem=0;
		crewVulnerable=1;
		lockDetection=0;
		weapons[]=
		{
			"CarHorn"
		};
		smokeLauncherGrenadeCount=4;
		smokeLauncherOnTurret=1;
		smokeLauncherVelocity=10;
		smokeLauncherAngle=110;
		maximumLoad=4250;
		maxSpeed=75;
		ace_vehicles_engineStartDelay=2.3;
		maxFordingDepth=1;
		forceInGarage=1;
		hideWeaponsGunner=1;
		viewGunnerInExternal=0;
		magazines[]={};
		class ace_viewports
		{
			class SLD_commander
			{
				type="screen";
				camLocation[]={0,0,-0.050000001};
				maxDistance=5;
				camAttach[]={0,0};
				screenLocation[]={-0.5,2,2};
				roles[]=
				{
					"driver"
				};
			};
			class SLD_Reverse
			{
				type="";
				camLocation[]={-0.25,-2.5,1.6};
				maxDistance=50;
				camAttach=180;
				screenLocation[]={-0.5,2,1.8};
				roles[]=
				{
					"driver"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_20ABCT_Item_30mm_APDST
			{
				name="20ABCT_Item_30mm_APDST";
				count=33;
			};
			class _xx_20ABCT_Item_30mm_HEIT
			{
				name="20ABCT_Item_30mm_HEIT";
				count=22;
			};
			class _xx_20ABCT_Item_COAX_600
			{
				name="20ABCT_Item_COAX_600";
				count=5;
			};
			class _xx_GME_IFAK
			{
				name="GME_IFAK";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				name="ACE_EarPlugs";
				count=3;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_ACE_EntrenchingTool
			{
				name="ACE_EntrenchingTool";
				count=2;
			};
			class _xx_ACE_ACE_Fortify
			{
				name="ACE_ACE_Fortify";
				count=2;
			};
			class _xx_ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=1;
			};
			class _xx_ACE_Canteen
			{
				name="ACE_Canteen";
				count=3;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				name="ACE_Humanitarian_Ration";
				count=3;
			};
			class _xx_ACE_Clacker
			{
				name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[]={200,400,600,800,1000,1200,1400,1600};
				discreteDistanceInitIndex=2;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minElev=-15;
						maxElev=15;
						minTurn=-25;
						maxTurn=25;
						initTurn=0;
						stabilizedInAxes=1;
						startEngine="false";
						canUseScanner=0;
						weapons[]=
						{
							"Laserdesignator_mounted",
							"20ABCT_FV_SmokeLauncher"
						};
						magazines[]=
						{
							"Laserbatteries",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						class ViewOptics: ViewOptics
						{
							initFov=0.25;
							minFov=0.017857144;
							maxFov=0.25;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
						};
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								visionMode[]=
								{
									"Normal"
								};
							};
							class Medium: Narrow
							{
								initFov=0.025;
								minFov=0.025;
								maxFov=0.025;
								visionMode[]=
								{
									"Normal"
								};
							};
							class WideTI: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class NarrowTI: Narrow
							{
								initFov=0.025;
								minFov=0.025;
								maxFov=0.025;
								gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class VeryNarrow: Narrow
							{
								initFov=0.017857144;
								minFov=0.017857144;
								maxFov=0.017857144;
								gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
						};
					};
				};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class WideDay: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						gunnerOpticsShowCursor=0;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Medium: Medium
					{
						initFov=0.025;
						minFov=0.025;
						maxFov=0.025;
						visionMode[]=
						{
							"Normal"
						};
					};
					class WideTI: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class NarrowTI: Medium
					{
						initFov=0.025;
						minFov=0.025;
						maxFov=0.025;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class VeryNarrow: Medium
					{
						initFov=0.017857144;
						minFov=0.017857144;
						maxFov=0.017857144;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
				};
				stabilizedInAxes="StabilizedInAxesNone";
				maxHorizontalRotSpeed=0.25;
				maxVerticalRotSpeed=0.25;
				startEngine="false";
				inGunnerMayFire=1;
				gunnerOutOpticsShowCursor=0;
				initElev=15;
				initTurn=0;
				maxElev=35;
				minElev=-5.8000002;
				canUseScanner=0;
				weapons[]=
				{
					"20ABCT_safe",
					"20ABCT_30mm_L21A2",
					"20ABCT_762_L37A1"
				};
				magazines[]={};
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Crew Intercom";
				shortName="INT";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				masterPositons[]=
				{
					"commander"
				};
				connectedByDefault=1;
			};
		};
		acre_hasInfantryPhone=0;
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Bowman Radio 1";
				shortName="Radio 1";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
			class Rack_2
			{
				displayName="Bowman Radio 2";
				shortName="Radio 2";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class RARDENStatus
			{
				icon="\cvrt\data\UI\RARDEN.paa";
				displayName="RARDEN Status";
				condition="player == (vehicle player) turretUnit [0,0]";
				exceptions[]=
				{
					"isNotSitting"
				};
				statement="execVM '\z\20abct\addons\cvrt\scripts\rardenStatus.sqf'";
				showDisabled=0;
				priority=10;
			};
			class LoadRARDEN
			{
				icon="\cvrt\data\UI\RARDEN.paa";
				displayName="Load RARDEN";
				condition="player == (vehicle player) turretUnit [0,0] && ({_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']} count ((vehicle player) magazinesTurret [0])) < 2";
				exceptions[]=
				{
					"isNotSitting"
				};
				class APDSLoad
				{
					displayName="Load SABOT";
					condition="'20ABCT_APDS_mag' in (magazineCargo (vehicle player))";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_APDS_mag', 'Loading SABOT'] execVM '\z\20abct\addons\cvrt\scripts\loadRarden.sqf'";
					exceptions[]={};
					priority=3;
				};
				class HELoad
				{
					displayName="Load SHELL";
					condition="'20ABCT_HEIT_mag' in (magazineCargo (vehicle player))";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_HEIT_mag', 'Loading SHELL'] execVM '\z\20abct\addons\cvrt\scripts\loadRarden.sqf'";
					exceptions[]={};
					priority=2;
				};
			};
			class UnloadRARDEN
			{
				icon="\cvrt\data\UI\RARDEN.paa";
				displayName="Unload RARDEN";
				condition="player == (vehicle player) turretUnit [0,0] && ({_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']} count ((vehicle player) magazinesTurret [0])) > 0";
				exceptions[]=
				{
					"isNotSitting"
				};
				class Unload_Mag1_APDS
				{
					displayName="Mag 1: SABOT";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 1 && {(_rm select 0) == '20ABCT_APDS_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_APDS_mag', 'Unloading SABOT'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=2;
				};
				class Unload_Mag1_HEIT
				{
					displayName="Mag 1: SHELL";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 1 && {(_rm select 0) == '20ABCT_HEIT_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_HEIT_mag', 'Unloading SHELL'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=2;
				};
				class Unload_Mag2_APDS
				{
					displayName="Mag 2: SABOT";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 2 && {(_rm select 1) == '20ABCT_APDS_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_APDS_mag', 'Unloading SABOT'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=1;
				};
				class Unload_Mag2_HEIT
				{
					displayName="Mag 2: SHELL";
					condition="call {private _rm = ((vehicle player) magazinesTurret [0]) select {_x in ['20ABCT_APDS_mag','20ABCT_HEIT_mag']}; count _rm >= 2 && {(_rm select 1) == '20ABCT_HEIT_mag'}}";
					icon="\cvrt\data\UI\RARDEN.paa";
					statement="['20ABCT_HEIT_mag', 'Unloading SHELL'] execVM '\z\20abct\addons\cvrt\scripts\unloadRarden.sqf'";
					exceptions[]={};
					priority=1;
				};
			};
			class LoadCOAX
			{
				icon="\cvrt\data\UI\COAX.paa";
				displayName="Load COAX";
				condition="player == (vehicle player) turretUnit [0,0]";
				exceptions[]=
				{
					"isNotSitting"
				};
				class CoaxLoad
				{
					displayName="COAX Belt (400 rds)";
					condition="'20ABCT_Item_COAX_400' in (items player) || '20ABCT_Item_COAX_400' in ((getItemCargo (vehicle player)) select 0)";
					icon="\cvrt\data\UI\COAX.paa";
					statement="if ('20ABCT_Item_COAX_400' in items player) then {player removeItem '20ABCT_Item_COAX_400'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_COAX_400',-1]}; (vehicle player) addMagazineTurret ['20ABCT_400Rnd_762x51_Red',[0]]";
					exceptions[]={};
					priority=1;
				};
				class CoaxLoad1
				{
					displayName="COAX Belt (600 rds)";
					condition="'20ABCT_Item_COAX_600' in (items player) || '20ABCT_Item_COAX_600' in ((getItemCargo (vehicle player)) select 0)";
					icon="\cvrt\data\UI\COAX.paa";
					statement="if ('20ABCT_Item_COAX_600' in items player) then {player removeItem '20ABCT_Item_COAX_600'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_COAX_600',-1]}; (vehicle player) addMagazineTurret ['20ABCT_600Rnd_762x51_Red',[0]]";
					exceptions[]={};
					priority=1;
				};
				class CoaxLoad2
				{
					displayName="GPMG Belt (100 rds)";
					condition="'20ABCT_Item_GPMG_100' in (items player) || '20ABCT_Item_GPMG_100' in ((getItemCargo (vehicle player)) select 0)";
					icon="\cvrt\data\UI\COAX.paa";
					statement="if ('20ABCT_Item_GPMG_100' in items player) then {player removeItem '20ABCT_Item_GPMG_100'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_GPMG_100',-1]}; (vehicle player) addMagazineTurret ['20ABCT_COAX2_mag',[0]]";
					exceptions[]={};
					priority=1;
				};
				class CoaxLoad3
				{
					displayName="GPMG Belt (200 rds)";
					condition="'20ABCT_Item_GPMG_200' in (items player) || '20ABCT_Item_GPMG_200' in ((getItemCargo (vehicle player)) select 0)";
					icon="\cvrt\data\UI\COAX.paa";
					statement="if ('20ABCT_Item_GPMG_200' in items player) then {player removeItem '20ABCT_Item_GPMG_200'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_GPMG_200',-1]}; (vehicle player) addMagazineTurret ['20ABCT_COAX3_mag',[0]]";
					exceptions[]={};
					priority=1;
				};
				class CoaxLoad4
				{
					displayName="COAX Belt (800 rds)";
					condition="'20ABCT_Item_COAX_800' in (items player) || '20ABCT_Item_COAX_800' in ((getItemCargo (vehicle player)) select 0)";
					icon="\cvrt\data\UI\COAX.paa";
					statement="if ('20ABCT_Item_COAX_800' in items player) then {player removeItem '20ABCT_Item_COAX_800'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_COAX_800',-1]}; (vehicle player) addMagazineTurret ['20ABCT_COAX4_mag',[0]]";
					exceptions[]={};
					priority=1;
				};
			};
			class 20ABCT_ACE_Flag
			{
				scope=2;
				displayName="Flag";
				condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\cvrt\data\UI\fist_ca.paa";
				class 20ABCT_ACE_RaiseFlag
				{
					scope=2;
					displayName="Raise";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_uk_CO.paa"";";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_LowerFlag
				{
					scope=2;
					displayName="Lower";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture """";";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\core\data\fist_ca.paa";
				class 20ABCT_ACE_Set_Texture_61A
				{
					scope=2;
					displayName="61A";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_a_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61B
				{
					scope=2;
					displayName="61B";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_b_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61C
				{
					scope=2;
					displayName="61C";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_c_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61D
				{
					scope=2;
					displayName="61D";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_d_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
		};
	};
	class 20ABCT_CVRT_d_dep: 20ABCT_CVRT_d
	{
		displayName="FV107 Scimitar Mk II (TES, Desert)";
		class AnimationSources: AnimationSources
		{
			class recpanel_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class ecm_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslat_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetbody_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetgun_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslatturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class training_hide
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class outerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class innerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
		};
		animationList[]=
		{
			"recpanel_toggle",
			0,
			"ecm_toggle",
			1,
			"camoslat_toggle",
			1,
			"camonetbody_toggle",
			1,
			"camonetgun_toggle",
			1,
			"camonetturret_toggle",
			1,
			"camoslatturret_toggle",
			1,
			"training_hide",
			0,
			"outerid_toggle",
			1,
			"innerid_toggle",
			0
		};
	};
	class 20ABCT_CVRT_w_dep: 20ABCT_CVRT_w
	{
		displayName="FV107 Scimitar Mk II (TES, Woodland)";
		class AnimationSources: AnimationSources
		{
			class recpanel_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class ecm_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslat_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetbody_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetgun_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslatturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class training_hide
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class outerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class innerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
		};
		animationList[]=
		{
			"recpanel_toggle",
			0,
			"ecm_toggle",
			1,
			"camoslat_toggle",
			1,
			"camonetbody_toggle",
			1,
			"camonetgun_toggle",
			1,
			"camonetturret_toggle",
			1,
			"camoslatturret_toggle",
			1,
			"training_hide",
			0,
			"outerid_toggle",
			1,
			"innerid_toggle",
			0
		};
	};
	class 20ABCT_CVRT_ai_d: afuk_scimitar2a_d
	{
		author="AF:UK; edited by 20th ABCT";
		displayName="Scimitar AI (Desert)";
		side=1;
		scope=2;
		scopeCurator="2,";
		faction="20ABCT";
		editorSubcategory="20ABCT_Bots";
		crew="20ABCT_AFV_Crew";
		picture="\cvrt\data\UI\Garage_Icon.paa";
		simulation="tankX";
		class AnimationSources: AnimationSources
		{
			class recpanel_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class ecm_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslat_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetbody_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetgun_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslatturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class training_hide
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class outerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class innerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
		};
		animationList[]=
		{
			"recpanel_toggle",
			0,
			"ecm_toggle",
			1,
			"camoslat_toggle",
			1,
			"camonetbody_toggle",
			1,
			"camonetgun_toggle",
			1,
			"camonetturret_toggle",
			1,
			"camoslatturret_toggle",
			1,
			"training_hide",
			0,
			"outerid_toggle",
			1,
			"innerid_toggle",
			0
		};
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		forceHideDriver=0;
		showNVGDriver=1;
		showNVGCommander=0;
		castDriverShadow=1;
		enableManualFire=1;
		enginePower=175;
		ace_vehicles_engineStartDelay=2.3;
		ace_refuel_fuelCapacity=386;
		incomingMissileDetectionSystem=0;
		crewVulnerable=1;
		lockDetection=0;
		weapons[]=
		{
			"CarHorn"
		};
		smokeLauncherGrenadeCount=4;
		smokeLauncherOnTurret=1;
		smokeLauncherVelocity=10;
		smokeLauncherAngle=110;
		maximumLoad=200;
		maxSpeed=75;
		maxFordingDepth=1;
		forceInGarage=0;
		hideWeaponsGunner=1;
		viewGunnerInExternal=0;
		magazines[]={};
		class ace_viewports
		{
			class SLD_commander
			{
				type="screen";
				camLocation[]={0,0,-0.050000001};
				maxDistance=5;
				camAttach[]={0,0};
				screenLocation[]={-0.5,2,2};
				roles[]=
				{
					"driver"
				};
			};
			class SLD_Reverse
			{
				type="";
				camLocation[]={-0.25,-2.5,1.6};
				maxDistance=50;
				camAttach=180;
				screenLocation[]={-0.5,2,1.8};
				roles[]=
				{
					"driver"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_GME_IFAK
			{
				Name="GME_IFAK";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				Name="ACE_EarPlugs";
				count=3;
			};
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=1;
			};
			class _xx_ACE_EntrenchingTool
			{
				Name="ACE_EntrenchingTool";
				count=2;
			};
			class _xx_ACE_ACE_Fortify
			{
				Name="ACE_ACE_Fortify";
				count=2;
			};
			class _xx_ACE_wirecutter
			{
				Name="ACE_wirecutter";
				count=1;
			};
			class _xx_ACE_Canteen
			{
				Name="ACE_Canteen";
				count=3;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				Name="ACE_Humanitarian_Ration";
				count=3;
			};
			class _xx_ACE_Clacker
			{
				Name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minElev=-15;
						maxElev=15;
						minTurn=-25;
						maxTurn=25;
						initTurn=0;
						startEngine="false";
						canUseScanner=0;
						weapons[]=
						{
							"Laserdesignator_mounted",
							"smokelauncher"
						};
						magazines[]=
						{
							"Laserbatteries",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						class ViewOptics: ViewOptics
						{
							initFov=0.25;
							minFov=0.02;
							maxFov=0.25;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
						};
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								visionMode[]=
								{
									"Normal"
								};
							};
							class Medium: Narrow
							{
								initFov=0.027000001;
								minFov=0.027000001;
								maxFov=0.027000001;
								visionMode[]=
								{
									"Normal"
								};
							};
							class WideTI: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class NarrowTI: Narrow
							{
								initFov=0.031300001;
								minFov=0.031300001;
								maxFov=0.031300001;
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class VeryNarrow: Narrow
							{
								initFov=0.02;
								minFov=0.02;
								maxFov=0.02;
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
						};
					};
				};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						gunnerOpticsShowCursor=0;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Medium: Medium
					{
						initFov=0.027000001;
						minFov=0.027000001;
						maxFov=0.027000001;
						visionMode[]=
						{
							"Normal"
						};
					};
					class WideTI: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class MediumTI: Medium
					{
						initFov=0.0625;
						minFov=0.0625;
						maxFov=0.0625;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class NarrowTI: Medium
					{
						initFov=0.031300001;
						minFov=0.031300001;
						maxFov=0.031300001;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class VeryNarrow: Medium
					{
						initFov=0.02;
						minFov=0.02;
						maxFov=0.02;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
				};
				stabilizedInAxes="StabilizedInAxesNone";
				maxHorizontalRotSpeed=0.25;
				maxVerticalRotSpeed=0.25;
				startEngine="false";
				inGunnerMayFire=1;
				gunnerOutOpticsShowCursor=0;
				initElev=15;
				initTurn=0;
				maxElev=35;
				minElev=-10;
				canUseScanner=0;
				weapons[]=
				{
					"20ABCT_safe",
					"20ABCT_30mm_L21A2_ai",
					"20ABCT_762_L37A1"
				};
				magazines[]=
				{
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red"
				};
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Crew Intercom";
				shortName="INT";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				masterPositons[]=
				{
					"commander"
				};
				connectedByDefault=1;
			};
		};
		acre_hasInfantryPhone=0;
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Bowman Set A";
				shortName="Set-A";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
			class Rack_2
			{
				displayName="Bowman Set B";
				shortName="Set-B";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class 20ABCT_ACE_Flag
			{
				scope=2;
				displayName="Flag";
				condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\cvrt\data\fist_ca.paa";
				class 20ABCT_ACE_RaiseFlag
				{
					scope=2;
					displayName="Raise";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_uk_CO.paa"";";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_LowerFlag
				{
					scope=2;
					displayName="Lower";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture """";";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\cvrt\data\fist_ca.paa";
				class 20ABCT_ACE_Set_Texture_61A
				{
					scope=2;
					displayName="61A";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_a_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61B
				{
					scope=2;
					displayName="61B";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_b_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61C
				{
					scope=2;
					displayName="61C";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_c_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61D
				{
					scope=2;
					displayName="61D";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_d_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
		};
	};
	class 20ABCT_CVRT_ai_w: afuk_scimitar2a_1
	{
		author="AF: UK, edited by 20th ABCT";
		displayName="Scimitar AI (Green)";
		side=1;
		scope=2;
		scopeCurator="2,";
		faction="20ABCT";
		editorSubcategory="20ABCT_Bots";
		crew="20ABCT_AFV_Crew";
		picture="\cvrt\data\UI\Garage_Icon.paa";
		simulation="tankX";
		class AnimationSources: AnimationSources
		{
			class recpanel_toggle
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class ecm_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslat_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetbody_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetgun_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camonetturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class camoslatturret_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class training_hide
			{
				animPeriod=0.001;
				initPhase=0;
				source="user";
			};
			class outerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class innerid_toggle
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
		};
		animationList[]=
		{
			"recpanel_toggle",
			0,
			"ecm_toggle",
			1,
			"camoslat_toggle",
			1,
			"camonetbody_toggle",
			1,
			"camonetgun_toggle",
			1,
			"camonetturret_toggle",
			1,
			"camoslatturret_toggle",
			1,
			"training_hide",
			0,
			"outerid_toggle",
			1,
			"innerid_toggle",
			0
		};
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		forceHideDriver=0;
		showNVGDriver=1;
		showNVGCommander=0;
		castDriverShadow=1;
		enableManualFire=1;
		enginePower=175;
		ace_refuel_fuelCapacity=386;
		incomingMissileDetectionSystem=0;
		crewVulnerable=1;
		lockDetection=0;
		weapons[]=
		{
			"CarHorn"
		};
		smokeLauncherGrenadeCount=4;
		smokeLauncherOnTurret=1;
		smokeLauncherVelocity=10;
		smokeLauncherAngle=110;
		maximumLoad=200;
		maxSpeed=75;
		ace_vehicles_engineStartDelay=2.3;
		maxFordingDepth=1;
		forceInGarage=0;
		hideWeaponsGunner=1;
		viewGunnerInExternal=0;
		magazines[]={};
		class ace_viewports
		{
			class SLD_commander
			{
				type="screen";
				camLocation[]={0,0,-0.050000001};
				maxDistance=5;
				camAttach[]={0,0};
				screenLocation[]={-0.5,2,2};
				roles[]=
				{
					"driver"
				};
			};
			class SLD_Reverse
			{
				type="";
				camLocation[]={-0.25,-2.5,1.6};
				maxDistance=50;
				camAttach=180;
				screenLocation[]={-0.5,2,1.8};
				roles[]=
				{
					"driver"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_GME_IFAK
			{
				Name="GME_IFAK";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				Name="ACE_EarPlugs";
				count=3;
			};
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=1;
			};
			class _xx_ACE_EntrenchingTool
			{
				Name="ACE_EntrenchingTool";
				count=2;
			};
			class _xx_ACE_ACE_Fortify
			{
				Name="ACE_ACE_Fortify";
				count=2;
			};
			class _xx_ACE_wirecutter
			{
				Name="ACE_wirecutter";
				count=1;
			};
			class _xx_ACE_Canteen
			{
				Name="ACE_Canteen";
				count=3;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				Name="ACE_Humanitarian_Ration";
				count=3;
			};
			class _xx_ACE_Clacker
			{
				Name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minElev=-15;
						maxElev=15;
						minTurn=-25;
						maxTurn=25;
						initTurn=0;
						startEngine="false";
						canUseScanner=0;
						weapons[]=
						{
							"Laserdesignator_mounted",
							"smokelauncher"
						};
						magazines[]=
						{
							"Laserbatteries",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						class ViewOptics: ViewOptics
						{
							initFov=0.25;
							minFov=0.02;
							maxFov=0.25;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
						};
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								visionMode[]=
								{
									"Normal"
								};
							};
							class Medium: Narrow
							{
								initFov=0.027000001;
								minFov=0.027000001;
								maxFov=0.027000001;
								visionMode[]=
								{
									"Normal"
								};
							};
							class WideTI: Wide
							{
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class MediumTI: Narrow
							{
								initFov=0.0625;
								minFov=0.0625;
								maxFov=0.0625;
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class NarrowTI: Narrow
							{
								initFov=0.031300001;
								minFov=0.031300001;
								maxFov=0.031300001;
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
							class VeryNarrow: Narrow
							{
								initFov=0.02;
								minFov=0.02;
								maxFov=0.02;
								visionMode[]=
								{
									"TI"
								};
								thermalMode[]={0,1};
							};
						};
					};
				};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsShowCursor=0;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Medium: Medium
					{
						initFov=0.027000001;
						minFov=0.027000001;
						maxFov=0.027000001;
						visionMode[]=
						{
							"Normal"
						};
					};
					class WideTI: Wide
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class MediumTI: Medium
					{
						initFov=0.0625;
						minFov=0.0625;
						maxFov=0.0625;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class NarrowTI: Medium
					{
						initFov=0.031300001;
						minFov=0.031300001;
						maxFov=0.031300001;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
					class VeryNarrow: Medium
					{
						initFov=0.02;
						minFov=0.02;
						maxFov=0.02;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
				};
				stabilizedInAxes="StabilizedInAxesNone";
				maxHorizontalRotSpeed=0.25;
				maxVerticalRotSpeed=0.25;
				startEngine="false";
				inGunnerMayFire=1;
				gunnerOutOpticsShowCursor=0;
				initElev=15;
				initTurn=0;
				maxElev=35;
				minElev=-10;
				canUseScanner=0;
				weapons[]=
				{
					"20ABCT_safe",
					"20ABCT_30mm_L21A2_ai",
					"20ABCT_762_L37A1"
				};
				magazines[]=
				{
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_APDS_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_HEIT_mag",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red",
					"20ABCT_600Rnd_762x51_Red"
				};
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Crew Intercom";
				shortName="INT";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				masterPositons[]=
				{
					"commander"
				};
				connectedByDefault=1;
			};
		};
		acre_hasInfantryPhone=0;
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Bowman Set A";
				shortName="Set-A";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
			class Rack_2
			{
				displayName="Bowman Set B";
				shortName="Set-B";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"gunner",
					"commander"
				};
				disabledPositions[]=
				{
					"driver",

					{
						"cargo",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemoveable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class 20ABCT_ACE_Flag
			{
				scope=2;
				displayName="Flag";
				condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\cvrt\data\fist_ca.paa";
				class 20ABCT_ACE_RaiseFlag
				{
					scope=2;
					displayName="Raise";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture ""\A3\Data_F\Flags\flag_uk_CO.paa"";";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_LowerFlag
				{
					scope=2;
					displayName="Lower";
					condition="player == vehicle player turretUnit [0,0] || player == vehicle player turretUnit [0]";
					statement="vehicle _player forceFlagTexture """";";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\cvrt\data\fist_ca.paa";
				class 20ABCT_ACE_Set_Texture_61A
				{
					scope=2;
					displayName="61A";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_a_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61B
				{
					scope=2;
					displayName="61B";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_b_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61C
				{
					scope=2;
					displayName="61C";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_c_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
				class 20ABCT_ACE_Set_Texture_61D
				{
					scope=2;
					displayName="61D";
					condition="_player == commander _target";
					statement="vehicle player setObjectTextureGlobal[6,'afuk\afuk_common\idplate\n_w_6_ca.paa'];vehicle player setObjectTextureGlobal[7,'afuk\afuk_common\idplate\n_w_1_ca.paa'];vehicle player setObjectTextureGlobal[8,'afuk\afuk_common\idplate\l_w_d_ca.paa']";
					showDisabled=0;
					priority=1;
					icon="";
				};
			};
		};
	};
};
