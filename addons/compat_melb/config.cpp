#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;

        author = "kolmipilot";
        authors[] = {"kolmipilot"};
        requiredVersion = REQUIRED_VERSION;

        VERSION_CONFIG;

        requiredAddons[] = {"ibc_main", "MELB", "A3_Air_F", "A3_Data_F", "A3_Weapons_F"};
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

class RscControlsGroup;
class RscText;
class RangeText: RscText
{
};
class VScrollbar;
class HScrollbar;
class RscInGameUI
{
    class RscUnitInfoArtillery;
    class RscUnitInfo;
    class RscUnitInfo_MELB: RscUnitInfo
    {
    };
    class RscUnitInfoAir_NoRadar_MELB: RscUnitInfoArtillery
    {
        controls[]=
        {
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "CA_Zeroing",
            "CA_Mode"
        };
        onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call IBC_MELB_fnc_handler";
    };
    class Rsc_MELB_UnitInfo: RscUnitInfoAir_NoRadar_MELB
    {
        onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call IBC_MELB_fnc_handler";
    };
    class Rsc_MELB_Turret_UnitInfo: RscUnitInfo
    {
        idd=300;
        onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn IBC_MELB_fnc_FLIRHandler";
        controls[]=
        {
            "MELB_GUI"
        };
        class MELB_GUI: RscControlsGroup
        {
            idc=170;
            class VScrollbar: VScrollbar
            {
                width=0;
            };
            class HScrollbar: HScrollbar
            {
                height=0;
            };
            x="0 *         (0.01875 * SafezoneH) +         (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y="0 *         (0.025 * SafezoneH) +         (SafezoneY)";
            w="53.5 *         (0.01875 * SafezoneH)";
            h="40 *         (0.025 * SafezoneH)";
            class controls
            {
                class TextDistance: RangeText
                {
                    idc=1010;
                    text="RNG";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="41.8 *         (0.01875 * SafezoneH)";
                    y="4.8 *         (0.025 * SafezoneH)";
                    w="3*         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class CA_Distance: RscText
                {
                    idc=151;
                    sizeEx="0.0295*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    font="PuristaMedium";
                    x="46 *         (0.01875 * SafezoneH)";
                    y="4.8 *         (0.025 * SafezoneH)";
                    w="4 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class TextSpeed: RangeText
                {
                    idc=1010;
                    text="SPD";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="2.5 *         (0.01875 * SafezoneH)";
                    y="4.8 *         (0.025 * SafezoneH)";
                    w="8 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class CA_Speed: RangeText
                {
                    idc=188;
                    sizeEx="0.0295*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    font="PuristaMedium";
                    text="120";
                    x="8 *         (0.01875 * SafezoneH)";
                    y="4.8 *         (0.025 * SafezoneH)";
                    w="4 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class TextAlt: RangeText
                {
                    idc=1010;
                    text="ALT";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="2.5 *         (0.01875 * SafezoneH)";
                    y="5.6 *         (0.025 * SafezoneH)";
                    w="8 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class CA_Alt: RangeText
                {
                    idc=189;
                    sizeEx="0.0295*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    font="PuristaMedium";
                    text="3825";
                    x="8 *         (0.01875 * SafezoneH)";
                    y="5.6 *         (0.025 * SafezoneH)";
                    w="4 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class CA_VisionMode: RscText
                {
                    idc=152;
                    sizeEx="0.022*SafezoneH";
                    colorText[]={0,0,0,1};
                    colorBackground[]={1,1,1,1};
                    shadow=0;
                    font="PuristaMedium";
                    text="VIS";
                    x="25.75 *         (0.01875 * SafezoneH)";
                    y="7.25 *         (0.025 * SafezoneH)";
                    w="1.5 *         (0.01875 * SafezoneH)";
                    h="0.6 *         (0.025 * SafezoneH)";
                };
                class CA_FlirMode: RscText
                {
                    idc=153;
                    sizeEx="0.022*SafezoneH";
                    shadow=2;
                    colorText[]={1,1,1,1};
                    font="PuristaMedium";
                    text="BHOT";
                    x="25.5*         (0.01875 * SafezoneH)";
                    y="7.75 *         (0.025 * SafezoneH)";
                    w="2*         (0.01875 * SafezoneH)";
                    h="0.8 *         (0.025 * SafezoneH)";
                };
                class TextACPOS: RangeText
                {
                    idc=1010;
                    text="CRAFT POS";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="2.5 *         (0.01875 * SafezoneH)";
                    y="3 *         (0.025 * SafezoneH)";
                    w="8 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class ValueACPOS: RangeText
                {
                    idc=171;
                    font="PuristaMedium";
                    sizeEx="0.0295*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="2.5 *         (0.01875 * SafezoneH)";
                    y="4 *         (0.025 * SafezoneH)";
                    w="6 *         (0.01875 * SafezoneH)";
                    h="1 *         (0.025 * SafezoneH)";
                };
                class TextTPOS: RangeText
                {
                    idc=1010;
                    text="TARGET POS";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="41.8*         (0.01875 * SafezoneH)";
                    y="3 *         (0.025 * SafezoneH)";
                    w="8 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class ValueTPOS: RangeText
                {
                    idc=172;
                    font="PuristaMedium";
                    sizeEx="0.0295*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="41.8*         (0.01875 * SafezoneH)";
                    y="4 *         (0.025 * SafezoneH)";
                    w="6 *         (0.01875 * SafezoneH)";
                    h="1 *         (0.025 * SafezoneH)";
                };
                class ValueTime: RangeText
                {
                    idc=190;
                    text="20:28:35";
                    font="PuristaMedium";
                    sizeEx="0.0295*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="2.5*         (0.01875 * SafezoneH)";
                    y="9 *         (0.025 * SafezoneH)";
                    w="6 *         (0.01875 * SafezoneH)";
                    h="1 *         (0.025 * SafezoneH)";
                };
                class TextLaser: RangeText
                {
                    idc=158;
                    text="LRF    ARMED";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={0.89999998,0,0,1};
                    shadow=2;
                    x="3*         (0.01875 * SafezoneH)";
                    y="14.1 *         (0.025 * SafezoneH)";
                    w="13 *         (0.01875 * SafezoneH)";
                    h="2 *         (0.025 * SafezoneH)";
                };
                class CA_Heading: RscText
                {
                    idc=156;
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    font="PuristaMedium";
                    text="023";
                    x="27.25*         (0.01875 * SafezoneH)";
                    y="5 *         (0.025 * SafezoneH)";
                    w="4 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class TextHDG: RangeText
                {
                    idc=1010;
                    text="HDG";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="24*         (0.01875 * SafezoneH)";
                    y="5*         (0.025 * SafezoneH)";
                    w="4 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
                class OpticsZoom1: RangeText
                {
                    idc=180;
                    text="28x";
                    colorText[]={1,1,1,1};
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    shadow=2;
                    x="5 *         (0.01875 * SafezoneH)";
                    y="25 *         (0.025 * SafezoneH)";
                    w="6 *         (0.01875 * SafezoneH)";
                    h="1 *         (0.025 * SafezoneH)";
                };
                class TextZOOM: RangeText
                {
                    idc=1010;
                    text="ZOOM";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="2.5 *         (0.01875 * SafezoneH)";
                    y="25 *         (0.025 * SafezoneH)";
                    w="4 *         (0.01875 * SafezoneH)";
                    h="1 *         (0.025 * SafezoneH)";
                };
                class ValueGEOLOCK: RscText
                {
                    idc=154;
                    text="TRK COR";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="42*         (0.01875 * SafezoneH)";
                    y="33 *         (0.025 * SafezoneH)";
                    w="8 *         (0.01875 * SafezoneH)";
                    h="1 *         (0.025 * SafezoneH)";
                };
                class TextGEOLOCK: RangeText
                {
                    idc=1010;
                    text="GEOLOCK";
                    font="PuristaMedium";
                    sizeEx="0.0255*SafezoneH";
                    colorText[]={1,1,1,1};
                    shadow=2;
                    x="42*         (0.01875 * SafezoneH)";
                    y="32 *         (0.025 * SafezoneH)";
                    w="8 *         (0.01875 * SafezoneH)";
                    h="1.2 *         (0.025 * SafezoneH)";
                };
            };
        };
    };
    class RscUnitInfoAirRTDFullNoWeapon;
    class RscUnitInfoAirRTD_NoRadar_MELB: RscUnitInfoAirRTDFullNoWeapon
    {
        onLoad="['onLoad',_this,'RscUnitInfoAirRTDFullNoWeapon','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
    };
    class Rsc_MELB_RTD_UnitInfo: RscUnitInfoAirRTD_NoRadar_MELB
    {
        controls[]=
        {
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "CA_Horizon_Lite",
            "CA_Speed_Analogue",
            "CA_Altitude_Analogue",
            "CA_Horizon_Analogue",
            "CA_Stability_Analogue",
            "CA_Compass_Analogue",
            "WeaponInfoControlsGroupRight"
        };
        onLoad="['onLoad',_this,'RscUnitInfoAirRTDFullNoWeapon','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call IBC_MELB_fnc_handler";
    };
};

#include "CfgVehicles.hpp"
