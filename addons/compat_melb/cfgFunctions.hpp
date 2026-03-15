class CfgFunctions
{
    class IBC_MELB
    {recompile=1;
        tag = "IBC_MELB";
        class functions
        {recompile=1;
            class MFD_toggle
            {
                file = QPATHOF(scripts\MELB_MFD_toggle.sqf);
                description = "MELB MFD Toggle";
            };
            class Handler
            {
                file = QPATHOF(scripts\MELB_Handler.sqf);
                description = "MELB Handler";
            };
            class FLIRHandler
            {
                file = QPATHOF(scripts\MELB_FLIRHandler.sqf);
                description = "MELB FLIR Handler";
            };
            class tailNumber
            {
                file = QPATHOF(scripts\MELB_tailNumber.sqf);
                description = "Tail number handler for MELB";
            };
        };
    };
};
