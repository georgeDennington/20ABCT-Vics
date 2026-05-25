// firedCoax.sqf
// Called from Fired EH on AFV
// Removes empty COAX magazines from turret after firing
// Params: standard Fired EH params [vehicle, weapon, muzzle, mode, ammo, magazine, projectile, gunner]

params ["_veh", "", "", "", "", "_mag"];

if !(_mag in ["20ABCT_400Rnd_762x51_Red", "20ABCT_600Rnd_762x51_Red"]) exitWith {};

// Delay 0.5s to let engine finish processing the shot and decrement ammo
[{
	params ["_veh"];
	{
		_x params ["_m", "_t", "_a"];
		if (_a <= 0 && {_m in ["20ABCT_400Rnd_762x51_Red", "20ABCT_600Rnd_762x51_Red"]}) then {
			_veh removeMagazineTurret [_m, _t];
		};
	} forEach (magazinesAllTurrets _veh);
}, [_veh], 0.5] call CBA_fnc_waitAndExecute;
