// firedRarden.sqf
// Called from Fired EH on CVRT vehicles
// Removes empty RARDEN magazines from turret after firing
// Params: standard Fired EH params [vehicle, weapon, muzzle, mode, ammo, magazine, projectile, gunner]

params ["_veh", "", "", "", "", "_mag"];

if !(_mag in ["20ABCT_APDS_mag", "20ABCT_HEIT_mag"]) exitWith {};

// Delay 0.5s to let engine finish processing the shot and decrement ammo
[{
	params ["_veh"];
	{
		_x params ["_m", "_t", "_a"];
		if (_a <= 0 && {_m in ["20ABCT_APDS_mag", "20ABCT_HEIT_mag"]}) then {
			_veh removeMagazineTurret [_m, _t];
		};
	} forEach (magazinesAllTurrets _veh);
}, [_veh], 0.5] call CBA_fnc_waitAndExecute;
