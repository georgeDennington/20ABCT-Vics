class CfgPatches
{
	class 20ABCT
	{
		name="20th ABCT Core Mods";
		units[]=
		{
			"20ABCT_fv510_warrior_base",
			"20ABCT_fv510_warrior_w",
			"20ABCT_fv510_warrior_dep",
			"20ABCT_fv510_warrior_relic",
			"20ABCT_fv514_maov",
			"20ABCT_CVRT_d",
			"20ABCT_CVRT_w",
			"20ABCT_CVRT_d_dep",
			"20ABCT_CVRT_w_dep",
			"20ABCT_fv510_warrior_ai_base",
			"20ABCT_fv510_warrior_ai_w",
			"20ABCT_fv510_warrior_ai_dep",
			"20ABCT_CVRT_ai_d",
			"20ABCT_CVRT_ai_w",
			"20ABCT_Bulldog_HMG_Desert",
			"20ABCT_Bulldog_HMG_Green",
			"20ABCT_Bulldog_GPMG_Desert",
			"20ABCT_Bulldog_GPMG_Green",
			"20ABCT_TRUCK_iammo_b",
			"20ABCT_TRUCK_vammo_b",
			"20ABCT_UST_b",
			"20ABCT_TRUCK_cargo_e",
			"20ABCT_TSV_Desert",
			"20ABCT_TSV_Woodland",
			"20ABCT_RECCY_b",
			"20ABCT_box",
			"20ABCT_Veh_box",
			"20ABCT_APDS_box",
			"20ABCT_HEIT_box",
			"20ABCT_WR_box",
			"20ABCT_CVRT_box",
			"20ABCT_SECT_box",
			"20ABCT_PL_box",
			"20ABCT_LINK_box",
			"20ABCT_RIFLE_box",
			"20ABCT_UGL_box",
			"20ABCT_Empty_box",
			"20ABCT_ISO_ammo_b",
			"20ABCT_ISO_ammo_i",
			"20ABCT_ISO_ammo_v",
			"20ABCT_ISO_cargo_e",
			"20ABCT_Sect_Comd",
			"20ABCT_Sect_C_Rfn",
			"20ABCT_Sect_C_TM",
			"20ABCT_Sect_C_PM",
			"20ABCT_Sect_2IC",
			"20ABCT_Sect_D_TM",
			"20ABCT_Sect_D_SS",
			"20ABCT_Sect_D_GPMG",
			"20ABCT_Pl_Comd",
			"20ABCT_Pl_Sjt",
			"20ABCT_Pl_WR_Sjt",
			"20ABCT_Pl_CMT",
			"20ABCT_Pl_Rnr",
			"20ABCT_AFV_Crew"
		};
		weapons[]=
		{
			"20ABCT_safe",
			"20ABCT_30mm_L21A2",
			"20ABCT_762_L94A1",
			"20ABCT_762_L94A1_CR2",
			"20ABCT_762_L37A2",
			"20ABCT_UK3CB_BAF_L85A3_Grippod_T_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS_PiPUK3CB_underbarrel_acc_grippod_t",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d",
			"20ABCT_UK3CB_BAF_L85A3_UGL_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"20ABCT_UK3CB_BAF_L129A1_UK3CB_BAF_LLM_IR_TanUK3CB_BAF_TA648_308UK3CB_underbarrel_acc_fgrip_bipod"
		};
		requiredAddons[]=
		{
			"A3_Modules_F",
			"A3_Weapons_F",
			"A3_Armor_F_EPB_APC_tracked_03",
			"A3_Armor_F_Beta",
			"jsrs2025_config_c",
			"jsrs2025_data",
			"jsrs2025_sounds_weapons",
			"QAV_Challenger"
		};
		author="20th ABCT Mod Development Team";
	};
};
class CfgAmmo
{
	class B_40mm_APFSDS_Tracer_Red;
	class B_40mm_GPR_Tracer_Red;
	class B_762x51_Tracer_Red;
	class B_20ABCT_30mm_APFSDS_Red: B_40mm_APFSDS_Tracer_Red
	{
		typicalSpeed=1175;
	};
	class B_20ABCT_30mm_HE_Red: B_40mm_GPR_Tracer_Red
	{
		typicalSpeed=1070;
		timeToLive=20;
	};
	class B_20ABCT_762x51_Red: B_762x51_Tracer_Red
	{
		timeToLive=10;
		typicalSpeed=862;
	};
	class MissileBase;
	class UK3CB_BAF_M_Milan: MissileBase
	{
		soundEngine[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",
			1,
			1,
			1000
		};
		soundFly[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",
			1,
			1,
			1000
		};
		soundSetFly[]=
		{
			"jsrs_2025_sc_50cal_soundset"
		};
		soundSetSonicCrack[]=
		{
			"jsrs_2025_sc_50cal_soundset"
		};
		soundHit[]=
		{
			"",
			100,
			1
		};
		soundSetExplosion[]=
		{
			"jsrs_2025_explosion_shock_medium_soundset",
			"jsrs_2025_rocket_epl_soundset",
			"jsrs_2025_medium_explosion_tails_soundset",
			"jsrs_2025_debris_big_soundset",
			"jsrs_2025_explosion_shrapnel_soundset"
		};
	};
	class UK3CB_BAF_M_Hellfire_Base: MissileBase
	{
		soundFly[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",
			1,
			1,
			1000
		};
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
class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class SmokeLauncherMag;
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells;
	class 60Rnd_40mm_GPR_Tracer_Red_shells;
	class 2000Rnd_762x51_Belt_Red;
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class FakeMagazine;
	class 20ABCT_FakeMagazine: FakeMagazine
	{
		displayName="SAFETY";
		displayNameShort="SAFETY";
		displayNameMFDFormat="SAFE";
	};
	class 20ABCT_3Rnd_30mm_APDS: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		displayName="L14A3 APDS-T RARDEN Clip";
		displayNameShort="L14A3 APDS-T";
		displayNameMFDFormat="SABOT";
		ammo="B_20ABCT_30mm_APFSDS_Red";
		initSpeed=1175;
		count=3;
		mass=60;
		deleteIfEmpty=-1;
	};
	class 20ABCT_6Rnd_30mm_APDS: 20ABCT_3Rnd_30mm_APDS
	{
		displayName="AI USE - SABOT";
		count=6;
	};
	class 20ABCT_3Rnd_30mm_HEIT: 60Rnd_40mm_GPR_Tracer_Red_shells
	{
		displayName="L13A2 HEI-T RARDEN Clip";
		displayNameShort="L13A2 HEI-T";
		displayNameMFDFormat="SHELL";
		ammo="B_20ABCT_30mm_HE_Red";
		initSpeed=1070;
		count=3;
		mass=60;
		deleteIfEmpty=-1;
	};
	class 20ABCT_6Rnd_30mm_HEIT: 20ABCT_3Rnd_30mm_HEIT
	{
		displayName="AI USE - SHELL";
		count=6;
	};
	class 20ABCT_400Rnd_762x51_Red: 2000Rnd_762x51_Belt_Red
	{
		displayName="COAX Belt (400 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed=862;
		tracersEvery=2;
		count=400;
		mass=129.36;
		deleteIfEmpty=-1;
	};
	class 20ABCT_600Rnd_762x51_Red: 2000Rnd_762x51_Belt_Red
	{
		displayName="COAX Belt (400 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed=862;
		tracersEvery=2;
		count=600;
		mass=129.36;
		deleteIfEmpty=-1;
	};
	class 20ABCT_COAX_mag: 2000Rnd_762x51_Belt_Red
	{
		scope=2;
		scopeCurator=2;
		picture="\20ABCT\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionshort="Calibre: 7.62x51mm<br/>Rounds: 600<br/>Used in: L94A1, L37A1";
		displayName="COAX Belt (400 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		tracersEvery=2;
		count=400;
		mass=129.36;
		ace_arsenal_hide=-1;
		deleteIfEmpty=-1;
	};
	class 20ABCT_COAX1_mag: 2000Rnd_762x51_Belt_Red
	{
		scope=2;
		scopeCurator=2;
		picture="\20ABCT\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionshort="Calibre: 7.62x51mm<br/>Rounds: 600<br/>Used in: L94A1, L37A1";
		displayName="COAX Belt (600 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		tracersEvery=2;
		count=600;
		mass=194.03999;
		ace_arsenal_hide=-1;
		deleteIfEmpty=-1;
	};
	class 20ABCT_COAX2_mag: 20ABCT_400Rnd_762x51_Red
	{
		scope=2;
		picture="\20ABCT\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionshort="Calibre: 7.62x51mm<br/>Rounds: 400<br/>Used in: L7A2, L94A1, L37A1";
		displayName="GPMG Belt (100 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed=862;
		tracersEvery=4;
		count=100;
		mass=32.34;
		ace_arsenal_hide=-1;
		deleteIfEmpty=-1;
	};
	class 20ABCT_COAX3_mag: 20ABCT_COAX2_mag
	{
		scope=2;
		picture="\20ABCT\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionshort="Calibre: 7.62x51mm<br/>Rounds: 400<br/>Used in: L7A2, L94A1, L37A1";
		displayName="GPMG Belt (200 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed=862;
		tracersEvery=4;
		count=200;
		mass=64.68;
		ace_arsenal_hide=-1;
		deleteIfEmpty=-1;
	};
	class 20ABCT_COAX4_mag: 20ABCT_COAX2_mag
	{
		scope=2;
		picture="\20ABCT\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionshort="Calibre: 7.62x51mm<br/>Rounds: 400<br/>Used in: L7A2, L94A1, L37A1";
		displayName="COAX Belt (800 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed=862;
		tracersEvery=2;
		count=800;
		mass=258.72;
		ace_arsenal_hide=-1;
		deleteIfEmpty=-1;
	};
	class 20ABCT_APDS_mag: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		scope=2;
		scopeCurator=2;
		picture="\20ABCT\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionshort="Calibre: 30x170mm<br/>Rounds: 3<br/>Used in: L21A2";
		displayName="L14A3 APDS-T Clip";
		displayNameShort="APDS-T";
		displayNameMFDFormat="SABOT";
		ammo="B_20ABCT_30mm_APFSDS_Red";
		initSpeed=1175;
		count=3;
		mass=40;
		ace_arsenal_hide=-1;
		deleteIfEmpty=-1;
	};
	class 20ABCT_HEIT_mag: 60Rnd_40mm_GPR_Tracer_Red_shells
	{
		scope=2;
		scopeCurator=2;
		picture="\20ABCT\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionshort="Calibre: 30x170mm<br/>Rounds: 3<br/>Used in: L21A2";
		displayName="L13A2 HEI-T Clip";
		displayNameShort="HEI-T";
		displayNameMFDFormat="SHELL";
		ammo="B_20ABCT_30mm_HE_Red";
		initSpeed=1070;
		count=3;
		mass=40;
		ace_arsenal_hide=-1;
		deleteIfEmpty=-1;
	};
	class 20ABCT_432_SmokeLauncherMag: SmokeLauncherMag
	{
		count=3;
		displayName="VIRSS Reload";
	};
};
class Mode_FullAuto;
class cfgWeapons
{
	class ItemCore;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class MGunCore;
	class MGun;
	class gatling_20mm;
	class SmokeLauncher;
	class CannonCore;
	class autocannon_Base_F: CannonCore
	{
		class GunParticles
		{
			class Effect;
			class Shell;
		};
		class player: Mode_FullAuto
		{
			class StandardSound;
		};
		class close;
		class short;
		class medium;
		class far;
	};
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: autocannon_Base_F
		{
			class player: player
			{
			};
			class close: close
			{
				class StandardSound;
			};
			class short: short
			{
				class StandardSound;
			};
			class medium: medium
			{
				class StandardSound;
			};
			class far: far
			{
				class StandardSound;
			};
		};
	};
	class autocannon_30mm: autocannon_30mm_CTWS
	{
		class HE: HE
		{
			class player: player
			{
				class StandardSound;
			};
			class close: close
			{
				class StandardSound;
			};
			class short: short
			{
				class StandardSound;
			};
			class medium: medium
			{
				class StandardSound;
			};
			class far: far
			{
				class StandardSound;
			};
		};
	};
	class 20ABCT_safe: autocannon_30mm
	{
		scope=1;
		muzzles[]=
		{
			"HE"
		};
		dispersion=0.00029;
		class HE: HE
		{
			ballisticsComputer=2;
			displayName="SAFETY";
			magazines[]=
			{
				"20ABCT_FakeMagazine"
			};
			magazineReloadTime=4;
			autoReload=0;
			class player: player
			{
				reloadTime=0.67000002;
				class StandardSound;
			};
			class close: close
			{
				reloadTime=0.67000002;
				class StandardSound;
			};
			class short: short
			{
				reloadTime=0.67000002;
				class StandardSound;
			};
			class medium: medium
			{
				reloadTime=0.67000002;
				class StandardSound;
			};
			class far: far
			{
				reloadTime=0.67000002;
				class StandardSound;
			};
		};
	};
	class 20ABCT_30mm_L21A2: autocannon_30mm
	{
		scope=1;
		displayNameMFDFormat="RARDEN";
		maxZeroing=5000;
		muzzles[]=
		{
			"HE"
		};
		dispersion=0.00029;
		class HE: HE
		{
			autoReload=1;
			ballisticsComputer=2;
			displayName="L21A2 RARDEN";
			dispersion=0.00029;
			FCSZeroingDelay=2;
			magazines[]=
			{
				"20ABCT_3Rnd_30mm_HEIT",
				"20ABCT_3Rnd_30mm_APDS"
			};
			magazineReloadTime=0.67000002;
			class player: player
			{
				dispersion=0.00029;
				reloadTime=0.67000002;
				class StandardSound;
			};
			class close: close
			{
				dispersion=0.00029;
				reloadTime=0.67000002;
				class StandardSound;
			};
			class short: short
			{
				dispersion=0.00029;
				reloadTime=0.67000002;
				class StandardSound;
			};
			class medium: medium
			{
				dispersion=0.00029;
				reloadTime=0.67000002;
				class StandardSound;
			};
			class far: far
			{
				dispersion=0.00029;
				reloadTime=0.67000002;
				class StandardSound;
			};
		};
	};
	class 20ABCT_30mm_L21A2_ai: 20ABCT_30mm_L21A2
	{
		class HE: HE
		{
			magazineReloadTime=3;
			magazines[]=
			{
				"20ABCT_6Rnd_30mm_HEIT",
				"20ABCT_6Rnd_30mm_APDS"
			};
		};
	};
	class LMG_RCWS: MGun
	{
		class GunClouds;
		class GunParticles
		{
			class effect1;
		};
		class manual: MGun
		{
			class StandardSound;
		};
		class close: manual
		{
		};
		class short: close
		{
		};
		class medium: close
		{
		};
		class far: close
		{
		};
	};
	class LMG_coax: LMG_RCWS
	{
		class GunParticles
		{
			class effect1;
		};
		class manual: MGun
		{
			class StandardSound;
		};
		class close: manual
		{
		};
		class short: close
		{
		};
		class medium: close
		{
		};
		class far: close
		{
		};
	};
	class 20ABCT_762_L94A1: LMG_coax
	{
		ballisticsComputer=2;
		scope=1;
		displayName="L94A1 Chain Gun";
		displayNameMFDFormat="COAX";
		maxZeroing=5000;
		magazines[]=
		{
			"20ABCT_400Rnd_762x51_Red",
			"20ABCT_600Rnd_762x51_Red",
			"20ABCT_COAX2_mag",
			"20ABCT_COAX3_mag",
			"20ABCT_COAX4_mag"
		};
		magazineReloadTime=6;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
			10,
			1,
			20
		};
		autoReload=1;
		class manual: manual
		{
			reloadTime=0.10909091;
		};
		class close: close
		{
			reloadTime=0.10909091;
		};
		class short: short
		{
			reloadTime=0.10909091;
		};
		class medium: medium
		{
			reloadTime=0.10909091;
		};
		class far: far
		{
			reloadTime=0.10909091;
		};
	};
	class 20ABCT_762_L94A1_CR2: 20ABCT_762_L94A1
	{
		autoReload=0;
		ballisticsComputer=16;
	};
	class 20ABCT_762_L37A1: LMG_coax
	{
		ballisticsComputer=2;
		scope=1;
		displayName="L37A1 GPMG";
		displayNameMFDFormat="COAX";
		maxZeroing=5000;
		magazines[]=
		{
			"20ABCT_400Rnd_762x51_Red",
			"20ABCT_600Rnd_762x51_Red",
			"20ABCT_COAX2_mag",
			"20ABCT_COAX3_mag",
			"20ABCT_COAX4_mag"
		};
		magazineReloadTime=10;
		reloadMagazineSound[]=
		{
			"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L7\Sounds\l7_reload",
			1,
			1,
			40
		};
		autoReload=1;
		class manual: manual
		{
			reloadTime=0.059999999;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
		class close: close
		{
			reloadTime=0.059999999;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_2025_coax_shot_soundset",
					"jsrs_2025_tailsystem_762mm_lmg_soundset"
				};
			};
		};
		class short: short
		{
			reloadTime=0.059999999;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_2025_coax_shot_soundset",
					"jsrs_2025_tailsystem_762mm_lmg_soundset"
				};
			};
		};
		class medium: medium
		{
			reloadTime=0.059999999;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_2025_coax_shot_soundset",
					"jsrs_2025_tailsystem_762mm_lmg_soundset"
				};
			};
		};
		class far: far
		{
			reloadTime=0.059999999;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_2025_coax_shot_soundset",
					"jsrs_2025_tailsystem_762mm_lmg_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_L85A3_Grippod_T;
	class UK3CB_BAF_L85A3;
	class UK3CB_BAF_L85A3_UGL;
	class UK3CB_BAF_L129A1;
	class 20ABCT_UK3CB_BAF_L85A3_Grippod_T_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS_PiPUK3CB_underbarrel_acc_grippod_t: UK3CB_BAF_L85A3_Grippod_T
	{
		displayName="L85A3";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS_PiP";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_IR_Tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="UK3CB_underbarrel_acc_grippod_t";
			};
		};
	};
	class 20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t: UK3CB_BAF_L85A3
	{
		displayName="L85A3";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_Flashlight_Tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="UK3CB_underbarrel_acc_grippod_t";
			};
		};
	};
	class 20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d: UK3CB_BAF_L85A3
	{
		displayName="L85A3";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_Flashlight_Tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="UK3CB_underbarrel_acc_afg_d";
			};
		};
	};
	class 20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d: UK3CB_BAF_L85A3
	{
		displayName="L85A3";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_IR_Tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="UK3CB_underbarrel_acc_afg_d";
			};
		};
	};
	class 20ABCT_UK3CB_BAF_L85A3_UGL_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS: UK3CB_BAF_L85A3_UGL
	{
		displayName="L85A3 with L123A2 Ladder";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_IR_Tan";
			};
		};
	};
	class 20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t: UK3CB_BAF_L85A3
	{
		displayName="L85A3";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_IR_Tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="UK3CB_underbarrel_acc_grippod_t";
			};
		};
	};
	class 20ABCT_UK3CB_BAF_L129A1_UK3CB_BAF_LLM_IR_TanUK3CB_BAF_TA648_308UK3CB_underbarrel_acc_fgrip_bipod: UK3CB_BAF_L129A1
	{
		displayName="L129A1";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="UK3CB_BAF_TA648_308";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_IR_Tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="UK3CB_underbarrel_acc_fgrip_bipod";
			};
		};
	};
	class 20ABCT_FV_SmokeLauncher: SmokeLauncher
	{
		displayName="VIRSS Launcher";
		reloadTime="0.25";
	};
	class 20ABCT_432_SmokeLauncher: SmokeLauncher
	{
		displayName="VIRSS Launcher";
		reloadTime="0.25";
		magazines[]=
		{
			"20ABCT_432_SmokeLauncherMag"
		};
	};
	class UK3CB_BAF_CannonM621: gatling_20mm
	{
		class manual: MGun
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_autocannon_small_shot_soundset"
				};
			};
		};
	};
	class GMG_F;
	class GMG_40mm: GMG_F
	{
		class manual;
	};
	class UK3CB_BAF_L134A1_vehicle: GMG_40mm
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_gmg_shot_soundset",
					"jsrs_2025_338_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Coyote_Jackal_L134A1: UK3CB_BAF_L134A1_vehicle
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_gmg_shot_soundset",
					"jsrs_2025_338_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Husky_L134A1: UK3CB_BAF_L134A1_vehicle
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_gmg_shot_soundset",
					"jsrs_2025_338_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Landrover_L134A1: UK3CB_BAF_L134A1_vehicle
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_gmg_shot_soundset",
					"jsrs_2025_338_tails_soundset"
				};
			};
		};
	};
	class HMG_01;
	class HMG_M2: HMG_01
	{
		class manual;
	};
	class UK3CB_BAF_L111A1_vehicle: HMG_M2
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m2_shot_soundset",
					"jsrs_2025_weapon_snap_hmg_soundset",
					"jsrs_2025_50cal_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Bulldog_L111A1: UK3CB_BAF_L111A1_vehicle
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_hmg_vehicle_shot_soundset",
					"jsrs_2025_weapon_snap_hmg_soundset",
					"jsrs_2025_50cal_vehicle_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Husky_L111A1: UK3CB_BAF_L111A1_vehicle
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_hmg_vehicle_shot_soundset",
					"jsrs_2025_weapon_snap_hmg_soundset",
					"jsrs_2025_50cal_vehicle_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Coyote_Jackal_L111A1: UK3CB_BAF_L111A1_vehicle
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_hmg_vehicle_shot_soundset",
					"jsrs_2025_weapon_snap_hmg_soundset",
					"jsrs_2025_50cal_vehicle_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Landrover_L111A1: UK3CB_BAF_L111A1_vehicle
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_hmg_vehicle_shot_soundset",
					"jsrs_2025_weapon_snap_hmg_soundset",
					"jsrs_2025_50cal_vehicle_tails_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_L112A1_veh: LMG_RCWS
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Panther_L7A2_1: UK3CB_BAF_L112A1_veh
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Landrover_L7A2_1: UK3CB_BAF_L112A1_veh
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Bulldog_L7A2: UK3CB_BAF_L112A1_veh
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Coyote_Jackal_L7A2_1: UK3CB_BAF_L112A1_veh
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_Husky_L7A2: UK3CB_BAF_L112A1_veh
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_L7A2_veh: LMG_RCWS
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class missiles_titan;
	class MissileLauncher;
	class UK3CB_BAF_Milan_Launcher: missiles_titan
	{
		class StandardSound
		{
			soundSetShot[]=
			{
				"jsrs_2025_missile_shot_soundset"
			};
		};
		class Player: MissileLauncher
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_missile_shot_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_HellfireLauncher_base: MissileLauncher
	{
		class StandardSound
		{
			weaponSoundEffect="DefaultRifle";
			soundSetShot[]=
			{
				"jsrs_2025_missile_shot_soundset"
			};
		};
	};
	class RocketPods;
	class UK3CB_BAF_Missiles_CRV7_PG: RocketPods
	{
		class Far_AI: RocketPods
		{
			soundFly[]=
			{
				"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",
				1,
				1,
				1000
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					2,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"jsrs_2025_rocketpods_shot_soundset"
				};
			};
		};
	};
	class LMG_coax_ext: LMG_coax
	{
		class manual: manual
		{
			class StandardSound
			{
			};
		};
	};
	class qav_challenger_coax: LMG_coax_ext
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetshot[]=
				{
					"jsrs_2025_coax_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
	};
	class qav_challenger_gpmg: qav_challenger_coax
	{
		magazineReloadTime=10;
		reloadMagazineSound[]=
		{
			"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L7\Sounds\l7_reload",
			1,
			1,
			40
		};
		autoReload=1;
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"jsrs_2025_m240_shot_soundset",
					"jsrs_2025_tailsystem_762mm_LMG_soundset"
				};
			};
		};
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
class cfgGroups
{
	class WEST
	{
		name="BLUFOR";
		class ABCT
		{
			name="20th ABCT";
			class Infantry
			{
				name="Light Role Infantry";
				class 20ABCT_B_HQ_Section_Light_Role
				{
					name="HQ Section";
					faction="20ABCT";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="20ABCT_Pl_Comd";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="20ABCT_Pl_Sjt";
						rank="SERGEANT";
						position[]={2,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="20ABCT_Pl_CMT";
						rank="CORPORAL";
						position[]={4,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="20ABCT_Pl_Rnr";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit4
					{
						side=1;
						vehicle="20ABCT_Pl_Rnr";
						rank="PRIVATE";
						position[]={2,-2,0};
					};
				};
				class 20ABCT_B_Rifle_Section_LR
				{
					name="Rifle Section";
					faction="20ABCT";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="20ABCT_Sect_Comd";
						rank="CORPORAL";
						position[]={2,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="20ABCT_Sect_C_PM";
						rank="PRIVATE";
						position[]={0,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="20ABCT_Sect_C_TM";
						rank="PRIVATE";
						position[]={4,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="20ABCT_Sect_C_Rfn";
						rank="PRIVATE";
						position[]={6,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="20ABCT_Sect_D_TM";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit5
					{
						side=1;
						vehicle="20ABCT_Sect_2IC";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class Unit6
					{
						side=1;
						vehicle="20ABCT_Sect_D_SS";
						rank="PRIVATE";
						position[]={4,-2,0};
					};
					class Unit7
					{
						side=1;
						vehicle="20ABCT_Sect_D_GPMG";
						rank="PRIVATE";
						position[]={6,-2,0};
					};
				};
			};
			class Mechanized
			{
				name="Armoured Infantry";
				class 20ABCT_B_HQ_Section_AI
				{
					name="HQ Section";
					faction="20ABCT";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="20ABCT_Pl_Sjt";
						rank="SERGEANT";
						position[]={4,2,0};
					};
					class Unit1
					{
						side=1;
						vehicle="20ABCT_Pl_CMT";
						rank="CORPORAL";
						position[]={4,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="20ABCT_Pl_Rnr";
						rank="PRIVATE";
						position[]={4,-2,0};
					};
					class Unit3
					{
						side=1;
						vehicle="20ABCT_Pl_Rnr";
						rank="PRIVATE";
						position[]={4,-4,0};
					};
					class Unit4
					{
						side=1;
						vehicle="20ABCT_fv510_warrior_ai_dep";
						rank="MAJOR";
						position[]={0,0,0};
					};
				};
				class 20ABCT_B_Rifle_Section_AI
				{
					name="Rifle Section";
					faction="20ABCT";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="20ABCT_fv510_warrior_ai_dep";
						rank="MAJOR";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="20ABCT_Sect_Comd";
						rank="PRIVATE";
						position[]={4,2,0};
					};
					class Unit2
					{
						side=1;
						vehicle="20ABCT_Sect_C_TM";
						rank="PRIVATE";
						position[]={4,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="20ABCT_Sect_C_PM";
						rank="PRIVATE";
						position[]={4,-2,0};
					};
					class Unit4
					{
						side=1;
						vehicle="20ABCT_Sect_2IC";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class Unit5
					{
						side=1;
						vehicle="20ABCT_Sect_D_TM";
						rank="PRIVATE";
						position[]={4,-6,0};
					};
					class Unit6
					{
						side=1;
						vehicle="20ABCT_Sect_D_SS";
						rank="PRIVATE";
						position[]={4,-8,0};
					};
				};
			};
		};
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
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1
			{
			};
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class APC_Tracked_03_base_F
	{
		class AnimationSources;
		class ACE_SelfActions;
		class Turrets
		{
			class MainTurret
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
			class MainTurret
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
	class Truck_F;
	class Truck_01_base_F;
	class MRAP_01_base_F;
	class UK3CB_BAF_Husky_Base;
	class UK3CB_BAF_Husky_GPMG_Base;
	class UK3CB_BAF_Husky_Logistics_GPMG_Sand;
	class UK3CB_BAF_MAN_HX60_Base;
	class UK3CB_BAF_MAN_HX58_Base;
	class UK3CB_BAF_MAN_HX58_Cargo_Base;
	class UK3CB_BAF_MAN_HX58_Cargo_Green_A;
	class UK3CB_BAF_MAN_HX58_Fuel_Base;
	class UK3CB_BAF_MAN_HX58_Fuel_Green;
	class UK3CB_BAF_MAN_HX58_Repair_Base;
	class UK3CB_BAF_MAN_HX58_Repair_Green;
	class B_Truck_01_transport_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_ammo_F;
	class B_Truck_01_box_F;
	class APC_Tracked_01_base_F;
	class UK3CB_BAF_FV432_Mk3_Base;
	class UK3CB_BAF_FV432_Mk3_RWS_Sand;
	class UK3CB_BAF_FV432_Mk3_GPMG_Sand;
	class B_officer_F;
	class TRF_TRIZIP_LR;
	class B_Soldier_SL_F;
	class B_medic_F;
	class B_Carryall_mcamo;
	class B_Soldier_F;
	class B_Carryall_oli;
	class B_crew_F;
	class B_AssaultPack_cbr;
	class TRF_VIRTUS_ASSAULT_PACK_LR;
	class TRF_VIRTUS_ASSAULT_PACK;
	class TRF_TRIZIP;
	class B_Kitbag_mcamo;
	class B_Kitbag_sgg;
	class B_Soldier_TL_F;
	class B_Kitbag_rgr;
	class B_soldier_M_F;
	class B_Kitbag_cbr;
	class B_HeavyGunner_F;
	class ReammoBox;
	class ReammoBox_F;
	class NATO_Box_Base;
	class ACE_medicalSupplyCrate;
	class ACM_MedicalSupplyCrate_Basic;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_Uniforms_F;
	class Box_NATO_AmmoVeh_F;
	class Box_Syndicate_Ammo_F;
	class Slingload_base_F;
	class CargoNet_01_base_F;
	class CargoNet_01_ammo_base_F;
	class UK3CB_BAF_MAN_Container_Base;
	class UK3CB_BAF_MAN_HX58_Container_Green;
	class 20ABCT_box: Box_NATO_Uniforms_F
	{
		scope=0;
		scopeCurator=0;
		displayName="Template Crate";
		editorSubcategory="20ABCT_Log";
		maximumLoad=9000;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		ace_cargo_noRename=1;
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
		ace_dragging_ignoreWeightCarry=1;
		ace_rearm_defaultSupply=0;
		hiddenSelections[]=
		{
			"camo",
			"camo_signs"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
			"\20ABCT\data\boxes\Munitions.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class 20ABCT_SECT_box: 20ABCT_box
	{
		scope=2;
		scopeCurator=2;
		displayName="Section Ammunition Box";
		editorSubcategory="20ABCT_Log";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
			"\20ABCT\data\boxes\Sect.paa"
		};
		class TransportItems
		{
			class _xx_GME_556Bando
			{
				name="GME_556Bando";
				count=5;
			};
			class _xx_GME_762Bando
			{
				name="GME_762Bando";
				count=1;
			};
			class _xx_GME_40HEBando
			{
				name="GME_40HEBando";
				count=2;
			};
			class _xx_GME_HEGrenadeAmmoBox
			{
				name="GME_HEGrenadeAmmoBox";
				count=2;
			};
			class _xx_GME_SMOKEGrenadeAmmoBox
			{
				name="GME_SMOKEGrenadeAmmoBox";
				count=2;
			};
			class _xx_greenmag_beltlinked_762x51_basic_200
			{
				name="greenmag_beltlinked_762x51_basic_200";
				count=8;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=24;
			};
			class _xx_GME_IFAK
			{
				name="GME_IFAK";
				count=8;
			};
			class _xx_GME_TMKit
			{
				name="GME_TMKit";
				count=2;
			};
		};
	};
	class 20ABCT_PL_box: 20ABCT_box
	{
		scope=2;
		scopeCurator=2;
		displayName="Platoon Ammunition Box";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
			"\20ABCT\data\boxes\Pl.paa"
		};
		maximumLoad=30000;
		class TransportItems
		{
			class _xx_GME_556Bando
			{
				name="GME_556Bando";
				count=32;
			};
			class _xx_GME_762Bando
			{
				name="GME_762Bando";
				count=6;
			};
			class _xx_GME_40HEBando
			{
				name="GME_40HEBando";
				count=12;
			};
			class _xx_GME_HEGrenadeAmmoBox
			{
				name="GME_HEGrenadeAmmoBox";
				count=12;
			};
			class _xx_GME_SMOKEGrenadeAmmoBox
			{
				name="GME_SMOKEGrenadeAmmoBox";
				count=12;
			};
			class _xx_greenmag_beltlinked_762x51_basic_200
			{
				name="greenmag_beltlinked_762x51_basic_200";
				count=35;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=64;
			};
			class _xx_GME_IFAK
			{
				name="GME_IFAK";
				count=30;
			};
			class _xx_GME_TMKit
			{
				name="GME_TMKit";
				count=12;
			};
		};
	};
	class 20ABCT_Empty_box: 20ABCT_PL_box
	{
		displayName="Empty Platoon Box";
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_UGL_box: 20ABCT_box
	{
		scope=2;
		scopeCurator=2;
		displayName="UGL Ammunition Box";
		editorSubcategory="20ABCT_Log";
		maximumLoad=4000;
		class TransportItems
		{
			class _xx_GME_40HEBando
			{
				name="GME_40HEBando";
				count=30;
			};
		};
	};
	class 20ABCT_LINK_box: Box_Syndicate_Ammo_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GPMG Link Box";
		editorSubcategory="20ABCT_Log";
		maximumLoad=4000;
		transportAmmo=0;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		ace_cargo_noRename=1;
		ace_cargo_size=0.5;
		ace_cargo_canLoad=1;
		ace_dragging_ignoreWeightCarry=1;
		ace_rearm_defaultSupply=0;
		class TransportItems
		{
			class _xx_greenmag_beltlinked_762x51_basic_200
			{
				name="greenmag_beltlinked_762x51_basic_200";
				count=100;
			};
		};
		class TransportMagazines
		{
		};
	};
	class 20ABCT_RIFLE_box: 20ABCT_box
	{
		scope=2;
		scopeCurator=2;
		displayName="IW and Sharpshooter Box";
		editorSubcategory="20ABCT_Log";
		maximumLoad=5000;
		class TransportItems
		{
			class _xx_GME_556Bando
			{
				name="GME_556Bando";
				count=100;
			};
			class _xx_GME_762Bando
			{
				name="GME_762Bando";
				count=20;
			};
		};
	};
	class 20ABCT_Veh_box: Box_NATO_AmmoOrd_F
	{
		scope=0;
		scopeCurator=0;
		displayName="Template AFV box";
		editorSubcategory="20ABCT_Log";
		maximumLoad=200;
		transportAmmo=0;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		ace_cargo_noRename=1;
		ace_cargo_size=0.2;
		ace_cargo_canLoad=1;
		ace_dragging_ignoreWeightCarry=1;
		ace_rearm_defaultSupply=0;
		hiddenSelections[]=
		{
			"camo",
			"camo_signs"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class 20ABCT_APDS_box: 20ABCT_Veh_box
	{
		scope=2;
		scopeCurator=2;
		displayName="L14A3 APDS-T Box";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa",
			"\20ABCT\data\boxes\L14A3.paa"
		};
		class TransportMagazines
		{
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=5;
			};
		};
	};
	class 20ABCT_HEIT_box: 20ABCT_Veh_box
	{
		scope=2;
		scopeCurator=2;
		displayName="L13A2 HEI-T Box";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa",
			"\20ABCT\data\boxes\L13A2.paa"
		};
		class TransportMagazines
		{
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=5;
			};
		};
	};
	class 20ABCT_WR_box: Box_NATO_AmmoVeh_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Warrior Ammo Box";
		editorSubcategory="20ABCT_Log";
		maximumLoad=5150;
		transportAmmo=0;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		ace_cargo_noRename=1;
		ace_cargo_size=5;
		ace_cargo_canLoad=1;
		ace_dragging_ignoreWeightCarry=1;
		ace_rearm_defaultSupply=0;
		class TransportMagazines
		{
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=60;
			};
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=60;
			};
			class _xx_20ABCT_COAX_mag
			{
				magazine="20ABCT_COAX_mag";
				count=10;
			};
		};
	};
	class 20ABCT_CVRT_box: 20ABCT_WR_box
	{
		scope=2;
		scopeCurator=2;
		displayName="CVRT Ammo Box";
		editorSubcategory="20ABCT_Log";
		class TransportMagazines
		{
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=60;
			};
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=60;
			};
			class _xx_20ABCT_COAX1_mag
			{
				magazine="20ABCT_COAX1_mag";
				count=10;
			};
		};
	};
	class 20ABCT_med_crate: ACM_MedicalSupplyCrate_Basic
	{
		scope=2;
		scopeCurator=2;
		displayName="Medical Supply Crate";
		editorSubcategory="20ABCT_Log";
		class TransportItems
		{
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=30;
			};
			class _xx_ACM_ChestSeal
			{
				name="ACM_ChestSeal";
				count=12;
			};
			class _xx_ACM_EmergencyTraumaDressing
			{
				name="ACM_EmergencyTraumaDressing";
				count=24;
			};
			class _xx_ACM_PressureBandage
			{
				name="ACM_PressureBandage";
				count=24;
			};
			class _xx_ACM_ElasticWrap
			{
				name="ACM_ElasticWrap";
				count=48;
			};
			class _xx_ACM_SAMSplint
			{
				name="ACM_SAMSplint";
				count=24;
			};
			class _xx_ACM_NPA
			{
				name="ACM_NPA";
				count=8;
			};
			class _xx_ACM_OPA
			{
				name="ACM_OPA";
				count=8;
			};
			class _xx_ACM_IGel
			{
				name="ACM_IGel";
				count=16;
			};
			class _xx_ACM_SuctionBag
			{
				name="ACM_SuctionBag";
				count=8;
			};
			class _xx_ACM_PocketBVM
			{
				name="ACM_PocketBVM";
				count=2;
			};
			class _xx_ACM_Lozenge_Fentanyl
			{
				name="ACM_Lozenge_Fentanyl";
				count=24;
			};
			class _xx_ACM_IO_EZ
			{
				name="ACM_IO_EZ";
				count=4;
			};
			class _xx_ACM_IO_FAST
			{
				name="ACM_IO_FAST";
				count=4;
			};
			class _xx_ACM_PressureCuff
			{
				name="ACM_PressureCuff";
				count=2;
			};
			class _xx_ACM_PulseOximeter
			{
				name="ACM_PulseOximeter";
				count=8;
			};
			class _xx_ACE_Suture
			{
				name="ACE_Suture";
				count=80;
			};
			class _xx_ACM_ACCUVAC
			{
				name="ACM_ACCUVAC";
				count=2;
			};
			class _xx_ACM_BVM
			{
				name="ACM_BVM";
				count=2;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=24;
			};
			class _xx_ACM_IV_16g
			{
				name="ACM_IV_16g";
				count=16;
			};
			class _xx_ACM_IV_14g
			{
				name="ACM_IV_14g";
				count=4;
			};
			class _xx_ACM_Syringe_1
			{
				name="ACM_Syringe_1";
				count=32;
			};
			class _xx_ACM_Vial_CalciumChloride
			{
				name="ACM_Vial_CalciumChloride";
				count=16;
			};
			class _xx_ACM_Vial_Ertapenem
			{
				name="ACM_Vial_Ertapenem";
				count=8;
			};
			class _xx_ACM_Vial_TXA
			{
				name="ACM_Vial_TXA";
				count=8;
			};
			class _xx_ACE_bodyBag
			{
				name="ACE_bodyBag";
				count=12;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=12;
			};
		};
		class TransportMagazines
		{
			class _xx_ACM_AmmoniaInhalant
			{
				Magazine="ACM_AmmoniaInhalant";
				count=8;
			};
			class _xx_ACM_Inhaler_Penthrox
			{
				Magazine="ACM_Inhaler_Penthrox";
				count=8;
			};
			class _xx_ACM_Paracetamol
			{
				Magazine="ACM_Paracetamol";
				count=16;
			};
		};
	};
	class 20ABCT_ISO_ammo_b: UK3CB_BAF_MAN_HX58_Container_Green
	{
		scope=0;
		scopeCurator=0;
		displayName="Template ISO Container";
		editorSubcategory="20ABCT_Log";
		maximumLoad=21000;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		ace_cargo_noRename=1;
		ace_cargo_canLoad=0;
		ace_dragging_ignoreWeightCarry=0;
		ace_rearm_defaultSupply=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class 20ABCT_ISO_ammo_i: 20ABCT_ISO_ammo_b
	{
		displayName="ISO Container - Infantry Supplies";
		scope=2;
		scopeCurator=2;
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		hideWeaponsCargo=1;
		acex_field_rations_waterSupply=200;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_GME_556Bando
			{
				name="GME_556Bando";
				count=200;
			};
			class _xx_GME_762Bando
			{
				name="GME_762Bando";
				count=40;
			};
			class _xx_GME_40HEBando
			{
				name="GME_40HEBando";
				count=12;
			};
			class _xx_greenmag_beltlinked_762x51_basic_200
			{
				name="greenmag_beltlinked_762x51_basic_200";
				count=40;
			};
			class _xx_ACE_EarPlugs
			{
				Name="ACE_EarPlugs";
				count=40;
			};
			class _xx_GME_IFAK
			{
				Name="GME_IFAK";
				count=42;
			};
			class _xx_GME_TMKit
			{
				Name="GME_TMKit";
				count=8;
			};
			class _xx_ACE_EntrenchingTool
			{
				Name="ACE_EntrenchingTool";
				count=8;
			};
			class _xx_ACE_ACE_Fortify
			{
				Name="ACE_ACE_Fortify";
				count=8;
			};
			class _xx_ACE_wirecutter
			{
				Name="ACE_wirecutter";
				count=8;
			};
			class _xx_ACE_Canteen
			{
				Name="ACE_Canteen";
				count=40;
			};
			class _xx_ACE_Humanitarian_Ration
			{
				Name="ACE_Humanitarian_Ration";
				count=40;
			};
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=12;
			};
			class _xx_RW_L2A1_HESH_Loaded
			{
				weapon="RW_L2A1_HESH_Loaded";
				count=30;
			};
		};
	};
	class 20ABCT_ISO_ammo_v: 20ABCT_ISO_ammo_b
	{
		displayName="ISO Container - AFV Supplies";
		scope=2;
		scopeCurator=2;
		class TransportMagazines
		{
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=200;
			};
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=200;
			};
			class _xx_20ABCT_COAX_mag
			{
				magazine="20ABCT_COAX_mag";
				count=15;
			};
			class _xx_20ABCT_COAX1_mag
			{
				magazine="20ABCT_COAX1_mag";
				count=15;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				Name="ToolKit";
				count=2;
			};
		};
		class TransportWeapons
		{
		};
		class TransportBackpacks
		{
		};
	};
	class 20ABCT_ISO_cargo_e: 20ABCT_ISO_ammo_b
	{
		displayName="ISO Container - Cargo";
		scope=2;
		scopeCurator=2;
		maximumLoad=200;
		ace_cargo_space=25;
		ace_cargo_hasCargo=1;
		hideWeaponsCargo=1;
		acex_field_rations_waterSupply=50;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
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
		picture="\20ABCT\data\UI\Garage_Icon.paa";
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
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=33;
			};
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=22;
			};
			class _xx_20ABCT_COAX1_mag
			{
				magazine="20ABCT_COAX1_mag";
				count=5;
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
				magazines[]=
				{
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
			class LoaderActions
			{
				icon="a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMagAll_ca.paa";
				displayName="Load RARDEN/COAX";
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
					priority=3;
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
					priority=1;
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
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\20ABCT\data\fist_ca.paa";
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
		picture="\20ABCT\data\UI\Garage_Icon.paa";
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
			class _xx_20ABCT_APDS_mag
			{
				magazine="20ABCT_APDS_mag";
				count=35;
			};
			class _xx_20ABCT_HEIT_mag
			{
				magazine="20ABCT_HEIT_mag";
				count=32;
			};
			class _xx_20ABCT_COAX1_mag
			{
				magazine="20ABCT_COAX1_mag";
				count=5;
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
				magazines[]=
				{
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
			class LoaderActions
			{
				icon="a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMagAll_ca.paa";
				displayName="Load RARDEN/COAX";
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
					priority=3;
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
					priority=1;
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
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\20ABCT\data\fist_ca.paa";
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
	class 20ABCT_Bulldog_HMG_Desert: UK3CB_BAF_FV432_Mk3_RWS_Sand
	{
		author="www.3commandobrigade.com - edited by 20th ABCT MDT";
		displayName="FV432 Bulldog Mk3, HMG (TES, Desert)";
		faction="20ABCT";
		forceInGarage=1;
		editorSubcategory="20ABCT_AFV";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		crew="20ABCT_AFV_Crew";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		model="\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\uk3cb_baf_bulldog_hmg.p3d";
		editorPreview="\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\ui\UK3CB_BAF_FV432_Mk3_RWS_Sand.jpg";
		side=1;
		enginePower=187;
		ace_refuel_fuelCapacity=454;
		ace_cargo_space=14;
		ace_cargo_hasCargo=1;
		maxSpeed=70;
		maximumLoad=6000;
		smokeLauncherGrenadeCount=3;
		smokeLauncherOnTurret=0;
		smokeLauncherVelocity=10;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_127_100Rnd
			{
				magazine="UK3CB_BAF_127_100Rnd";
				count=15;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=20;
			};
			class _xx_ACE_FlareTripMine_Mag
			{
				magazine="ACE_FlareTripMine_Mag";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
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
				count=4;
			};
			class _xx_GME_762AmmoBox
			{
				Name="GME_762AmmoBox";
				count=2;
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
			class _xx_greenmag_beltlinked_762x51_basic_200
			{
				name="greenmag_beltlinked_762x51_basic_200";
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
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
			class _xx_RW_L2A1_HESH_Loaded
			{
				weapon="RW_L2A1_HESH_Loaded";
				count=1;
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
	};
	class 20ABCT_Bulldog_HMG_Green: 20ABCT_Bulldog_HMG_Desert
	{
		author="www.3commandobrigade.com - edited by 20th ABCT MDT";
		displayName="FV432 Bulldog Mk3, HMG (TES, Woodland)";
		editorPreview="\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\ui\UK3CB_BAF_FV432_Mk3_RWS_Green.jpg";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_1_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_2_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_3_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_4_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\camonet_nato_green_co.paa"
		};
	};
	class 20ABCT_Bulldog_GPMG_Desert: UK3CB_BAF_FV432_Mk3_GPMG_Sand
	{
		author="www.3commandobrigade.com - edited by 20th ABCT MDT";
		displayName="FV432 Bulldog Mk3, GPMG (TES, Desert)";
		faction="20ABCT";
		forceInGarage=1;
		editorSubcategory="20ABCT_AFV";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		crew="20ABCT_AFV_Crew";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		model="\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\uk3cb_baf_bulldog_gpmg.p3d";
		editorPreview="\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\ui\UK3CB_BAF_FV432_Mk3_GPMG_Sand.jpg";
		side=1;
		enginePower=187;
		ace_refuel_fuelCapacity=454;
		ace_cargo_space=14;
		ace_cargo_hasCargo=1;
		maxSpeed=70;
		maximumLoad=6000;
		smokeLauncherGrenadeCount=3;
		smokeLauncherOnTurret=0;
		smokeLauncherVelocity=10;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_200Rnd
			{
				magazine="UK3CB_BAF_762_200Rnd";
				count=20;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=20;
			};
			class _xx_ACE_FlareTripMine_Mag
			{
				magazine="ACE_FlareTripMine_Mag";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
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
				count=4;
			};
			class _xx_GME_762AmmoBox
			{
				Name="GME_762AmmoBox";
				count=2;
			};
			class _xx_greenmag_beltlinked_762x51_basic_200
			{
				name="greenmag_beltlinked_762x51_basic_200";
				count=20;
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
				count=1;
			};
			class _xx_RW_L2A1_HESH_Loaded
			{
				weapon="RW_L2A1_HESH_Loaded";
				count=1;
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
	};
	class 20ABCT_Bulldog_GPMG_Green: 20ABCT_Bulldog_GPMG_Desert
	{
		author="www.3commandobrigade.com - edited by 20th ABCT MDT";
		displayName="FV432 Bulldog Mk3, GPMG (TES, Woodland)";
		editorPreview="\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\ui\UK3CB_BAF_FV432_Mk3_GPMG_Green.jpg";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_1_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_2_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_3_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_4_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\bulldog_5_green_co.paa",
			"\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_Bulldog\data\camonet_nato_green_co.paa"
		};
	};
	class 20ABCT_UST_b: UK3CB_BAF_MAN_HX58_Fuel_Green
	{
		author="www.3commandobrigade.com - edited by 20th ABCT MDT";
		displayName="MAN UST";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="20ABCT";
		editorSubcategory="20ABCT_Supt";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		crew="20ABCT_Pl_Rnr";
		maximumLoad=200;
		ace_cargo_space=0;
		ace_cargo_hasCargo=0;
		ace_refuel_fuelCapacity=333;
		enginePower=334;
		ace_refuel_fuelCargo=20000;
		hideWeaponsCargo=1;
		acex_field_rations_waterSupply=50;
		transportFuel=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class 20ABCT_TSV_Desert: UK3CB_BAF_Husky_Logistics_GPMG_Sand
	{
		author="www.3commandobrigade.com - edited by 20th ABCT MDT";
		acex_field_rations_waterSupply=50;
		ace_rearm_defaultSupply=250;
		ace_cargo_space=20;
		ace_cargo_hasCargo=1;
		ace_refuel_fuelCargo=210;
		crew="20ABCT_Pl_Rnr";
		displayName="Husky TSV (Desert)";
		editorSubcategory="20ABCT_Supt";
		enginePower=242;
		faction="20ABCT";
		forceInGarage=1;
		transportAmmo=0;
		transportFuel=0;
		transportRepair=0;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_200Rnd
			{
				magazine="UK3CB_BAF_762_200Rnd";
				count=20;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=20;
			};
			class _xx_ACE_FlareTripMine_Mag
			{
				magazine="ACE_FlareTripMine_Mag";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
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
				count=4;
			};
			class _xx_GME_762AmmoBox
			{
				Name="GME_762AmmoBox";
				count=2;
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
			class _xx_greenmag_beltlinked_762x51_basic_200
			{
				name="greenmag_beltlinked_762x51_basic_200";
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
			class _xx_RW_L2A1_HESH_Loaded
			{
				weapon="RW_L2A1_HESH_Loaded";
				count=1;
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
	};
	class 20ABCT_TSV_Woodland: 20ABCT_TSV_Desert
	{
		displayName="Husky TSV (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyCab_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyFrontEnd_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyMisc_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyRearEnd_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyUnderside_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyTyre_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyDecals_green_ca.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskySeats_green_co.paa"
		};
	};
	class 20ABCT_RECCY_b: UK3CB_BAF_MAN_HX58_Repair_Green
	{
		author="www.3commandobrigade.com - edited by 20th ABCT MDT";
		displayName="MAN Recovery Vehicle";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="20ABCT";
		editorSubcategory="20ABCT_Supt";
		picture="\20ABCT\data\UI\Garage_Icon.paa";
		crew="20ABCT_Pl_Rnr";
		maximumLoad=200;
		ace_cargo_space=8;
		ace_cargo_hasCargo=1;
		ace_refuel_fuelCapacity=333;
		enginePower=334;
		hideWeaponsCargo=1;
		acex_field_rations_waterSupply=50;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class 20ABCT_Pl_Comd: B_officer_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Platoon Commander";
		uniformClass="20X_RIFLES_1";
		weapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_Grippod_T_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS_PiPUK3CB_underbarrel_acc_grippod_t",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_Grippod_T_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS_PiPUK3CB_underbarrel_acc_grippod_t",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"ACRE_PRC117F",
			"H2H_acc_bayo_L3A1"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"ACRE_PRC117F",
			"H2H_acc_bayo_L3A1"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_IC_3",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_IC_3",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Pl_Comd_pack";
	};
	class 20ABCT_Pl_Sjt: B_Soldier_SL_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Platoon Serjeant";
		uniformClass="20X_RIFLES_7";
		weapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"ACRE_PRC117F",
			"H2H_acc_bayo_L3A1"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"ACRE_PRC117F",
			"H2H_acc_bayo_L3A1"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_3",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_3",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Pl_Sjt_pack";
	};
	class 20ABCT_Pl_CMT: B_medic_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Platoon CMT";
		uniformClass="20X_RAMS_3";
		weapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"rhsusf_ANPVS_15",
			"H2H_acc_bayo_L3A1",
			"kat_MFAK",
			"afuk_beret3_ramc",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_salineIV_250",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"rhsusf_ANPVS_15",
			"H2H_acc_bayo_L3A1",
			"kat_MFAK",
			"afuk_beret3_ramc",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_salineIV_250",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Medic",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Medic",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Pl_CMT_pack";
	};
	class 20ABCT_Pl_Rnr: B_Soldier_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Platoon Runner";
		uniformClass="20X_RIFLES_6";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Pl_Rnr_pack";
	};
	class 20ABCT_AFV_Crew: B_crew_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_AI";
		side=1;
		displayName="AFV Crew";
		uniformClass="20X_RIFLES_2";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_afg_d",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Crew",
			"rhsusf_shemagh2_gogg_grn"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Crew",
			"rhsusf_shemagh2_gogg_grn"
		};
		backpack="20ABCT_AFV_Crew_pack";
	};
	class 20ABCT_Pl_WR_Sjt: B_Soldier_SL_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_AI";
		side=1;
		displayName="Warrior Serjeant";
		uniformClass="20X_RIFLES_7";
		weapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Laserdesignator_03",
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"Laserbatteries",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_IC_2",
			"rhsusf_shemagh2_gogg_tan"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"Laserdesignator_03",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_IC_2",
			"rhsusf_shemagh2_gogg_tan"
		};
		backpack="20ABCT_Pl_WR_Sjt_pack";
	};
	class 20ABCT_Sect_Comd: B_Soldier_SL_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Section Commander";
		uniformClass="20X_RIFLES_4";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UGL_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UGL_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_IC",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_IC",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Sect_Comd_pack";
	};
	class 20ABCT_Sect_C_PM: B_Soldier_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Pointman";
		uniformClass="20X_RIFLES_1";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_Flashlight_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_2",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_2",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Sect_C_PM_pack";
	};
	class 20ABCT_Sect_C_TM: B_Soldier_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Team Medic (Charlie)";
		uniformClass="20X_RIFLES_5";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_2",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_2",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Sect_C_TM_pack";
	};
	class 20ABCT_Sect_C_Rfn: B_Soldier_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Rifleman";
		uniformClass="20X_RIFLES_8";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Sect_C_Rfn_pack";
	};
	class 20ABCT_Sect_2IC: B_Soldier_TL_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Section 2IC";
		uniformClass="20X_RIFLES_6";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UGL_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UGL_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDS",
			"rhsusf_weap_glock17g4",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"rhsusf_ANPVS_15",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Grenadier",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Grenadier",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Sect_2IC_pack";
	};
	class 20ABCT_Sect_D_TM: B_Soldier_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Team Medic (Delta)";
		uniformClass="20X_RIFLES_7";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L85A3_UK3CB_BAF_LLM_IR_TanRKSL_optic_LDSUK3CB_underbarrel_acc_grippod_t",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_3",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Rifleman_3",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Sect_D_TM_pack";
	};
	class 20ABCT_Sect_D_SS: B_soldier_M_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="Sharpshooter";
		uniformClass="20X_RIFLES_3";
		weapons[]=
		{
			"20ABCT_UK3CB_BAF_L129A1_UK3CB_BAF_LLM_IR_TanUK3CB_BAF_TA648_308UK3CB_underbarrel_acc_fgrip_bipod",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"20ABCT_UK3CB_BAF_L129A1_UK3CB_BAF_LLM_IR_TanUK3CB_BAF_TA648_308UK3CB_underbarrel_acc_fgrip_bipod",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Sharpshooter",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Sharpshooter",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Set_D_SS_pack";
	};
	class 20ABCT_Sect_D_GPMG: B_HeavyGunner_F
	{
		faction="20ABCT";
		editorSubcategory="20ABCT_LRI";
		side=1;
		displayName="GPMG Gunner";
		uniformClass="20X_RIFLES_1";
		weapons[]=
		{
			"UK3CB_BAF_L7A2",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"UK3CB_BAF_L7A2",
			"Put",
			"Throw"
		};
		items[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		respawnItems[]=
		{
			"ACE_Chemlight_Shield",
			"ACE_Chemlight_Shield",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"afuk_beret1_rifles",
			"H2H_acc_bayo_L3A1",
			"rhsusf_ANPVS_14"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_762_200Rnd",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_762_200Rnd",
			"UK3CB_BAF_762_200Rnd"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"rhs_mag_m67",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_762_200Rnd",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_SmokeShellGreen",
			"UK3CB_BAF_762_200Rnd",
			"UK3CB_BAF_762_200Rnd"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Gunner",
			"rhs_googles_yellow"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"TRF_BATLSKIN_REVISION_SCRIM_OAK",
			"TRF_STV_Gunner",
			"rhs_googles_yellow"
		};
		backpack="20ABCT_Sect_D_GPMG_pack";
	};
	class 20ABCT_Pl_Comd_pack: TRF_TRIZIP_LR
	{
		scope=1;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_rhsusf_ANPVS_15
			{
				count=1;
				name="rhsusf_ANPVS_15";
			};
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_ACRE_PRC117F
			{
				count=1;
				name="ACRE_PRC117F";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Pl_Sjt_pack: TRF_TRIZIP_LR
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_rhsusf_ANPVS_15
			{
				count=1;
				name="rhsusf_ANPVS_15";
			};
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_ACRE_PRC117F
			{
				count=1;
				name="ACRE_PRC117F";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Pl_CMT_pack: B_Carryall_mcamo
	{
		scope=1;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_rhsusf_ANPVS_15
			{
				count=1;
				name="rhsusf_ANPVS_15";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_kat_MFAK
			{
				count=1;
				name="kat_MFAK";
			};
			class _xx_afuk_beret3_ramc
			{
				count=1;
				name="afuk_beret3_ramc";
			};
			class _xx_ACRE_PRC152
			{
				count=1;
				name="ACRE_PRC152";
			};
			class _xx_ACE_fieldDressing
			{
				count=3;
				name="ACE_fieldDressing";
			};
			class _xx_ACE_packingBandage
			{
				count=4;
				name="ACE_packingBandage";
			};
			class _xx_ACE_morphine
			{
				count=3;
				name="ACE_morphine";
			};
			class _xx_ACE_tourniquet
			{
				count=3;
				name="ACE_tourniquet";
			};
			class _xx_ACE_epinephrine
			{
				count=1;
				name="ACE_epinephrine";
			};
			class _xx_ACE_salineIV_250
			{
				count=1;
				name="ACE_salineIV_250";
			};
			class _xx_ACE_splint
			{
				count=2;
				name="ACE_splint";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Pl_Rnr_pack: B_Carryall_oli
	{
		scope=1;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_rhsusf_ANPVS_15
			{
				count=1;
				name="rhsusf_ANPVS_15";
			};
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_AFV_Crew_pack: B_AssaultPack_cbr
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_rhsusf_ANPVS_14
			{
				count=1;
				name="rhsusf_ANPVS_14";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Pl_WR_Sjt_pack: TRF_VIRTUS_ASSAULT_PACK_LR
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_rhsusf_ANPVS_15
			{
				count=1;
				name="rhsusf_ANPVS_15";
			};
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Sect_Comd_pack: TRF_VIRTUS_ASSAULT_PACK_LR
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_1Rnd_HEDP_Grenade_Shell
			{
				count=11;
				magazine="UK3CB_BAF_1Rnd_HEDP_Grenade_Shell";
			};
			class _xx_UK3CB_BAF_762_100Rnd
			{
				count=1;
				magazine="UK3CB_BAF_762_100Rnd";
			};
			class _xx_rhs_mag_m67
			{
				count=2;
				magazine="rhs_mag_m67";
			};
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_rhsusf_ANPVS_15
			{
				count=1;
				name="rhsusf_ANPVS_15";
			};
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Sect_C_PM_pack: TRF_TRIZIP
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_100Rnd
			{
				count=1;
				magazine="UK3CB_BAF_762_100Rnd";
			};
			class _xx_rhs_mag_m67
			{
				count=2;
				magazine="rhs_mag_m67";
			};
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_rhsusf_ANPVS_14
			{
				count=1;
				name="rhsusf_ANPVS_14";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Sect_C_TM_pack: TRF_VIRTUS_ASSAULT_PACK
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_100Rnd
			{
				count=1;
				magazine="UK3CB_BAF_762_100Rnd";
			};
			class _xx_rhs_mag_m67
			{
				count=2;
				magazine="rhs_mag_m67";
			};
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_rhsusf_ANPVS_14
			{
				count=1;
				name="rhsusf_ANPVS_14";
			};
			class _xx_ACE_fieldDressing
			{
				count=2;
				name="ACE_fieldDressing";
			};
			class _xx_ACE_packingBandage
			{
				count=2;
				name="ACE_packingBandage";
			};
			class _xx_ACE_morphine
			{
				count=2;
				name="ACE_morphine";
			};
			class _xx_ACE_tourniquet
			{
				count=2;
				name="ACE_tourniquet";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Sect_C_Rfn_pack: B_Kitbag_sgg
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_100Rnd
			{
				count=1;
				magazine="UK3CB_BAF_762_100Rnd";
			};
			class _xx_rhs_mag_m67
			{
				count=2;
				magazine="rhs_mag_m67";
			};
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_rhsusf_ANPVS_14
			{
				count=1;
				name="rhsusf_ANPVS_14";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Sect_2IC_pack: TRF_VIRTUS_ASSAULT_PACK_LR
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_1Rnd_HEDP_Grenade_Shell
			{
				count=11;
				magazine="UK3CB_BAF_1Rnd_HEDP_Grenade_Shell";
			};
			class _xx_UK3CB_BAF_762_100Rnd
			{
				count=2;
				magazine="UK3CB_BAF_762_100Rnd";
			};
			class _xx_rhs_mag_m67
			{
				count=2;
				magazine="rhs_mag_m67";
			};
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_rhsusf_ANPVS_15
			{
				count=1;
				name="rhsusf_ANPVS_15";
			};
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Sect_D_TM_pack: B_Kitbag_rgr
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_100Rnd
			{
				count=2;
				magazine="UK3CB_BAF_762_100Rnd";
			};
			class _xx_rhs_mag_m67
			{
				count=2;
				magazine="rhs_mag_m67";
			};
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_rhsusf_ANPVS_14
			{
				count=1;
				name="rhsusf_ANPVS_14";
			};
			class _xx_ACE_fieldDressing
			{
				count=2;
				name="ACE_fieldDressing";
			};
			class _xx_ACE_packingBandage
			{
				count=2;
				name="ACE_packingBandage";
			};
			class _xx_ACE_morphine
			{
				count=2;
				name="ACE_morphine";
			};
			class _xx_ACE_tourniquet
			{
				count=2;
				name="ACE_tourniquet";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Set_D_SS_pack: B_Kitbag_cbr
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_100Rnd
			{
				count=2;
				magazine="UK3CB_BAF_762_100Rnd";
			};
			class _xx_rhs_mag_m67
			{
				count=2;
				magazine="rhs_mag_m67";
			};
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
		};
		class TransportItems
		{
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_rhsusf_ANPVS_14
			{
				count=1;
				name="rhsusf_ANPVS_14";
			};
		};
		class TransportWeapons
		{
		};
	};
	class 20ABCT_Sect_D_GPMG_pack: TRF_TRIZIP
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_SmokeShellGreen
			{
				count=2;
				magazine="UK3CB_BAF_SmokeShellGreen";
			};
			class _xx_UK3CB_BAF_762_200Rnd
			{
				count=2;
				magazine="UK3CB_BAF_762_200Rnd";
			};
		};
		class TransportItems
		{
			class _xx_afuk_beret1_rifles
			{
				count=1;
				name="afuk_beret1_rifles";
			};
			class _xx_H2H_acc_bayo_L3A1
			{
				count=1;
				name="H2H_acc_bayo_L3A1";
			};
			class _xx_rhsusf_ANPVS_14
			{
				count=1;
				name="rhsusf_ANPVS_14";
			};
		};
		class TransportWeapons
		{
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
		picture="\20ABCT\data\UI\Garage_Icon.paa";
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
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\20ABCT\data\fist_ca.paa";
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
		picture="\20ABCT\data\UI\Garage_Icon.paa";
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
			class 20ABCT_ACE_Set_CallSign
			{
				scope=2;
				displayName="Set Callsign";
				condition="_player == commander _target";
				statement="";
				showDisabled=0;
				priority=5;
				icon="\20ABCT\data\fist_ca.paa";
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
