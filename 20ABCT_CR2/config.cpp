class CfgPatches
{
    class 20ABCT_CR2
    {
        name="QAV, modified by 20th ABCT MDT";
        units[]=
        {
            "20ABCT_CR2"
        };
        weapons[]=
        {
            "qav_challenger_L30A1",
            "20ABCT_762_L94A1",
        };
        requiredVersion = 1;
        requiredAddons[]=
        {
            "A3_Weapons_F",
			"QAV_Challenger"
        };
        author="QAV and the 20th ABCT MDT";
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