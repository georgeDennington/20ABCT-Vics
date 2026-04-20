params ["_itemClass", "_magClass", "_title"];

private _veh = vehicle player;

[
    4.5,
    [_veh, _itemClass, _magClass],
    {
        (_this select 0) params ["_veh", "_itemClass", "_magClass"];
        if (_itemClass in items player) then {
            player removeItem _itemClass;
        } else {
            _veh addItemCargoGlobal [_itemClass, -1];
        };
        _veh addMagazineTurret [_magClass, [0]];
        _veh loadMagazine [[0], "20ABCT_L30A1", _magClass];
    },
    {
        hint "Loading cancelled";
    },
    _title,
    {true},
    ["isNotInside", "isNotSitting"]
] call ace_common_fnc_progressBar;
