class CfgAmmo {
    class PipeBombBase;
    class GVAR(Bangalore_Ammo): PipeBombBase {
        model = QPATHTOF(data\Bangalore.p3d);
        mineModelDisabled = QPATHTOF(data\Bangalore.p3d);

        hit = 1000;
        indirectHit = 500;
        indirectHitRange = 5;
        defaultMagazine = QGVAR(Bangalore_Mag);

        ACEGVAR(explosives,magazine) = QGVAR(Bangalore_Mag);
        ACEGVAR(explosives,Explosive) = QGVAR(Bangalore_Ammo);
    };
};
