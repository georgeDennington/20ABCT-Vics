private _veh = vehicle player;
private _tMags = _veh magazinesTurret [0];
private _loadedAPDS = { _x == "20ABCT_APDS_mag" } count _tMags;
private _loadedHEIT = { _x == "20ABCT_HEIT_mag" } count _tMags;
private _cMags = magazineCargo _veh;
private _availAPDS = { _x == "20ABCT_APDS_mag" } count _cMags;
private _availHEIT = { _x == "20ABCT_HEIT_mag" } count _cMags;

private _lines = [];
{
    _x params ["_m", "_t", "_a"];
    if (_m == "20ABCT_APDS_mag") then {
        _lines pushBack format ["  SABOT: %1/3 rds", _a];
    };
    if (_m == "20ABCT_HEIT_mag") then {
        _lines pushBack format ["  SHELL: %1/3 rds", _a];
    };
} forEach magazinesAllTurrets _veh;

hint parseText format [
    "<t size='1.1' font='PuristaBold'>RARDEN L21A2</t><br/><br/><t font='PuristaMedium'>LOADED (%1/2):</t><br/>%2<br/><br/><t font='PuristaMedium'>AVAILABLE:</t><br/>  SABOT clips: %3<br/>  SHELL clips: %4",
    _loadedAPDS + _loadedHEIT,
    if (count _lines == 0) then { "  Empty" } else { _lines joinString "<br/>" },
    _availAPDS,
    _availHEIT
];

[{ hintSilent "" }, [], 8] call CBA_fnc_waitAndExecute;
