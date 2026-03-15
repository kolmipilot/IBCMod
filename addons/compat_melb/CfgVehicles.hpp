class CfgVehicles
{
    class Air;
    class Helicopter: Air
    {
        class ViewPilot;
    };
    class Helicopter_Base_F: Helicopter
    {
        class Turrets;
        class HitPoints;
    };
    class Helicopter_Base_H: Helicopter_Base_F
    {
        class Turrets: Turrets {};
        class HitPoints: HitPoints{};
    };

    class MELB_base: Helicopter_Base_H {
        driverCanSee=1+2+4+8;
        memoryPointDriverOptics="commanderview";
        driverWeaponsInfoType="Rsc_MELB_Turret_UnitInfo";
        magazines[]+=
        {
            "Laserbatteries"
        };
        weapons[]+=
        {
            "Laserdesignator_MELB"
        };
        class PilotCamera {
            class OpticsIn
                {
                    class Wide
                    {
                        opticsDisplayName="----";
                        initAngleX=0;
                        minAngleX=0;
                        maxAngleX=0;
                        initAngleY=0;
                        minAngleY=0;
                        maxAngleY=0;
                        initFov=0.30000001;
                        minFov=0.30000001;
                        maxFov=0.30000001;
                        visionMode[]=
                        {
                            "Normal",
                            "NVG",
                            "Ti"
                        };
                        thermalMode[]={0};
                        gunnerOpticsModel="melb\data\optics\melb_flir_wf.p3d";
                        opticsPPEffects[]=
                        {
                            "OpticsCHAbera2",
                            "OpticsBlur2"
                        };
                        gunnerOpticsEffect[]=
                        {
                            "TankCommanderOptics2"
                        };
                    };
                    class WideT2: Wide
                    {
                        initFov=0.2;
                        minFov=0.2;
                        maxFov=0.2;
                        gunnerOpticsModel="melb\data\optics\melb_flir_w2.p3d";
                    };
                    class MediumT: Wide
                    {
                        initFov=0.1;
                        minFov=0.1;
                        maxFov=0.1;
                        gunnerOpticsModel="melb\data\optics\melb_flir_m.p3d";
                    };
                    class NarrowT: Wide
                    {
                        initFov=0.022;
                        minFov=0.022;
                        maxFov=0.022;
                        gunnerOpticsModel="melb\data\optics\melb_flir_n.p3d";
                    };
                    class NarrowT2: Wide
                    {
                        initFov=0.0092000002;
                        minFov=0.0092000002;
                        maxFov=0.0092000002;
                        gunnerOpticsModel="melb\data\optics\melb_flir_n2.p3d";
                    };
                };
            minTurn = -360;
            maxTurn = 360;
            initTurn = 0;
            minElev = -90;
            maxElev = 60;
            initElev = 0;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
                  
        };
        class ViewPilot: ViewPilot
        {
            maxFov=1.25;
        };
    };
    class MELB_AH6M: MELB_base{
        magazines[]+=
        {
            "Laserbatteries"
        };
        weapons[]+=
        {
            "Laserdesignator_MELB"
        };
    };
};
