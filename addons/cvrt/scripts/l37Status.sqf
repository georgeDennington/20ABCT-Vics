private _veh = vehicle player;
private _tMags = _veh magazinesTurret [0];
private _coaxmags = ["20ABCT_600Rnd_762x51_Red"];
private _loadedCount = { _x in _coaxmags } count _tMags;
private _cItems = itemCargo _veh;
private _avail600 = { _x == "20ABCT_Item_COAX_600" } count _cItems;

private _lines = [];
{
    _x params ["_m", "_t", "_a"];
    if (_m == "20ABCT_600Rnd_762x51_Red") then {
        _lines pushBack "  600 rd COAX belt loaded";
    };
} forEach magazinesAllTurrets _veh;

hint parseText format [
    "<t size='1.1' font='PuristaBold'>COAX</t><br/><br/><t font='PuristaMedium'>FEED TRAY (%1/1):</t><br/>%2<br/><br/><t font='PuristaMedium'>AVAILABLE:</t><br/>  600 rd belts: %3",
    _loadedCount,
    if (count _lines == 0) then { "  Empty" } else { _lines joinString "<br/>" },
    _avail600
];

[{ hintSilent "" }, [], 8] call CBA_fnc_waitAndExecute;
