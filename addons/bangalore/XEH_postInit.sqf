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
    private _array = nearestObjects [_bomb, [], 10];
    {   
        systemChat format["handling z post init z event ahdnelrem %1, %2",  _x, _bomb];
        if (_x isKindOf "Wall_F") then {
            _x setDamage [1, true, _bomb];
            deleteVehicle _x;
        };
    } forEach _array;
    private _array2 = nearestTerrainObjects [_bomb, ["FENCE", "WALL"], 10];
    {
        systemChat format["handling z post init z event ahdnelrem terrain %1, %2",  _x, _bomb];
            _x setDamage [1, true, _bomb];
            deleteVehicle _x;
    } forEach _array2;
    true;
}] call ace_explosives_fnc_addDetonateHandler;

