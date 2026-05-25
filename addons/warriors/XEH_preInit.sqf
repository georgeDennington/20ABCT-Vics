// XEH_preInit.sqf - WR addon initialization
// Registers Fired EH on all WR variants to clean up empty RARDEN magazines

private _firedHandler = {
	params ["_veh", "", "", "", "", "_mag"];
	if !(_mag in ["20ABCT_APDS_mag", "20ABCT_HEIT_mag", "20ABCT_400Rnd_762x51_Red", "20ABCT_600Rnd_762x51_Red"]) exitWith {};
	[{
		params ["_veh"];
		{
			_x params ["_m", "_t", "_a"];
			if (_a <= 0 && {_m in ["20ABCT_APDS_mag", "20ABCT_HEIT_mag", "20ABCT_400Rnd_762x51_Red", "20ABCT_600Rnd_762x51_Red"]}) then {
				_veh removeMagazineTurret [_m, _t];
			};
		} forEach (magazinesAllTurrets _veh);
	}, [_veh], 0.5] call CBA_fnc_waitAndExecute;
};

["20ABCT_fv510_warrior_w", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
["20ABCT_fv510_warrior_dep", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
["20ABCT_fv510_warrior_relic", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
["20ABCT_fv514_maov", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
