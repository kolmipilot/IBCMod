#include "script_component.hpp"

// Exit on Server and Headless Client
if (!hasInterface) exitWith {};

[QGVAR(Bangalore_Place), "Explosion", { // will fire only where explosion is local
    params ["_bomb"];
    private _array=nearestObjects [_bomb, [], 5];
    {
        if (_x isKindOf "Wall_F") then {
            _x setDamage [1, true, _bomb];
            deleteVehicle _x;
        };
    } forEach _array;
}] call CBA_fnc_addClassEventHandler;

