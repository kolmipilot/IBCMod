class CfgWeapons {
    class Default;
    class Put: Default {
        muzzles[] += {QGVAR(Bangalore_Muzzle)};

        class PutMuzzle: Default {};
        class GVAR(Bangalore_Muzzle): PutMuzzle {
            magazines[] = {QGVAR(Bangalore_Mag)};
            displayName = "Bangalore Torpedo";
        };
    };
};
