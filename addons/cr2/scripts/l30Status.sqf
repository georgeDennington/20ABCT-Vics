private _veh = vehicle player;
private _tMags = _veh magazinesTurret [0];
private _120mags = ["20ABCT_1Rnd_120mm_APFSDS", "20ABCT_1Rnd_120mm_HESHT", "20ABCT_1Rnd_120mm_Smoke"];
private _loadedCount = { _x in _120mags } count _tMags;
private _cItems = itemCargo _veh;
private _availAPFSDS = { _x == "20ABCT_Item_120mm_APFSDS" } count _cItems;
private _availHESHT = { _x == "20ABCT_Item_120mm_HESHT" } count _cItems;
private _availSmoke = { _x == "20ABCT_Item_120mm_Smoke" } count _cItems;

private _lines = [];
{
    _x params ["_m", "_t", "_a"];
    if (_m == "20ABCT_1Rnd_120mm_APFSDS") then {
        _lines pushBack "  APFSDS loaded";
    };
    if (_m == "20ABCT_1Rnd_120mm_HESHT") then {
        _lines pushBack "  HESH-T loaded";
    };
    if (_m == "20ABCT_1Rnd_120mm_Smoke") then {
        _lines pushBack "  Smoke loaded";
    };
} forEach magazinesAllTurrets _veh;

hint parseText format [
    "<t size='1.1' font='PuristaBold'>L30A1 120mm</t><br/><br/><t font='PuristaMedium'>BREECH (%1/1):</t><br/>%2<br/><br/><t font='PuristaMedium'>AVAILABLE:</t><br/>  APFSDS: %3<br/>  HESH-T: %4<br/>  Smoke: %5",
    _loadedCount,
    if (count _lines == 0) then { "  Empty" } else { _lines joinString "<br/>" },
    _availAPFSDS,
    _availHESHT,
    _availSmoke
];

[{ hintSilent "" }, [], 8] call CBA_fnc_waitAndExecute;
