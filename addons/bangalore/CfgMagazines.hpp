class CfgMagazines {
    class SatchelCharge_Remote_Mag;
    class GVAR(Bangalore_Mag): SatchelCharge_Remote_Mag {
        scopeArsenal = 2;
        author = "kolmipilot";
        displayName = "Bangalore Torpedo";
        descriptionShort = "Explosive designed to destroy field fortifications.";
        mass = 5;
        picture = QPATHTOF(data\bangalore_ico.paa);
        ammo = QGVAR(Bangalore_Ammo);
        ACEGVAR(explosives,SetupObject) = QGVAR(Bangalore_Place);
        model = QPATHTOF(data\Bangalore.p3d);
        class ACE_Triggers {
            SupportedTriggers[] = {"Command", "MK16_Transmitter", "Timer"};
        };
    };
};
