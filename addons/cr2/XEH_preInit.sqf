// XEH_preInit.sqf - CR2 addon initialization
// Registers Fired EH on Challenger 2 to clean up empty 120mm magazines

private _120mmMags = ["20ABCT_1Rnd_120mm_APFSDS", "20ABCT_1Rnd_120mm_HESHT", "20ABCT_1Rnd_120mm_Smoke"];

private _firedHandler = {
	params ["_veh", "", "", "", "", "_mag"];
	if !(_mag in ["20ABCT_1Rnd_120mm_APFSDS", "20ABCT_1Rnd_120mm_HESHT", "20ABCT_1Rnd_120mm_Smoke", "20ABCT_400Rnd_762x51_Red", "20ABCT_600Rnd_762x51_Red"]) exitWith {};
	[{
		params ["_veh"];
		{
			_x params ["_m", "_t", "_a"];
			if (_a <= 0 && {_m in ["20ABCT_1Rnd_120mm_APFSDS", "20ABCT_1Rnd_120mm_HESHT", "20ABCT_1Rnd_120mm_Smoke", "20ABCT_400Rnd_762x51_Red", "20ABCT_600Rnd_762x51_Red"]}) then {
				_veh removeMagazineTurret [_m, _t];
			};
		} forEach (magazinesAllTurrets _veh);
	}, [_veh], 0.5] call CBA_fnc_waitAndExecute;
};

["20ABCT_CR2", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
