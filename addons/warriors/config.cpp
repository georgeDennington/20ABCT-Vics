class CfgPatches
{
	class 20ABCT_warriors
	{
		name="20th ABCT Warriors";
		units[]=
		{
			"20ABCT_fv510_warrior_base",
			"20ABCT_fv510_warrior_w",
			"20ABCT_fv510_warrior_dep",
			"20ABCT_fv510_warrior_relic",
			"20ABCT_fv510_test",
			"20ABCT_fv514_maov",
			"20ABCT_fv510_warrior_ai_base",
			"20ABCT_fv510_warrior_ai_w",
			"20ABCT_fv510_warrior_ai_dep"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"20ABCT_core",
			"20ABCT_weapons"
		};
		author="20th ABCT Mod Development Team";
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
	class NewTurret;
	class APC_Tracked_03_base_F
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
	class 20ABCT_fv510_warrior_base: APC_Tracked_03_base_F
	{
		author="20th ABCT";
		side=1;
		faction="20ABCT";
		crew="20ABCT_AFV_Crew";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		animationList[]=
		{
			"showBags",
			1,
			"showBags2",
			1,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showTools",
			1,
			"showSLATHull",
			0,
			"showSLATTurret",
			0
		};
		simulation="tankX";
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R"
		};
		scope=0;
		class AnimationSources: AnimationSources
		{
			class showBags
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showBags2
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showTools
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
		};
		forceHideDriver=0;
		showNVGDriver=1;
		showNVGCommander=1;
		castDriverShadow=1;
		enableManualFire=1;
		tankTurnForce=520000;
		enginePower=410;
		maxOmega=295.85001;
		peakTorque=1900;
		thrustDelay=0.1;
		turnCoef=5;
		latency=0.1;
		idleRpm=400;
		redRpm=2300;
		maxspeed=75;
		ace_vehicles_engineStartDelay=2;
		ace_refuel_fuelCapacity=600;
		brakeIdleSpeed=1.38;
		alphaTracks=0.69999999;
		slowSpeedForwardCoef=0.2;
		normalSpeedForwardCoef=1;
		antiRollbarForceCoef=50;
		antiRollbarForceLimit=50;
		antiRollbarSpeedMax=80;
		antiRollbarSpeedMin=20;
		incomingMissileDetectionSystem=0;
		crewVulnerable=1;
		lockDetectionSystem=0;
		armor=700;
		armorStructural=10;
		weapons[]=
		{
			"CarHorn"
		};
		smokeLauncherGrenadeCount=4;
		smokeLauncherOnTurret=1;
		smokeLauncherVelocity=10;
		smokeLauncherAngle=110;
		maximumLoad=9000;
		class complexGearbox
		{
			driveString="D";
			gearBoxMode="auto";
			GearboxRatios[]=
			{
				"R2",
				-2.2349999,
				"N",
				0,
				"D1",
				2.2,
				"D2",
				1.6,
				"D3",
				1.1,
				"D4",
				0.89999998
			};
			moveOffGear=1;
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.30000001;
			TransmissionRatios[]=
			{
				"High",
				15
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		class textureSources
		{
			class Woodland
			{
				displayName="Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
					"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\apc_tracked_03_ext_d_co.paa",
					"\20ABCT\data\apc_tracked_03_ext2_d_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11A_Woodland
			{
				displayName="11A Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11A_TurretTextureWdl.paa",
					"\20ABCT\data\11A_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11I_Woodland
			{
				displayName="11I Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11I_TurretTextureWdl.paa",
					"\20ABCT\data\11I_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11J_Woodland
			{
				displayName="11J Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11J_TurretTextureWdl.paa",
					"\20ABCT\data\11J_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11K_Woodland
			{
				displayName="11K Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11K_TurretTextureWdl.paa",
					"\20ABCT\data\11K_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 20A_Woodland
			{
				displayName="20A Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\20A_TurretTextureWdl.paa",
					"\20ABCT\data\20A_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 21C_Woodland
			{
				displayName="21C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\21C_TurretTextureWdl.paa",
					"\20ABCT\data\21C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 22C_Woodland
			{
				displayName="22C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\22C_TurretTextureWdl.paa",
					"\20ABCT\data\22C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 23C_Woodland
			{
				displayName="23C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\23C_TurretTextureWdl.paa",
					"\20ABCT\data\23C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11A_Desert
			{
				displayName="11A Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11A_TurretTextureDes.paa",
					"\20ABCT\data\11A_BodyTextureDes.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11I_Desert
			{
				displayName="11I Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11I_TurretTextureDes.paa",
					"\20ABCT\data\11I_BodyTextureDes.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11J_Desert
			{
				displayName="11J Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11J_TurretTextureDes.paa",
					"\20ABCT\data\11J_BodyTextureDes.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11K_Desert
			{
				displayName="11K Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11K_TurretTextureDes.paa",
					"\20ABCT\data\11K_BodyTextureDes.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class UN
			{
				displayName="UN";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\UN_0.paa",
					"\20ABCT\data\UN_1.paa",
					"A3\Armor_F\Data\camonet_green_CO.paa",
					"\20ABCT\data\cage_white_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
		};
		textureList[]=
		{
			"Woodland",
			1,
			"Desert",
			0,
			"11A_Woodland",
			0,
			"11A_Desert",
			0,
			"11I_Woodland",
			0,
			"11J_Woodland",
			0,
			"11K_Woodland",
			0,
			"11I_Desert",
			0,
			"11J_Desert",
			0,
			"11K_Desert",
			0,
			"20A_Woodland",
			0,
			"21C_Desert",
			0,
			"22C_Desert",
			0,
			"23C_Desert",
			0,
			"UN",
			0
		};
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
				screenLocation[]={0,-2,-0.5};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_back
			{
				type="screen";
				camLocation[]={-0.0166016,-3.3615699,-0.577052};
				maxDistance=5;
				camAttach=180;
				screenLocation[]={0,-3.5,-1};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_backleft
			{
				type="screen";
				camLocation[]={-1.6,-3,-0.60000002};
				maxDistance=5;
				camAttach=270;
				screenLocation[]={-1,-3.5,-1};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_backright
			{
				type="screen";
				camLocation[]={1.6,-3,-0.60000002};
				maxDistance=5;
				camAttach=90;
				screenLocation[]={1,-3.5,-1};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_commander2
			{
				type="";
				camLocation[]={0,0,-0.050000001};
				maxDistance=5;
				camAttach[]={0,0};
				screenLocation[]={-0.5,1,-0.5};
				roles[]=
				{
					"driver"
				};
			};
			class Driver_FL
			{
				type="";
				camLocation[]={-1.16748,1.7998,-0.71292299};
				camAttach=315;
				maxDistance=5;
				screenLocation[]={-1,1.5,-0.5};
				roles[]=
				{
					"driver"
				};
			};
			class Driver_FR
			{
				type="";
				camLocation[]={1.18799,1.63135,-0.65450299};
				camAttach=45;
				maxDistance=5;
				screenLocation[]={0,1.5,-0.5};
				roles[]=
				{
					"driver"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=52;
			};
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=32;
			};
			class _xx_20ABCT_COAX_mag
			{
				magazine="20ABCT_COAX_mag";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=12;
			};
			class _xx_ACE_FlareTripMine_Mag
			{
				magazine="ACE_FlareTripMine_Mag";
				count=4;
			};
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
			class _xx_GME_556AmmoBox
			{
				Name="GME_556AmmoBox";
				count=6;
			};
			class _xx_GME_762AmmoBox
			{
				Name="GME_762AmmoBox";
				count=1;
			};
			class _xx_GME_40HEBando
			{
				name="GME_40HEBando";
				count=2;
			};
			class _xx_GME_HEGrenadeAmmoBox
			{
				Name="GME_HEGrenadeAmmoBox";
				count=2;
			};
			class _xx_greenmag_ammo_556x45_M855A1_30Rnd
			{
				Name="greenmag_ammo_556x45_M855A1_30Rnd";
				count=40;
			};
			class _xx_greenmag_ammo_762x51_basic_20Rnd
			{
				Name="greenmag_ammo_762x51_basic_20Rnd";
				count=10;
			};
			class _xx_GME_IFAK
			{
				Name="GME_IFAK";
				count=2;
			};
			class _xx_GME_TMKit
			{
				Name="GME_TMKit";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				Name="ACE_EarPlugs";
				count=6;
			};
			class _xx_ACE_EHP
			{
				Name="ACE_EHP";
				count=6;
			};
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=1;
			};
			class _xx_ACE_Flashlight_MX991
			{
				Name="ACE_Flashlight_MX991";
				count=2;
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
				count=6;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				Name="ACE_Humanitarian_Ration";
				count=6;
			};
			class _xx_ACE_Clacker
			{
				Name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=4;
			};
			class _xx_RW_L2A1_HESH_Loaded
			{
				weapon="RW_L2A1_HESH_Loaded";
				count=4;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Carryall_mcamo
			{
				backpack="B_Carryall_mcamo";
				count=2;
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
				mountedRadio="ACRE_PRC117F";
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
				mountedRadio="ACRE_PRC117F";
				intercom[]=
				{
					"intercom_1"
				};
			};
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
						minAngleX=0;
						maxAngleX=0;
						minAngleY=0;
						maxAngleY=0;
						minTurn=0;
						maxTurn=0;
						canUseScanner=0;
						stabilizedInAxes=1;
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
								initFov=0.03125;
								minFov=0.03125;
								maxFov=0.03125;
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
								initFov=0.03125;
								minFov=0.03125;
								maxFov=0.03125;
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
						initFov=0.03125;
						minFov=0.03125;
						maxFov=0.03125;
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
						initFov=0.03125;
						minFov=0.03125;
						maxFov=0.03125;
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
				maxHorizontalRotSpeed=0.89999998;
				maxVerticalRotSpeed=0.25;
				startEngine="false";
				inGunnerMayFire=1;
				gunnerOutOpticsShowCursor=0;
				initElev=15;
				initTurn=0;
				maxElev=45;
				minElev=-15;
				canUseScanner=0;
				weapons[]=
				{
					"20ABCT_safe",
					"20ABCT_30mm_L21A2",
					"20ABCT_762_L94A1"
				};
				magazines[]=
				{
					"20ABCT_400Rnd_762x51_Red"
				};
			};
		};
	};
	class 20ABCT_fv510_warrior_w: 20ABCT_fv510_warrior_base
	{
		displayName="FV510 Warrior";
		displayNameShort="FV510";
		author="20th ABCT";
		scope=2;
		scopeCurator=2;
		faction="20ABCT";
		editorSubcategory="20ABCT_AFV";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		hiddenSelectionsTextures[]=
		{
			"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext_d_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_d_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"A3\Armor_F\Data\cage_olive_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"A3\Armor_F\Data\cage_csat_CO.paa",
			"\20ABCT\data\11A_TurretTextureWdl.paa",
			"\20ABCT\data\11I_TurretTextureWdl.paa",
			"\20ABCT\data\11J_TurretTextureWdl.paa",
			"\20ABCT\data\11K_TurretTextureWdl.paa",
			"\20ABCT\data\20A_TurretTextureWdl.paa",
			"\20ABCT\data\21C_TurretTextureWdl.paa",
			"\20ABCT\data\22C_TurretTextureWdl.paa",
			"\20ABCT\data\23C_TurretTextureWdl.paa",
			"\20ABCT\data\11A_TurretTextureDes.paa",
			"\20ABCT\data\11I_TurretTextureDes.paa",
			"\20ABCT\data\11J_TurretTextureDes.paa",
			"\20ABCT\data\11K_TurretTextureDes.paa",
			"\20ABCT\data\20A_TurretTextureDes.paa",
			"\20ABCT\data\21C_TurretTextureDes.paa",
			"\20ABCT\data\22C_TurretTextureDes.paa",
			"\20ABCT\data\23C_TurretTextureDes.paa",
			"\20ABCT\data\11A_BodyTextureWdl.paa",
			"\20ABCT\data\11I_BodyTextureWdl.paa",
			"\20ABCT\data\11J_BodyTextureWdl.paa",
			"\20ABCT\data\11K_BodyTextureWdl.paa",
			"\20ABCT\data\20A_BodyTextureWdl.paa",
			"\20ABCT\data\21C_BodyTextureWdl.paa",
			"\20ABCT\data\22C_BodyTextureWdl.paa",
			"\20ABCT\data\23C_BodyTextureWdl.paa",
			"\20ABCT\data\11A_BodyTextureDes.paa",
			"\20ABCT\data\11I_BodyTextureDes.paa",
			"\20ABCT\data\11J_BodyTextureDes.paa",
			"\20ABCT\data\11K_BodyTextureDes.paa",
			"\20ABCT\data\20A_BodyTextureDes.paa",
			"\20ABCT\data\21C_BodyTextureDes.paa",
			"\20ABCT\data\22C_BodyTextureDes.paa",
			"\20ABCT\data\23C_BodyTextureDes.paa",
			"\20ABCT\data\UN_0",
			"\20ABCT\data\UN_1"
		};
		textures[]=
		{
			"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"A3\Armor_F\Data\cage_olive_CO.paa"
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class LoaderActions
			{
				icon="a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMagAll_ca.paa";
				displayName="Load RARDEN/Chain Gun";
				condition="";
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
				class APDSLoad
				{
					displayName="Load SABOT";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && '20ABCT_APDS_mag' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_3Rnd_30mm_APDS'; vehicle _player loadMagazine [[0], '20ABCT_30mm_L21A2', '20ABCT_3Rnd_30mm_APDS']; vehicle player addMagazineCargoGlobal ['20ABCT_APDS_mag', -1]";
					exceptions[]={};
					priority=1;
				};
				class HELoad
				{
					displayName="Load SHELL";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && '20ABCT_HEIT_mag' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_3Rnd_30mm_HEIT'; vehicle _player loadMagazine [[0], '20ABCT_30mm_L21A2', '20ABCT_3Rnd_30mm_HEIT']; vehicle player addMagazineCargoGlobal ['20ABCT_HEIT_mag', -1]";
					exceptions[]={};
					priority=2;
				};
				class CoaxLoad
				{
					displayName="Reload COAX (400 rds)";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && '20ABCT_COAX_mag' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_400Rnd_762x51_Red'; vehicle player addMagazineCargoGlobal ['20ABCT_COAX_mag', -1]";
					exceptions[]={};
					priority=3;
				};
				class CoaxLoad1
				{
					displayName="Reload COAX (600 rds)";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && '20ABCT_COAX1_mag' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_600Rnd_762x51_Red'; vehicle player addMagazineCargoGlobal ['20ABCT_COAX1_mag', -1]";
					exceptions[]={};
					priority=3;
				};
				class CoaxLoad2
				{
					displayName="Reload COAX (100 rds GPMG)";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && 'UK3CB_BAF_762_100Rnd' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_COAX2_mag'; vehicle player addMagazineCargoGlobal ['UK3CB_BAF_762_100Rnd', -1]";
					exceptions[]={};
					priority=3;
				};
				class CoaxLoad3
				{
					displayName="Reload COAX (100 rds GPMG)";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && 'UK3CB_BAF_762_100Rnd_T' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_COAX2_mag'; vehicle player addMagazineCargoGlobal ['UK3CB_BAF_762_100Rnd_T', -1]";
					exceptions[]={};
					priority=3;
				};
				class CoaxLoad4
				{
					displayName="Reload COAX (200 rds GPMG)";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && 'UK3CB_BAF_762_200Rnd' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_COAX3_mag'; vehicle player addMagazineCargoGlobal ['UK3CB_BAF_762_200Rnd', -1]";
					exceptions[]={};
					priority=3;
				};
				class CoaxLoad5
				{
					displayName="Reload COAX (200 rds GPMG)";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && 'UK3CB_BAF_762_200Rnd_T' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_COAX3_mag'; vehicle player addMagazineCargoGlobal ['UK3CB_BAF_762_200Rnd_T', -1]";
					exceptions[]={};
					priority=3;
				};
				class CoaxLoad6
				{
					displayName="Reload COAX (800 rds)";
					condition="(count magazines vehicle player <=2 && player == vehicle player turretUnit [0,0] && 'UK3CB_BAF_762_800Rnd' in (getMagazineCargo vehicle player select 0))";
					icon="";
					statement="vehicle _player addMagazineGlobal '20ABCT_COAX4_mag'; vehicle player addMagazineCargoGlobal ['UK3CB_BAF_762_800Rnd', -1]";
					exceptions[]={};
					priority=3;
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
				icon="\20ABCT\data\fist_ca.paa";
				class 20ABCT_ACE_Set_Texture_Woodland
				{
					scope=2;
					displayName="Woodland";
					condition="_player == commander _target";
					statement="";
					showDisabled=0;
					priority=4;
					icon="";
					class 20ABCT_ACE_Set_Texture_Blank
					{
						scope=2;
						displayName="Default";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\apc_tracked_03_ext_w_co.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\apc_tracked_03_ext2_w_co.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_NATO_Green_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11A
					{
						scope=2;
						displayName="11A";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11A_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11A_BodyTextureWdl""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_NATO_Green_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11I
					{
						scope=2;
						displayName="11I";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11I_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11I_BodyTextureWdl.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_greenbeige_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11J
					{
						scope=2;
						displayName="11J";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11J_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11J_BodyTextureWdl.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_green_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11K
					{
						scope=2;
						displayName="11K";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11K_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11K_BodyTextureWdl.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_20A
					{
						scope=2;
						displayName="20A";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\20A_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\20A_BodyTextureWdl""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_NATO_Green_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_21C
					{
						scope=2;
						displayName="21C";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\21C_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\21C_BodyTextureWdl.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_greenbeige_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_22C
					{
						scope=2;
						displayName="22C";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\22C_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\22C_BodyTextureWdl.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_green_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_23C
					{
						scope=2;
						displayName="23C";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\23C_TurretTextureWdl.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\23C_BodyTextureWdl.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_olive_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
				};
				class 20ABCT_ACE_Set_Texture_Desert
				{
					scope=2;
					displayName="Desert";
					condition="_player == commander _target";
					statement="";
					showDisabled=0;
					priority=4;
					icon="";
					class 20ABCT_ACE_Set_Texture_Blank
					{
						scope=2;
						displayName="Default";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\apc_tracked_03_ext_d_co.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\apc_tracked_03_ext2_d_co.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_NATO_Desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11A
					{
						scope=2;
						displayName="11A";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11A_TurretTextureDes.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11A_BodyTextureDes.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_NATO_Desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11I
					{
						scope=2;
						displayName="11I";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11I_TurretTextureDes.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11I_BodyTextureDes.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11J
					{
						scope=2;
						displayName="11J";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11J_TurretTextureDes.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11J_BodyTextureDes.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_11K
					{
						scope=2;
						displayName="11K";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\11K_TurretTextureDes.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\11K_BodyTextureDes.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_NATO_Desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_20A
					{
						scope=2;
						displayName="20A";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\20A_TurretTextureDes.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\20A_BodyTextureDes.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_NATO_Desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_21C
					{
						scope=2;
						displayName="21C";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\21C_TurretTextureDes.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\21C_BodyTextureDes.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
					class 20ABCT_ACE_Set_Texture_22C
					{
						scope=2;
						displayName="22C";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\22C_TurretTextureDes.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\22C_BodyTextureDes.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa""];vehicle player setObjectTextureGlobal [3,""A3\Armor_F\Data\cage_csat_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
				};
				class 20ABCT_ACE_Set_Texture_UN
				{
					scope=2;
					displayName="United Nations";
					condition="_player == commander _target";
					statement="";
					showDisabled=0;
					priority=4;
					icon="";
					class 20ABCT_ACE_Set_Texture_Blank
					{
						scope=2;
						displayName="Default";
						condition="_player == commander _target";
						statement="vehicle player setObjectTextureGlobal [0,""\20ABCT\data\UN_0.paa""];vehicle player setObjectTextureGlobal [1,""\20ABCT\data\UN_1.paa""];vehicle player setObjectTextureGlobal [2,""A3\Armor_F\Data\camonet_green_CO.paa""];vehicle player setObjectTextureGlobal [3,""\20ABCT\data\cage_white_CO.paa""];";
						showDisabled=0;
						priority=1;
						icon="";
					};
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
				icon="\20ABCT\data\fist_ca.paa";
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
		};
	};
	class 20ABCT_fv510_warrior_dep: 20ABCT_fv510_warrior_w
	{
		displayName="FV510 Warrior (TES)";
		class AnimationSources: AnimationSources
		{
			class showBags
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showBags2
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showTools
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showSLATHull
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showSLATTurret
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
		};
		animationList[]=
		{
			"showBags",
			1,
			"showBags2",
			1,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showTools",
			1,
			"showSLATHull",
			1,
			"showSLATTurret",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"A3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
	class 20ABCT_fv510_warrior_relic: 20ABCT_fv510_warrior_dep
	{
		displayName="FV510 Warrior (OP RELIC)";
		class TransportMagazines
		{
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=52;
			};
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=32;
			};
			class _xx_20ABCT_COAX_mag
			{
				magazine="20ABCT_COAX_mag";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=12;
			};
			class _xx_ACE_FlareTripMine_Mag
			{
				magazine="ACE_FlareTripMine_Mag";
				count=4;
			};
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
			class _xx_GME_556RelicAmmoBox
			{
				Name="GME_556RelicAmmoBox";
				count=6;
			};
			class _xx_GME_HEGrenadeAmmoBox
			{
				Name="GME_HEGrenadeAmmoBox";
				count=2;
			};
			class _xx_GME_40HEBando
			{
				Name="GME_40HEDPBando";
				count=2;
			};
			class _xx_greenmag_ammo_556x45_M193_30Rnd
			{
				Name="greenmag_ammo_556x45_M193_30Rnd";
				count=40;
			};
			class _xx_greenmag_beltlinked_556x45_M855_100
			{
				Name="greenmag_beltlinked_556x45_M855_100";
				count=20;
			};
			class _xx_GME_IFAK
			{
				Name="GME_IFAK";
				count=2;
			};
			class _xx_GME_TMKit
			{
				Name="GME_TMKit";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				Name="ACE_EarPlugs";
				count=6;
			};
			class _xx_ACE_EHP
			{
				Name="ACE_EHP";
				count=6;
			};
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=1;
			};
			class _xx_ACE_Flashlight_MX991
			{
				Name="ACE_Flashlight_MX991";
				count=2;
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
				count=6;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				Name="ACE_Humanitarian_Ration";
				count=6;
			};
			class _xx_ACE_Clacker
			{
				Name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m72a7
			{
				weapon="rhs_weap_m72a7";
				count=4;
			};
			class _xx_rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=4;
			};
		};
		class TransportBackpacks
		{
			class _xx_rhsgref_hidf_alicepack
			{
				backpack="rhsgref_hidf_alicepack";
				count=2;
			};
		};
	};
	class 20ABCT_fv510_test: 20ABCT_fv510_warrior_dep
	{
		class ACE_SelfActions
		 {
			class ACE_ifa3reload_loadTurretAmmo {
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				condition = 1;
				statement = "";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadTurretAmmo";
			};

			class ACE_ifa3reload_unloadTurretAmmo {
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				condition = 1;
				statement = "";
				insertChildren = "_this call ACE_ifa3reload_fnc_unloadTurretAmmo";
			};
		};
	};
	class 20ABCT_fv514_maov: 20ABCT_fv510_warrior_dep
	{
		displayName="FV514 MAOV";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[]={200,400,600,800,1000,1200,1400};
				discreteDistanceInitIndex=2;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minTurn=-360;
						maxTurn=360;
						canUseScanners=1;
						stabilizedInAxes=3;
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
								initFov=0.03125;
								minFov=0.03125;
								maxFov=0.03125;
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
								initFov=0.041666668;
								minFov=0.041666668;
								maxFov=0.041666668;
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
						initFov=0.03125;
						minFov=0.03125;
						maxFov=0.03125;
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
				maxHorizontalRotSpeed=0.89999998;
				maxVerticalRotSpeed=0.25;
				startEngine="false";
				inGunnerMayFire=1;
				gunnerOutOpticsShowCursor=0;
				initElev=15;
				initTurn=0;
				maxElev=45;
				minElev=-15;
				canUseScanner=0;
				weapons[]=
				{
					"20ABCT_safe",
					"20ABCT_762_L94A1"
				};
				magazines[]=
				{
					"20ABCT_400Rnd_762x51_Red"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_20ABCT_COAX_mag
			{
				magazine="20ABCT_COAX_mag";
				count=7;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=12;
			};
			class _xx_ACE_FlareTripMine_Mag
			{
				magazine="ACE_FlareTripMine_Mag";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=6;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=6;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_GME_556AmmoBox
			{
				Name="GME_556AmmoBox";
				count=2;
			};
			class _xx_GME_HEGrenadeAmmoBox
			{
				Name="GME_HEGrenadeAmmoBox";
				count=1;
			};
			class _xx_GME_IFAK
			{
				Name="GME_IFAK";
				count=2;
			};
			class _xx_GME_TMKit
			{
				Name="GME_TMKit";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				Name="ACE_EarPlugs";
				count=6;
			};
			class _xx_ACE_EHP
			{
				Name="ACE_EHP";
				count=6;
			};
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=1;
			};
			class _xx_ACE_Flashlight_MX991
			{
				Name="ACE_Flashlight_MX991";
				count=2;
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
				count=6;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				Name="ACE_Humanitarian_Ration";
				count=6;
			};
			class _xx_ACE_Clacker
			{
				Name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m72a7
			{
				weapon="launch_NLAW_F";
				count=4;
			};
		};
		class TransportBackpacks
		{
			class _xx_rhsgref_hidf_alicepack
			{
				backpack="rhsgref_hidf_alicepack";
				count=2;
			};
		};
	};
	class 20ABCT_fv510_warrior_ai_base: APC_Tracked_03_base_F
	{
		author="20th ABCT";
		side=1;
		faction="20ABCT";
		crew="20ABCT_AFV_Crew";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		simulation="tankX";
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R"
		};
		scope=0;
		forceHideDriver=0;
		showNVGDriver=1;
		showNVGCommander=1;
		castDriverShadow=1;
		enableManualFire=1;
		tankTurnForce=520000;
		enginePower=410;
		maxOmega=295.85001;
		peakTorque=1900;
		thrustDelay=0.1;
		turnCoef=5;
		latency=0.1;
		idleRpm=400;
		redRpm=2300;
		maxspeed=75;
		ace_vehicles_engineStartDelay=2;
		ace_refuel_fuelCapacity=600;
		brakeIdleSpeed=1.38;
		alphaTracks=0.69999999;
		slowSpeedForwardCoef=0.2;
		normalSpeedForwardCoef=1;
		antiRollbarForceCoef=50;
		antiRollbarForceLimit=50;
		antiRollbarSpeedMax=80;
		antiRollbarSpeedMin=20;
		incomingMissileDetectionSystem=0;
		crewVulnerable=1;
		lockDetectionSystem=0;
		armor=700;
		armorStructural=10;
		weapons[]=
		{
			"CarHorn"
		};
		smokeLauncherGrenadeCount=4;
		smokeLauncherOnTurret=1;
		smokeLauncherVelocity=10;
		smokeLauncherAngle=110;
		maximumLoad=4000;
		class complexGearbox
		{
			driveString="D";
			gearBoxMode="auto";
			GearboxRatios[]=
			{
				"R2",
				-2.2349999,
				"N",
				0,
				"D1",
				2.2,
				"D2",
				1.6,
				"D3",
				1.1,
				"D4",
				0.89999998
			};
			moveOffGear=1;
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.30000001;
			TransmissionRatios[]=
			{
				"High",
				15
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		class textureSources
		{
			class Woodland
			{
				displayName="Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
					"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\apc_tracked_03_ext_d_co.paa",
					"\20ABCT\data\apc_tracked_03_ext2_d_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 10A_Woodland
			{
				displayName="10A Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\10A_TurretTextureWdl.paa",
					"\20ABCT\data\10A_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11C_Woodland
			{
				displayName="11C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11C_TurretTextureWdl.paa",
					"\20ABCT\data\11C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 12C_Woodland
			{
				displayName="12C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\12C_TurretTextureWdl.paa",
					"\20ABCT\data\12C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 13C_Woodland
			{
				displayName="13C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\13C_TurretTextureWdl.paa",
					"\20ABCT\data\13C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 20A_Woodland
			{
				displayName="20A Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\20A_TurretTextureWdl.paa",
					"\20ABCT\data\20A_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 21C_Woodland
			{
				displayName="21C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\21C_TurretTextureWdl.paa",
					"\20ABCT\data\21C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 22C_Woodland
			{
				displayName="22C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\22C_TurretTextureWdl.paa",
					"\20ABCT\data\22C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 23C_Woodland
			{
				displayName="23C Woodland";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\23C_TurretTextureWdl.paa",
					"\20ABCT\data\23C_BodyTextureWdl.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
					"A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 10A_Desert
			{
				displayName="10A Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\10A_TurretTextureDes.paa",
					"\20ABCT\data\10A_BodyTextureDes.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 11C_Desert
			{
				displayName="11C Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\11C_TurretTextureDes.paa",
					"\20ABCT\data\11C_BodyTextureDes.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 12C_Desert
			{
				displayName="12C Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\12C_TurretTextureDes.paa",
					"\20ABCT\data\12C_BodyTextureDes.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class 13C_Desert
			{
				displayName="13C Desert";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\13C_TurretTextureDes.paa",
					"\20ABCT\data\13C_BodyTextureDes.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\Armor_F\Data\cage_csat_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
			class UN
			{
				displayName="UN";
				author="20th ABCT";
				textures[]=
				{
					"\20ABCT\data\UN_0.paa",
					"\20ABCT\data\UN_1.paa",
					"A3\Armor_F\Data\camonet_green_CO.paa",
					"\20ABCT\data\cage_white_CO.paa"
				};
				factions[]=
				{
					"20ABCT"
				};
			};
		};
		textureList[]=
		{
			"Woodland",
			1,
			"Desert",
			0,
			"10A_Woodland",
			0,
			"10A_Desert",
			0,
			"11C_Woodland",
			0,
			"12C_Woodland",
			0,
			"13C_Woodland",
			0,
			"11C_Desert",
			0,
			"12C_Desert",
			0,
			"13C_Desert",
			0,
			"20A_Woodland",
			0,
			"21C_Desert",
			0,
			"22C_Desert",
			0,
			"23C_Desert",
			0,
			"UN",
			0
		};
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
				screenLocation[]={0,-2,-0.5};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_back
			{
				type="screen";
				camLocation[]={-0.0166016,-3.3615699,-0.577052};
				maxDistance=5;
				camAttach=180;
				screenLocation[]={0,-3.5,-1};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_backleft
			{
				type="screen";
				camLocation[]={-1.4,-3,-0.60000002};
				maxDistance=5;
				camAttach=270;
				screenLocation[]={-1,-3.5,-1};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_backright
			{
				type="screen";
				camLocation[]={1.4,-3,-0.60000002};
				maxDistance=5;
				camAttach=90;
				screenLocation[]={1,-3.5,-1};
				roles[]=
				{
					"cargo"
				};
			};
			class SLD_commander2
			{
				type="";
				camLocation[]={0,0,-0.050000001};
				maxDistance=5;
				camAttach[]={0,0};
				screenLocation[]={-0.5,1,-0.5};
				roles[]=
				{
					"driver"
				};
			};
			class Driver_FL
			{
				type="";
				camLocation[]={-1.16748,1.7998,-0.71292299};
				camAttach=315;
				maxDistance=5;
				screenLocation[]={-1,1.5,-0.5};
				roles[]=
				{
					"driver"
				};
			};
			class Driver_FR
			{
				type="";
				camLocation[]={1.18799,1.63135,-0.65450299};
				camAttach=45;
				maxDistance=5;
				screenLocation[]={0,1.5,-0.5};
				roles[]=
				{
					"driver"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=12;
			};
			class _xx_ACE_FlareTripMine_Mag
			{
				magazine="ACE_FlareTripMine_Mag";
				count=4;
			};
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
			class _xx_GME_556AmmoBox
			{
				Name="GME_556AmmoBox";
				count=8;
			};
			class _xx_GME_762AmmoBox
			{
				Name="GME_762AmmoBox";
				count=1;
			};
			class _xx_GME_HEGrenadeAmmoBox
			{
				Name="GME_HEGrenadeAmmoBox";
				count=2;
			};
			class _xx_GME_IFAK
			{
				Name="GME_IFAK";
				count=2;
			};
			class _xx_GME_TMKit
			{
				Name="GME_TMKit";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				Name="ACE_EarPlugs";
				count=6;
			};
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=1;
			};
			class _xx_ACE_Flashlight_MX991
			{
				Name="ACE_Flashlight_MX991";
				count=2;
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
				count=6;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				Name="ACE_Humanitarian_Ration";
				count=6;
			};
			class _xx_ACE_Clacker
			{
				Name="ACE_Clacker";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=4;
			};
			class _xx_RW_L2A1_HESH_Loaded
			{
				weapon="RW_L2A1_HESH_Loaded";
				count=4;
			};
		};
		acre_hasInfantryPhone=0;
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Bowman A";
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
				mountedRadio="ACRE_PRC117F";
				intercom[]=
				{
					"intercom_1"
				};
			};
			class Rack_2
			{
				displayName="Bowman B";
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
				mountedRadio="ACRE_PRC117F";
				intercom[]=
				{
					"intercom_1"
				};
			};
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
						minAngleX=0;
						maxAngleX=0;
						minAngleY=0;
						maxAngleY=0;
						minTurn=0;
						maxTurn=0;
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
								initFov=0.031300001;
								minFov=0.031300001;
								maxFov=0.031300001;
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
								gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
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
								gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
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
								gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
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
						initFov=0.031300001;
						minFov=0.031300001;
						maxFov=0.031300001;
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
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
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
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
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
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
					};
				};
				stabilizedInAxes="StabilizedInAxesNone";
				maxHorizontalRotSpeed=0.89999998;
				maxVerticalRotSpeed=0.25;
				startEngine="false";
				inGunnerMayFire=1;
				gunnerOutOpticsShowCursor=0;
				initElev=15;
				initTurn=0;
				maxElev=45;
				minElev=-15;
				canUseScanner=0;
				weapons[]=
				{
					"20ABCT_safe",
					"20ABCT_30mm_L21A2_ai",
					"20ABCT_762_L94A1"
				};
				magazines[]=
				{
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_APDS",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_6Rnd_30mm_HEIT",
					"20ABCT_400Rnd_762x51_Red",
					"20ABCT_400Rnd_762x51_Red",
					"20ABCT_400Rnd_762x51_Red",
					"20ABCT_400Rnd_762x51_Red",
					"20ABCT_400Rnd_762x51_Red",
					"20ABCT_400Rnd_762x51_Red",
					"20ABCT_400Rnd_762x51_Red"
				};
			};
		};
	};
	class 20ABCT_fv510_warrior_ai_w: 20ABCT_fv510_warrior_ai_base
	{
		displayName="Warrior AI";
		displayNameShort="FV510";
		author="20th ABCT";
		scope=2;
		scopeCurator=2;
		faction="20ABCT";
		editorSubcategory="20ABCT_Bots";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		hiddenSelectionsTextures[]=
		{
			"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext_d_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_d_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"A3\Armor_F\Data\cage_olive_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"A3\Armor_F\Data\cage_csat_CO.paa",
			"\20ABCT\data\10A_TurretTextureWdl.paa",
			"\20ABCT\data\11C_TurretTextureWdl.paa",
			"\20ABCT\data\12C_TurretTextureWdl.paa",
			"\20ABCT\data\13C_TurretTextureWdl.paa",
			"\20ABCT\data\20A_TurretTextureWdl.paa",
			"\20ABCT\data\21C_TurretTextureWdl.paa",
			"\20ABCT\data\22C_TurretTextureWdl.paa",
			"\20ABCT\data\23C_TurretTextureWdl.paa",
			"\20ABCT\data\10A_TurretTextureDes.paa",
			"\20ABCT\data\11C_TurretTextureDes.paa",
			"\20ABCT\data\12C_TurretTextureDes.paa",
			"\20ABCT\data\13C_TurretTextureDes.paa",
			"\20ABCT\data\20A_TurretTextureDes.paa",
			"\20ABCT\data\21C_TurretTextureDes.paa",
			"\20ABCT\data\22C_TurretTextureDes.paa",
			"\20ABCT\data\23C_TurretTextureDes.paa",
			"\20ABCT\data\10A_BodyTextureWdl.paa",
			"\20ABCT\data\11C_BodyTextureWdl.paa",
			"\20ABCT\data\12C_BodyTextureWdl.paa",
			"\20ABCT\data\13C_BodyTextureWdl.paa",
			"\20ABCT\data\20A_BodyTextureWdl.paa",
			"\20ABCT\data\21C_BodyTextureWdl.paa",
			"\20ABCT\data\22C_BodyTextureWdl.paa",
			"\20ABCT\data\23C_BodyTextureWdl.paa",
			"\20ABCT\data\10A_BodyTextureDes.paa",
			"\20ABCT\data\11C_BodyTextureDes.paa",
			"\20ABCT\data\12C_BodyTextureDes.paa",
			"\20ABCT\data\13C_BodyTextureDes.paa",
			"\20ABCT\data\20A_BodyTextureDes.paa",
			"\20ABCT\data\21C_BodyTextureDes.paa",
			"\20ABCT\data\22C_BodyTextureDes.paa",
			"\20ABCT\data\23C_BodyTextureDes.paa",
			"\20ABCT\data\UN_0",
			"\20ABCT\data\UN_1"
		};
		textures[]=
		{
			"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"A3\Armor_F\Data\cage_olive_CO.paa"
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
				icon="\20ABCT\data\fist_ca.paa";
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
		};
	};
	class 20ABCT_fv510_warrior_ai_dep: 20ABCT_fv510_warrior_ai_w
	{
		displayName="Warrior AI (TES)";
		class AnimationSources: AnimationSources
		{
			class showBags
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showBags2
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showTools
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showSLATHull
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
			class showSLATTurret
			{
				animPeriod=0.001;
				initPhase=1;
				source="user";
			};
		};
		animationList[]=
		{
			"showBags",
			1,
			"showBags2",
			1,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showTools",
			1,
			"showSLATHull",
			1,
			"showSLATTurret",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\20ABCT\data\apc_tracked_03_ext_w_co.paa",
			"\20ABCT\data\apc_tracked_03_ext2_w_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"A3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
};
