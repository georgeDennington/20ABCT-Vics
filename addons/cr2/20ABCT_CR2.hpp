class 20ABCT_CR2 : qav_challenger2
{
    scope=2;
    scopeCurator=2;
    side=1;
    author = "QAV, edited by 20th ABCT MDT";
	picture="\20ABCT\data\UI\Garage_Icon.paa";
    editorSubcategory="20ABCT_AFV";
	faction="20ABCT";
	forceInGarage=1;
    crew="20ABCT_AFV_Crew";
    typicalCargo[]=
    {
        "20ABCT_AFV_Crew"
    };
    displayName="FV4034 Challenger 2";
    maximumLoad=8000;
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportItems
    {
        class _xx_20ABCT_Item_120mm_APFSDS
        {
            name="20ABCT_Item_120mm_APFSDS";
            count=35;
        };
        class _xx_20ABCT_Item_120mm_HESHT
        {
            name="20ABCT_Item_120mm_HESHT";
            count=15;
        };
        class _xx_20ABCT_Item_120mm_Smoke
        {
            name="20ABCT_Item_120mm_Smoke";
            count=5;
        };
    };
    class TransportBackpacks {};
    ace_refuel_fuelCapacity=1600;
    ace_vehicles_engineStartDelay=3;
    enginePower = 1555;
    peakTorque = 6300;

    class ace_viewports
    {
        class SLD_commander
        {
            type="screen";
            camLocation[] = {0,0,-0.05};
            maxDistance=5;
            camAttach[]={0,0};
            screenLocation[]={0,1.5,-0.75};
            roles[]={"driver"};
        };
    };

    reportOwnPosition=1;
    acre_hasInfantryPhone= 1;
    acre_infantryPhoneControlActions[]= { "all" };
    acre_infantryPhoneDisableRinging= 0;
    acre_infantryPhonePosition[]= {0,0,0};
    acre_infantryPhoneIntercom[]= { "all" };
    class AcreIntercoms
    {
        class Intercom_1
        {
            displayName="Crew Intercom";
            shortName="INT";
            allowedPositions[]={"crew"};
            disabledPositions[]={};
            limitedPositions[]={};
            masterPositions[]={"commander"};
            numLimitedPositions=0;
            connectedByDefault=1;
        };
    };
    class AcreRacks
    {
        class Rack_1
        {
            displayName="Bowman Radio 1";
            shortName="Radio 1";
            componentname="ACRE_VRC103";
            allowedPositions[]= {"commander"};
            disabledPositions[]= {};
            defaultComponents[]= {};
            mountedRadio="ACRE_PRC117F";
            isRadioRemovable=0;
            intercom[]={"intercom_1"};
        };
        class Rack_2
        {
            displayName="Bowman Radio 2";
            shortName="Radio 2";
            componentname="ACRE_VRC103";
            allowedPositions[]={"commander"};
            disabledPositions[]={{"turnedout","all"}};
            defaultComponents[]={};
            mountedRadio="ACRE_PRC117F";
            isRadioRemovable=0;
            intercom[]={"intercom_1"};
        };
    };

    ace_vehicle_damage_hullDetonationProb=0;
    ace_vehicle_damage_turretDetonationProb=0;
    ace_vehicle_damage_engineDetonationProb=0;
    ace_vehicle_damage_hullFireProb=0;
    ace_vehicle_damage_turretFireProb=0;
    ace_vehicle_damage_engineFireProb=0.5;
    ace_vehicle_damage_detonationDuringFireProb=0;
    ace_vehicle_damage_canHaveFireRing=0;
    damageResistance=0.0054700002;
    crewVulnerable=0;
    armor=1600;
    armorStructural=31;
    crewCrashProtection=0.05000001;
    crewExplosionProtection=0.99949998;
    incomingMissileDetectionSystem=8;
    smokeLauncherGrenadeCount=5;
    smokeLauncherVelocity=10;
    smokeLauncherOnTurret=1;
    smokeLauncherAngle=110;
    ace_hunterkiller[]={{{0},1},{{0,0},3}};
    magazines[]={};
    weapons[]={};

    class ViewOptics : ViewOptics
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
                    memoryPointGunnerOutOptics="commanderview";
                    memoryPointGunnerOptics="commanderview";
                    gunBeg="Usti hlavne2";
                    gunEnd="Konec hlavne2";
                    memoryPointGun="usti hlavne2";
                    selectionFireAnim="zasleh2";
                    turretFollowFreeLook=2;
                    LODTurnedIn=1200;
                    LODTurnedOut=1202;
                    LODOpticsIn=1000;
                    LODOpticsOut=1202;
                    minElev=-10;
                    maxElev=15;
                    initElev=0;
                    minTurn=-135;
                    maxTurn=90;
                    initTurn=0;
                    weapons[]=
                    {
						"Laserdesignator_mounted",
						"qav_SmokeLauncher"
					};
                    magazines[]=
                    {
						"Laserbatteries",
						"qav_SmokeLauncherMag",
						"qav_SmokeLauncherMag"
					};
                    soundServo[]=
                    {
                        "A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
                        0.56234133,
                        1,
                        30
                    };
                    soundServoVertical[]=
                    {
                        "A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
                        0.56234133,
                        1,
                        30
                    };
                    outGunnerMayFire=0;
                    inGunnerMayFire=1;
                    gunnerAction="Commander_MBT_03_cannon_F_out";
                    gunnerInAction="Commander_MBT_03_cannon_F_in";
                    gunnerGetInAction="GetInLow";
                    gunnerGetOutAction="GetOutLow";
                    discreteDistance[]={200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
                    discreteDistanceInitIndex=4;
                    gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
                    gunnerOutOpticsModel="";
                    gunnerOpticsEffect[]={};
                    gunnerForceOptics=0;
                    usePip=2;
                    isPersonTurret=1;
                    personTurretAction="vehicle_turnout_1";
                    animationSourceStickX="com_turret_control_x";
                    animationSourceStickY="com_turret_control_y";
                    gunnerRightHandAnimName="com_turret_control";
                    class dynamicViewLimits
                    {
                        MainTurret[]={-135,75};
                    };
                    minOutElev=-15;
                    maxOutElev=45;
                    initOutElev=0;
                    minOutTurn=-135;
                    maxOutTurn=135;
                    initOutTurn=0;
                    class ViewGunner: ViewGunner
                    {
                        initAngleX=-5;
                        initAngleY=0;
                        initFov=0.89999998;
                        minFov=0.25;
                        maxFov=1.25;
                        minAngleX=-65;
                        maxAngleX=85;
                        minAngleY=-150;
                        maxAngleY=150;
                        minMoveX=-0.075000003;
                        maxMoveX=0.075000003;
                        minMoveY=-0.075000003;
                        maxMoveY=0.075000003;
                        minMoveZ=-0.075000003;
                        maxMoveZ=0.1;
                    };
                    class ViewOptics: ViewOptics
                    {
                        initAngleX=0;
                        minAngleX=-30;
                        maxAngleX=30;
                        initAngleY=0;
                        minAngleY=-100;
                        maxAngleY=100;
                        initFov=0.0555555556;
                        minFov=0.0555555556;
                        maxFov=0.0217391304;
                        visionMode[]=
                        {
                            "Normal",
                            "TI"
                        };
                        thermalMode[]={0,1};
                    };
                    class OpticsIn: Optics_Gunner_APC_01
                    {
                        class UltraWide: ViewOptics
                        {
                            gunnerOpticsModel="\QAV_Challenger\c2_com_op_w.p3d";
                            initAngleX=0;
                            minAngleX=-30;
                            maxAngleX=30;
                            initAngleY=0;
                            minAngleY=-100;
                            maxAngleY=100;
                            initFov=0.0555555556;
                            minFov=0.0555555556;
                            maxFov=0.0555555556;
                            visionMode[]=
                            {
                                "Normal",
                                "Ti"
                            };
                            thermalMode[]={2,3};
                            gunnerOpticsEffect[]={};
                        };
                        class Wide: ViewOptics
                        {
                            gunnerOpticsModel="\QAV_Challenger\c2_com_op_n.p3d";
                            initAngleX=0;
                            minAngleX=-30;
                            maxAngleX=30;
                            initAngleY=0;
                            minAngleY=-100;
                            maxAngleY=100;
                            initFov=0.0217391304;
                            minFov=0.0217391304;
                            maxFov=0.0217391304;
                            visionMode[]=
                            {
                                "Normal",
                                "Ti"
                            };
                            thermalMode[]={2,3};
                            gunnerOpticsEffect[]={};
                        };
                    };
                    viewGunnerShadowAmb=0.5;
                    viewGunnerShadowDiff=0.050000001;
                    turretInfoType="RscOptics_APC_Wheeled_01_gunner";
                    showCrewAim=1;
                    startEngine=0;
                    gunnerHasFlares=1;
                    stabilizedInAxes=3;
                    maxHorizontalRotSpeed=1;
                    maxVerticalRotSpeed=1;
                    viewGunnerInExternal=0;
                    viewGunnerInInternal=0;
                    class HitPoints
                    {
                        class HitComTurret
                        {
                            armor=0.1;
                            material=-1;
                            armorComponent="hit_com_turret";
                            name="hit_com_turret_point";
                            visual="commanderturret";
                            passThrough=0;
                            minimalHit=0.1;
                            explosionShielding=1;
                            radius=0.15000001;
                            isTurret=1;
                        };
                        class HitComGun
                        {
                            armor=0.1;
                            material=-1;
                            armorComponent="hit_com_gun";
                            name="hit_com_gun_point";
                            visual="commandergun";
                            passThrough=0;
                            minimalHit=0.1;
                            explosionShielding=1;
                            radius=0.15000001;
                            isGun=1;
                        };
                    };
                };
            };
            gunBeg="Usti hlavne";
            gunEnd="Konec hlavne";
            gunnerInAction="Gunner_MBT_03_cannon_F_in";
            gunnerAction="Gunner_MBT_03_cannon_F_out";
            gunnerGetInAction="GetInLow";
            gunnerGetOutAction="GetOutLow";
            weapons[]=
            {
				"20ABCT_safe",
                "20ABCT_L30A1",
                "20ABCT_762_L94A1_CR2"
            };
            magazines[]=
            {
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red",
				"20ABCT_400Rnd_762x51_Red"
            };
            soundServo[]=
            {
                "A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
                0.15848932,
                1,
                50
            };
            soundServoVertical[]=
            {
                "A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
                0.15848932,
                1,
                50
            };
            forceHideGunner=1;
            usePip=2;
            animationSourceStickX="turret_control_x";
            animationSourceStickY="turret_control_y";
            gunnerRightHandAnimName="turret_control";
            viewGunnerShadowAmb=0.5;
            viewGunnerShadowDiff=0.050000001;
            discreteDistance[]={200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000};
            discreteDistanceInitIndex=4;
            memoryPointGunnerOptics="gunnerview";
            memoryPointGun="usti hlavne3";
            maxHorizontalRotSpeed=0.888888889;
            maxVerticalRotSpeed=0.40000001;
            minElev=-10;
            maxElev=20;
            initElev=10;
            gunnerOutOpticsModel="";
            gunnerOutOpticsEffect[]={};
            gunnerOpticsEffect[]={};
            gunnerForceOptics=1;
            startEngine=1;
            inGunnerMayFire=1;
            viewGunnerInExternal=0;
            isPersonTurret=0;
            personTurretAction="vehicle_turnout_1";
            class dynamicViewLimits
            {
                CommanderOptics[]={-65,90};
            };
            minOutElev=-10;
            maxOutElev=15;
            initOutElev=0;
            minOutTurn=-135;
            maxOutTurn=90;
            initOutTurn=0;
            LODTurnedIn=1000;
            LODTurnedOut=1000;
            LODOpticsIn=1000;
            LODOpticsOut=1000;
            class OpticsIn: Optics_Gunner_APC_01
            {
                class UltraWide: ViewOptics
                {
                    gunnerOpticsModel="\QAV_Challenger\c2_gun_op_w.p3d";
                    initAngleX=0;
                    minAngleX=-30;
                    maxAngleX=30;
                    initAngleY=0;
                    minAngleY=-100;
                    maxAngleY=100;
                    initFov=0.0555555556;
                    minFov=0.0555555556;
                    maxFov=0.0555555556;
                    visionMode[]=
                    {
                        "Normal",
                        "Ti"
                    };
                    thermalMode[]={2,3};
                    gunnerOpticsEffect[]={};
                };
                class Wide: ViewOptics
                {
                    gunnerOpticsModel="\QAV_Challenger\c2_gun_op_n.p3d";
                    initAngleX=0;
                    minAngleX=-30;
                    maxAngleX=30;
                    initAngleY=0;
                    minAngleY=-100;
                    maxAngleY=100;
                    initFov=0.0217391304;
                    minFov=0.0217391304;
                    maxFov=0.0217391304;
                    visionMode[]=
                    {
                        "Normal",
                        "Ti"
                    };
                    thermalMode[]={2,3};
                    gunnerOpticsEffect[]={};
                };
            };
            class ViewGunner: ViewGunner
            {
                initAngleX=-13;
                initAngleY=0;
                initFov=0.89999998;
                minFov=0.25;
                maxFov=1.25;
                minAngleX=-65;
                maxAngleX=85;
                minAngleY=-150;
                maxAngleY=150;
                minMoveX=-0.075000003;
                maxMoveX=0.075000003;
                minMoveY=-0.075000003;
                maxMoveY=0.075000003;
                minMoveZ=-0.075000003;
                maxMoveZ=0.1;
            };
            turretInfoType="RscOptics_APC_Wheeled_01_gunner";
            showCrewAim=2;
            class TurnOut
            {
                limitsArrayTop[]=
                {
                    {20.1126,-107.5349},
                    {19.8932,99.317703}
                };
                limitsArrayBottom[]=
                {
                    {-9.1273003,-108.1836},
                    {-7.1046,-44.255001},
                    {-9.1674995,31.497801},
                    {-9.0504999,102.8447}
                };
            };
            class TurnIn: TurnOut
            {
                limitsArrayTop[]=
                {
                    {19.9995,-180},
                    {19.998501,180}
                };
                limitsArrayBottom[]=
                {
                    {-2,-180},
                    {-1,-154.4525},
                    {-5.8804998,-82.711601},
                    {-8.9499998,20.756201},
                    {-7.9499998,-20.756201},
                    {-5.8804998,82.711601},
                    {-1,153.1266},
                    {-2,180}
                };
            };
            class HitPoints
            {
                class HitTurret
                {
                    armor=0.80000001;
                    material=-1;
                    armorComponent="hit_main_turret";
                    name="hit_main_turret_point";
                    visual="mainturret";
                    passThrough=0;
                    minimalHit=0.1;
                    explosionShielding=0.2;
                    radius=0.25;
                    isTurret=1;
                };
                class HitGun
                {
                    armor=0.60000002;
                    material=-1;
                    armorComponent="hit_main_gun";
                    name="hit_main_gun_point";
                    visual="maingun";
                    passThrough=0;
                    minimalHit=0.1;
                    explosionShielding=0.40000001;
                    radius=0.2;
                    isGun=1;
                };
            };
        };
        class LoaderTurret: NewTurret
        {
            class Turrets: Turrets
            {
            };
            body="loaderturret";
            gun="loadergun";
            animationSourceBody="LoaderTurret";
            animationSourceGun="LoaderGun";
            gunBeg="usti hlavne4";
            gunEnd="konec hlavne4";
            gunnerName="Loader";
            proxyType="CPGunner";
            animationSourceHatch="loaderhatch";
            proxyIndex=2;
            turretFollowFreeLook=0;
            weapons[]=
            {
                "qav_challenger_gpmg"
            };
            magazines[]=
            {
                "200Rnd_762x51_Belt_Red",
				"200Rnd_762x51_Belt_Red",
				"200Rnd_762x51_Belt_Red",
				"200Rnd_762x51_Belt_Red",
				"200Rnd_762x51_Belt_Red",
				"200Rnd_762x51_Belt_Red"
            };
            soundServo[]=
            {
                "A3\sounds_f\dummysound",
                0.0099999998,
                1,
                10
            };
            minElev=-30;
            initElev=-5;
            maxElev=30;
            maxVerticalRotSpeed=0.80000001;
            maxHorizontalRotSpeed=1;
            gunnerRightHandAnimName="handle_l";
            gunnerLeftHandAnimName="handle_r";
            gunnerAction="frontGunner_lsv_01";
            lockWhenDriverOut=0;
            isPersonTurret=0;
            gunnerInAction="passenger_generic01_foldhands";
            gunnerGetInAction="GetInMRAP_01Rfl";
            gunnerGetOutAction="GetOuthigh";
            viewGunnerInExternal=0;
            viewGunnerInInternal=0;
            castGunnerShadow=1;
            forceHideGunner=0;
            gunnerinForceOptics=1;
            inGunnerMayFire=0;
            outGunnerMayFire=1;
            discreteDistance[]={200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
            discreteDistanceInitIndex=0;
            turretInfoType="RscWeaponZeroing";
            memoryPointGunnerOptics="loaderview";
            gunnerOpticsModel="\QAV_Challenger\optics_driver";
            memoryPointGunnerOutOptics="eye";
            gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
            gunnerCompartments="Compartment1";
            selectionFireAnim="zasleh";
            stabilizedInAxes=0;
            primaryGunner=0;
            primaryObserver=0;
            usePip=0;
            LODTurnedIn=1000;
            LODTurnedOut=1202;
            LODOpticsIn=1000;
            LODOpticsOut=1202;
            startEngine=0;
            disableSoundAttenuation=0;
            class ViewOptics
            {
                initAngleX=0;
                minAngleX=-30;
                maxAngleX=30;
                initAngleY=0;
                minAngleY=-100;
                maxAngleY=100;
                initFov=0.80000001;
                minFov=0.5;
                maxFov=0.80000001;
            };
            class HitPoints
            {
                class HitTurret
                {
                    armor=0.60000002;
                    material=-1;
                    name="vez";
                    visual="vez";
                    passThrough=1;
                    minimalHit=0.2;
                    explosionShielding=1;
                    radius=0.2;
                };
                class HitGun
                {
                    armor=0.60000002;
                    material=-1;
                    name="zbran";
                    visual="";
                    passThrough=0;
                    minimalHit=0.2;
                    explosionShielding=1;
                    radius=0.2;
                };
            };
        };
    };
    class ACE_SelfActions
    {
        class L30Status
        {
            displayName="L30A1 Status";
            condition="player == (vehicle player) turretUnit [1]";
            exceptions[]=
            {
                "isNotInside",
                "isNotSitting"
            };
            statement="call {private _veh = vehicle player; private _tMags = _veh magazinesTurret [0]; private _120mags = ['20ABCT_1Rnd_120mm_APFSDS','20ABCT_1Rnd_120mm_HESHT','20ABCT_1Rnd_120mm_Smoke']; private _loadedCount = {_x in _120mags} count _tMags; private _cItems = itemCargo _veh; private _availAPFSDS = {_x == '20ABCT_Item_120mm_APFSDS'} count _cItems; private _availHESHT = {_x == '20ABCT_Item_120mm_HESHT'} count _cItems; private _availSmoke = {_x == '20ABCT_Item_120mm_Smoke'} count _cItems; private _lines = []; {_x params ['_m','_t','_a']; if (_m == '20ABCT_1Rnd_120mm_APFSDS') then {_lines pushBack '  APFSDS loaded'}; if (_m == '20ABCT_1Rnd_120mm_HESHT') then {_lines pushBack '  HESH-T loaded'}; if (_m == '20ABCT_1Rnd_120mm_Smoke') then {_lines pushBack '  Smoke loaded'}} forEach magazinesAllTurrets _veh; hint parseText format ['<t size=''1.1'' font=''PuristaBold''>L30A1 120mm</t><br/><br/><t font=''PuristaMedium''>BREECH (%1/1):</t><br/>%2<br/><br/><t font=''PuristaMedium''>AVAILABLE:</t><br/>  APFSDS: %3<br/>  HESH-T: %4<br/>  Smoke: %5', _loadedCount, if (count _lines == 0) then {'  Empty'} else {_lines joinString '<br/>'}, _availAPFSDS, _availHESHT, _availSmoke]; [{hintSilent ''}, [], 8] call CBA_fnc_waitAndExecute}";
            showDisabled=0;
            priority=10;
        };
        class LoadL30
        {
            displayName="Load L30A1";
            condition="player == (vehicle player) turretUnit [1] && ({_x in ['20ABCT_1Rnd_120mm_APFSDS','20ABCT_1Rnd_120mm_HESHT','20ABCT_1Rnd_120mm_Smoke']} count ((vehicle player) magazinesTurret [0])) < 1";
            exceptions[]=
            {
                "isNotInside",
                "isNotSitting"
            };
            class LoadAPFSDS
            {
                displayName="Load APFSDS";
                condition="'20ABCT_Item_120mm_APFSDS' in (items player) || '20ABCT_Item_120mm_APFSDS' in (itemCargo (vehicle player))";
                statement="if ('20ABCT_Item_120mm_APFSDS' in items player) then {player removeItem '20ABCT_Item_120mm_APFSDS'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_120mm_APFSDS',-1]}; (vehicle player) addMagazineTurret ['20ABCT_1Rnd_120mm_APFSDS',[0]]; (vehicle player) loadMagazine [[0],'20ABCT_L30A1','20ABCT_1Rnd_120mm_APFSDS']";
                exceptions[]={};
                priority=3;
            };
            class LoadHESHT
            {
                displayName="Load HESH-T";
                condition="'20ABCT_Item_120mm_HESHT' in (items player) || '20ABCT_Item_120mm_HESHT' in (itemCargo (vehicle player))";
                statement="if ('20ABCT_Item_120mm_HESHT' in items player) then {player removeItem '20ABCT_Item_120mm_HESHT'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_120mm_HESHT',-1]}; (vehicle player) addMagazineTurret ['20ABCT_1Rnd_120mm_HESHT',[0]]; (vehicle player) loadMagazine [[0],'20ABCT_L30A1','20ABCT_1Rnd_120mm_HESHT']";
                exceptions[]={};
                priority=2;
            };
            class LoadSmoke
            {
                displayName="Load Smoke";
                condition="'20ABCT_Item_120mm_Smoke' in (items player) || '20ABCT_Item_120mm_Smoke' in (itemCargo (vehicle player))";
                statement="if ('20ABCT_Item_120mm_Smoke' in items player) then {player removeItem '20ABCT_Item_120mm_Smoke'} else {(vehicle player) addItemCargoGlobal ['20ABCT_Item_120mm_Smoke',-1]}; (vehicle player) addMagazineTurret ['20ABCT_1Rnd_120mm_Smoke',[0]]; (vehicle player) loadMagazine [[0],'20ABCT_L30A1','20ABCT_1Rnd_120mm_Smoke']";
                exceptions[]={};
                priority=1;
            };
        };
        class UnloadL30
        {
            displayName="Unload L30A1";
            condition="player == (vehicle player) turretUnit [1] && ({_x in ['20ABCT_1Rnd_120mm_APFSDS','20ABCT_1Rnd_120mm_HESHT','20ABCT_1Rnd_120mm_Smoke']} count ((vehicle player) magazinesTurret [0])) > 0";
            exceptions[]=
            {
                "isNotInside",
                "isNotSitting"
            };
            class UnloadAPFSDS
            {
                displayName="Unload APFSDS";
                condition="'20ABCT_1Rnd_120mm_APFSDS' in ((vehicle player) magazinesTurret [0])";
                statement="(vehicle player) removeMagazineTurret ['20ABCT_1Rnd_120mm_APFSDS',[0]]; (vehicle player) addItemCargoGlobal ['20ABCT_Item_120mm_APFSDS',1]";
                exceptions[]={};
                priority=3;
            };
            class UnloadHESHT
            {
                displayName="Unload HESH-T";
                condition="'20ABCT_1Rnd_120mm_HESHT' in ((vehicle player) magazinesTurret [0])";
                statement="(vehicle player) removeMagazineTurret ['20ABCT_1Rnd_120mm_HESHT',[0]]; (vehicle player) addItemCargoGlobal ['20ABCT_Item_120mm_HESHT',1]";
                exceptions[]={};
                priority=2;
            };
            class UnloadSmoke
            {
                displayName="Unload Smoke";
                condition="'20ABCT_1Rnd_120mm_Smoke' in ((vehicle player) magazinesTurret [0])";
                statement="(vehicle player) removeMagazineTurret ['20ABCT_1Rnd_120mm_Smoke',[0]]; (vehicle player) addItemCargoGlobal ['20ABCT_Item_120mm_Smoke',1]";
                exceptions[]={};
                priority=1;
            };
        };
    };
};