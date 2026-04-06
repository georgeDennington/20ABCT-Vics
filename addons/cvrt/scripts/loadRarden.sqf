params ["_magClass", "_title"];

private _veh = vehicle player;

[
    3,
    [_veh, _magClass],
    {
        (_this select 0) params ["_veh", "_magClass"];
        _veh addMagazineCargoGlobal [_magClass, -1];
        _veh addMagazineTurret [_magClass, [0]];
        _veh loadMagazine [[0], "20ABCT_30mm_L21A2", _magClass];
    },
    {
        hint "Loading cancelled";
    },
    _title,
    {true},
    ["isNotInside", "isNotSitting"]
] call ace_common_fnc_progressBar;
