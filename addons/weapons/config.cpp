class CfgPatches
{
    class 20ABCT_weapons
    {
        name="20th ABCT Weapons";
        units[]={};
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
            "20ABCT_UK3CB_BAF_L129A1_UK3CB_BAF_LLM_IR_TanUK3CB_BAF_TA648_308UK3CB_underbarrel_acc_fgrip_bipod",
            "20ABCT_Item_COAX_400",
            "20ABCT_Item_COAX_600",
            "20ABCT_Item_GPMG_100",
            "20ABCT_Item_GPMG_200",
            "20ABCT_Item_COAX_800",
			"20ABCT_Item_30mm_APDST",
			"20ABCT_Item_30mm_HEIT"
        };
        requiredAddons[]=
        {
            "20ABCT_core"
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

class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class SmokeLauncherMag;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
	class 250Rnd_30mm_HE_shells_Tracer_Red;
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
	class 20ABCT_400Rnd_762x51_Red: 2000Rnd_762x51_Belt_Red
	{
		displayName="COAX Belt (400 rds)";
		displayNameShort="7.62x51mm";
		displayNameMFDFormat="COAX";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		picture="\weapons\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
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
		picture="\weapons\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
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
		picture="\weapons\data\UI\COAX.paa";
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
		picture="\weapons\data\UI\COAX.paa";
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
		picture="\weapons\data\UI\COAX.paa";
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
		picture="\weapons\data\UI\COAX.paa";
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
		picture="\weapons\data\UI\COAX.paa";
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
	class 20ABCT_APDS_mag: 60Rnd_30mm_APFSDS_shells_Tracer_Red
	{
		scope=2;
		scopeCurator=2;
		picture="\weapons\data\UI\RARDEN.paa";
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
	class 20ABCT_HEIT_mag: 250Rnd_30mm_HE_shells_Tracer_Red
	{
		scope=2;
		scopeCurator=2;
		picture="\weapons\data\UI\RARDEN.paa";
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
	// Challenger 2 - 120mm single-round magazines
	class qav_35Rnd_120mm_APFSDS_L27_shells;
	class qav_15Rnd_120mm_HESHT_shells;
	class qav_5Rnd_120mm_smoke_shells;
	class 20ABCT_1Rnd_120mm_APFSDS: qav_35Rnd_120mm_APFSDS_L27_shells
	{
		displayName="L27 APFSDS Round";
		displayNameShort="L27 APFSDS";
		displayNameMFDFormat="APFSDS";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		count=1;
		mass=200;
		deleteIfEmpty=1;
	};
	class 20ABCT_1Rnd_120mm_HESHT: qav_15Rnd_120mm_HESHT_shells
	{
		displayName="120mm HESH-T Round";
		displayNameShort="HESH-T";
		displayNameMFDFormat="HESH";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		count=1;
		mass=200;
		deleteIfEmpty=1;
	};
	class 20ABCT_1Rnd_120mm_Smoke: qav_5Rnd_120mm_smoke_shells
	{
		displayName="120mm Smoke Round";
		displayNameShort="Smoke";
		displayNameMFDFormat="SMOKE";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		count=1;
		mass=150;
		deleteIfEmpty=1;
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
			backgroundReload=1;
			ballisticsComputer=2;
			displayName="L21A2 RARDEN";
			dispersion=0.00029;
			FCSZeroingDelay=2;
			magazines[]=
			{
				"20ABCT_HEIT_mag",
				"20ABCT_APDS_mag"
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
				"20ABCT_HEIT_mag",
				"20ABCT_APDS_mag"
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
		magazineReloadTime=4;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
			10,
			1,
			20
		};
		autoReload=1;
		backgroundReload=1;
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
		autoReload=1;
		backgroundReload=1;
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
		backgroundReload=1;
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
		class manual
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
	// ============================================================
	// Magazine Items - carryable inventory items for manual reloads
	// Maps to weapon magazines via reload scripts
	// See plan: swift-frolicking-trinket.md for full mapping table
	// ============================================================
	class 20ABCT_Item_COAX_400: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		displayName="COAX Belt (400 rds)";
		descriptionShort="7.62x51mm belt, 400 rounds. For L94A1 chain gun.";
		picture="\weapons\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=130;
		};
	};
	class 20ABCT_Item_COAX_600: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		displayName="COAX Belt (600 rds)";
		descriptionShort="7.62x51mm belt, 600 rounds. For L94A1 chain gun.";
		picture="\weapons\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=194;
		};
	};
	class 20ABCT_Item_GPMG_100: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		displayName="GPMG Belt (100 rds)";
		descriptionShort="7.62x51mm belt, 100 rounds. For L37A1 GPMG.";
		picture="\weapons\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=33;
		};
	};
	class 20ABCT_Item_GPMG_200: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		displayName="GPMG Belt (200 rds)";
		descriptionShort="7.62x51mm belt, 200 rounds. For L37A1 GPMG.";
		picture="\weapons\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=65;
		};
	};
	class 20ABCT_Item_COAX_800: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		displayName="COAX Belt (800 rds)";
		descriptionShort="7.62x51mm belt, 800 rounds. For L94A1 chain gun.";
		picture="\weapons\data\UI\COAX.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=259;
		};
	};
	// Challenger 2 - 120mm shell items
	class 20ABCT_Item_120mm_APFSDS: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=0;
		displayName="L27 APFSDS Round";
		descriptionShort="120mm L27 APFSDS-T round for L30A1 rifled gun.";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=200;
		};
	};
	class 20ABCT_Item_120mm_HESHT: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=0;
		displayName="120mm HESH-T Round";
		descriptionShort="120mm HESH-T round for L30A1 rifled gun.";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=200;
		};
	};
	class 20ABCT_Item_120mm_Smoke: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=0;
		displayName="120mm Smoke Round";
		descriptionShort="120mm smoke round for L30A1 rifled gun.";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=150;
		};
	};
	// RARDEN - 30mm shell items
	class 20ABCT_Item_30mm_APDST: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=0;
		displayName="L14A3 APDS-T Clip";
		descriptionshort="Calibre: 30x170mm<br/>Rounds: 3<br/>Used in: L21A2";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=60;
		};
	};
	class 20ABCT_Item_30mm_HEIT: ACE_ItemCore
	{
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=0;
		displayName="L13A2 HEI-T Clip";
		descriptionshort="Calibre: 30x170mm<br/>Rounds: 3<br/>Used in: L21A2";
		picture="\weapons\data\UI\RARDEN.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=60;
		};
	};
};
