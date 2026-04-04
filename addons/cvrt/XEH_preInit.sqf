// XEH_preInit.sqf - CVRT addon initialization
// Registers Fired EH on all CVRT variants to clean up empty RARDEN magazines

private _firedHandler = {
	params ["_veh", "", "", "", "", "_mag"];
	if !(_mag in ["20ABCT_APDS_mag", "20ABCT_HEIT_mag"]) exitWith {};
	[{
		params ["_veh"];
		{
			_x params ["_m", "_t", "_a"];
			if (_a <= 0 && {_m in ["20ABCT_APDS_mag", "20ABCT_HEIT_mag"]}) then {
				_veh removeMagazineTurret [_m, _t];
			};
		} forEach (magazinesAllTurrets _veh);
	}, [_veh], 0.5] call CBA_fnc_waitAndExecute;
};

["20ABCT_CVRT_d", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
["20ABCT_CVRT_w", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
["20ABCT_CVRT_d_dep", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
["20ABCT_CVRT_w_dep", "fired", _firedHandler] call CBA_fnc_addClassEventHandler;
