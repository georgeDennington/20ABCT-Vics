params ["_magClass", "_itemClass", "_title"];

private _veh = vehicle player;

[
    8,
    [_veh, _magClass, _itemClass],
    {
        (_this select 0) params ["_veh", "_magClass", "_itemClass"];
        _veh removeMagazineTurret [_magClass, [0]];
        _veh addItemCargoGlobal [_itemClass, 0];
    },
    {
        hint "Unloading cancelled";
    },
    _title,
    {true},
    ["isNotInside", "isNotSitting"]
] call ace_common_fnc_progressBar;
