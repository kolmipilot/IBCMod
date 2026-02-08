params ["_bomb"];
    private _array=nearestObjects [_bomb, [], 5];
    {
        if (_x isKindOf "Wall_F") then {
            systemChat format["handling z cfg ammo %1, %2",  _x, _bomb];
            _x setDamage [1, true, _bomb];
            deleteVehicle _x;
        };
    } forEach _array;
