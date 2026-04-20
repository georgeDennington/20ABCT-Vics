params ["_magClass", "_title"];

private _veh = vehicle player;

[
    8,
    [_veh, _magClass],
    {
        (_this select 0) params ["_veh", "_magClass"];
        private _a = 0;
        {
            _x params ["_m", "_t", "_c"];
            if (_m == _magClass) exitWith { _a = _c };
        } forEach magazinesAllTurrets _veh;
        _veh removeMagazineTurret [_magClass, [0]];
        _veh addMagazineAmmoCargo [_magClass, 1, _a];
    },
    {
        hint "Unloading cancelled";
    },
    _title,
    {true},
    ["isNotInside", "isNotSitting"]
] call ace_common_fnc_progressBar;
