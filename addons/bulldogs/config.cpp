class CfgPatches
{
    class 20ABCT_bulldogs
    {
        name="20th ABCT Bulldogs";
        units[]=
        {
            "20ABCT_Bulldog_HMG_Desert",
            "20ABCT_Bulldog_HMG_Green",
            "20ABCT_Bulldog_GPMG_Desert",
            "20ABCT_Bulldog_GPMG_Green"
        };
        weapons[]={};
        requiredAddons[]=
        {
            "20ABCT_core",
            "20ABCT_weapons",
            "uk3cb_baf_vehicles_bulldog"
        };
        author="20th ABCT Mod Development Team";
    };
};

class CfgVehicles
{
    class APC_Tracked_01_base_F;
    class UK3CB_BAF_FV432_Mk3_Base;
    class UK3CB_BAF_FV432_Mk3_RWS_Sand;
    class UK3CB_BAF_FV432_Mk3_GPMG_Sand;

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
};
