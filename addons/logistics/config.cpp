class CfgPatches
{
    class 20ABCT_logistics
    {
        name="20th ABCT Logistics";
        units[]=
        {
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
            "20ABCT_med_crate",
            "20ABCT_UST_b",
            "20ABCT_TSV_Desert",
            "20ABCT_TSV_Woodland",
            "20ABCT_RECCY_b",
            "20ABCT_TRUCK_iammo_b",
            "20ABCT_TRUCK_vammo_b",
            "20ABCT_TRUCK_cargo_e"
        };
        weapons[]={};
        requiredAddons[]=
        {
            "20ABCT_core",
            "uk3cb_baf_vehicles_MAN",
            "uk3cb_baf_vehicles_Husky"
        };
        author="20th ABCT Mod Development Team";
    };
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
};
