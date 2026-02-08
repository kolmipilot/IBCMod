#include "script_component.hpp"

// Exit on Server and Headless Client
if (!hasInterface) exitWith {};
/*
[QGVAR(Bangalore_Ammo), "Explode", { 
    params ["_bomb"];
    private _array=nearestObjects [_bomb, [], 5];
    {
        if (_x isKindOf "Wall_F") then {
            _x setDamage [1, true, _bomb];
            deleteVehicle _x;
        };
    } forEach _array;
}] call CBA_fnc_addClassEventHandler;
*/

[{ 
    params ["_unit", "_range", "_bomb", "_fuzeTime", "_triggerItem"];
    if(typeOf _bomb == QGVAR(Bangalore_Ammo)) then {
    private _array = nearestObjects [_bomb, [], 6];
    {   
        if (_x isKindOf "Wall_F") then {
            _x setDamage [1, true, _bomb];
            deleteVehicle _x;
        };
    } forEach _array;
    private _array2 = nearestTerrainObjects [_bomb, ["FENCE", "WALL"], 6];
    {
            _x setDamage [1, true, _bomb];
            deleteVehicle _x;
    } forEach _array2;
    true;
    } else {
    true;
    }
}] call ace_explosives_fnc_addDetonateHandler;
