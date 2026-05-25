class CfgPatches
{
    class 20ABCT_cr2
    {
        name="QAV, modified by 20th ABCT MDT";
        units[]=
        {
            "20ABCT_CR2"
        };
        weapons[]=
        {
            "20ABCT_L30A1",
            "20ABCT_762_L94A1"
        };
        requiredVersion=0.50;
        requiredAddons[]=
        {
            "20ABCT_core",
            "20ABCT_weapons",
            "A3_Weapons_F",
            "QAV_Challenger"
        };
        author="QAV and the 20th ABCT MDT";
    };
};

class Extended_PreInit_EventHandlers
{
    class 20ABCT_cr2
    {
        init="call compile preprocessFileLineNumbers '\z\20abct\addons\cr2\XEH_preInit.sqf'";
    };
};

class DefaultEventHandlers;
class Optics_Armored;
class Optics_Gunner_APC_01 : Optics_Armored
{
    class Wide;
    class Medium;
    class Narrow;
};
class Optics_Gunner_APC_02 : Optics_Armored
{
    class Wide;
    class Medium;
    class Narrow;
};
class Optics_Commander_02;
class Optics_Gunner_MBT_02: Optics_Armored
{
    class Wide;
    class Medium;
    class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
    class Wide;
    class Medium;
    class Narrow;
};

// L30A1 weapon override to use single-round magazines
class cannon_120mm;
class CannonCore;
class qav_challenger_L30A1;
class CfgWeapons
{
    class 20ABCT_L30A1: qav_challenger_L30A1
    {
        displayName="L30A1 120mm Cannon";
        magazineReloadTime=0.1;
        magazines[]=
        {
            "20ABCT_1Rnd_120mm_APFSDS",
            "20ABCT_1Rnd_120mm_HESHT",
            "20ABCT_1Rnd_120mm_Smoke"
        };
        modes[] = {"player","close","short","medium","far"};
    };
};

class CfgVehicles
{
    class All;
    class Items_base_F;
    class AllVehicles;
    class Land;
    class LandVehicle;
    class Tank:LandVehicle
    {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F:Tank
    {
        class Turrets
        {
            class MainTurret:NewTurret
            {
                class ViewGunner;
                class Turrets
                {
                    class CommanderOptics;
                };
            };
        };
        class Components;
        class AnimationSources;
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints: HitPoints
        {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds: Sounds
        {
            class Engine;
            class Movement;
        };
    };
    class MBT_03_base_F: Tank_F {};
    class I_MBT_03_base_F:MBT_03_base_F {};
    class I_MBT_03_cannon_F : I_MBT_03_base_F {};
    class qav_challenger_base : I_MBT_03_cannon_F{};
    class qav_challenger2 : qav_challenger_base{};

#include "20ABCT_CR2.hpp"
};