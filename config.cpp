#include "CfgPatches.hpp"
#include "CfgEventHandlers.hpp"


class RscControlsGroupNoHScrollbars;
class RscStandardDisplay;
class RscHTML;
class RscText;
class RscPicture;
class RscButton;
class RscButtonMenu;
class RscActivepicture;
class RscControlsGroupNoScrollbars;
class RscMainMenuSpotlight;
class RscButtonMenuMain;

// Main Menu
class RscDisplayMain: RscStandardDisplay {
    class controls {
        
        //TAW Discord Button
		class InfoMods: RscControlsGroupNoHScrollbars {
            class Controls;
        };

        class InfoNews: InfoMods {
            class Controls: Controls {
                class Background;
                class BackgroundIcon;
                class Icon;
                class News;
                class Notification;
                class Button;
            };
        };

        class InfoTAWDiscord: InfoNews {
            idc = 127890;
            y = "safeZoneY + safeZoneH - (4 * 2 + 1) * (pixelH * pixelGrid * 2) - 5 * (4 * pixelH)";
            
            class Controls: Controls {
                class Background: Background {};
                class BackgroundIcon: BackgroundIcon {};
                class Icon: Icon {
                    text = "\TAW_AUX_MENU\Data\UI\taw_discord_ca.paa";
                };

                class DiscordInfo: RscText {
                    idc = 127891;
                    style = 1;
                    text = "Join our discord!";
                    sizeEx = "(pixelH * pixelGrid * 2)";
                    font = "RobotoCondensedLight";
                    shadow = 1;
                    colorBackground[] = {0,0,0,0};
                    x = 0;
                    y = 0;
                    w = "(10 - 1.25 * 2) * (pixelW * pixelGrid * 2)";
                    h = "2 * (pixelH * pixelGrid * 2)";
                    onLoad = "(_this select 0) ctrlenable false;";
                };

                class Button: Button {
                    tooltip = "TAW Arma Discord";
                    url = "https://discord.com/invite/tawarma";
                };
            };
        };

        //Sorry ACE :(
        delete ACE_AnniversaryLogo;
        delete ACE_ContributorName;
        delete ACE_ContributorThanks;
        delete ACE_CtrlConfettiPreload;

        //TAW Logo
        class logo: RscActivepicture {
            text="\TAW_AUX_MENU\Data\UI\taw_logo_ca.paa";
            url="https://taw.net/";
            tooltip="TAW Arma Community";
            onButtonClick="";
            onload="";
            //w = "2 * 5 * (pixelW * pixelGrid * 2)"; // 10
            //h = "1 * 5 * (pixelH * pixelGrid * 2)"; // 5
            //x = "0.5 - 5 * (pixelW * pixelGrid * 2)"; // -5
            //y = "safezoneY + (3 - 0.5 * 5) * (pixelH * pixelGrid * 2)"; // 3 - 2.5
        }; 

        class logoApex: logo {
            text="\TAW_AUX_MENU\Data\UI\taw_logo_ca.paa";
            url="https://taw.net/";
            tooltip="TAW Arma Community";
            onButtonClick="";
            onload="";
        };

        //Alternative Arma Logo
		class LogoArmaAlt: RscPicture {
			text = "\A3\ui_f\data\Logos\arma3_shadow_ca.paa";
			y = "safezoneY + (3 - 0.5 * 5) * (pixelH * pixelGrid * 2)";
			x = "safeZoneX+(pixelW * pixelGrid * 2)";//"0.5 - 	5 * 	(pixelW * pixelGrid * 2)";
			w = "2 * 	5 * 	(pixelW * pixelGrid * 2)";
			h = "1 * 	5 * 	(pixelH * pixelGrid * 2)";
		};

        //TAW Server List
        class TitleSingleplayer;
        class TitleTAWServers: TitleSingleplayer {
            idc = 1016;
            text = "TAW Servers";
            x = "0.5 - (5 + 3 * 10) * (pixelW * pixelGrid * 2)";
        };  

        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupTAWServers: GroupSingleplayer {
            idc = 1006;
            x = "0.5 - (5 + 3 * 10) * (pixelW * pixelGrid * 2)";
            h = "(11 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH * 13)";
            class Controls {
                class ConnectAM2_RNR: RscButtonMenuMain {
                    idc = 181;
                    text = "RNR";
                    tooltip = "Join AM2 RNR Server";
                    w = "10 * (pixelW * pixelGrid * 2)";
                    h = "1.5 * (pixelH * pixelGrid * 2) - (pixelH)";
                    x = 0;
                    y = "(0) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2602, ""AM2""]";
                    animTextureNormal="\TAW_AUX_MENU\Data\UI\taw_button_am2_ca.paa";
					animTextureDisabled="\TAW_AUX_MENU\Data\UI\taw_button_am2_ca.paa";
					animTextureOver="\TAW_AUX_MENU\Data\UI\taw_button_am2_hover_ca.paa";
					animTextureFocused="\TAW_AUX_MENU\Data\UI\taw_button_am2_hover_ca.paa";
					animTexturePressed="\TAW_AUX_MENU\Data\UI\taw_button_am2_ca.paa";
					animTextureDefault="\TAW_AUX_MENU\Data\UI\taw_button_am2_ca.paa";
                };
                class ConnectAM2_RHQ: ConnectAM2_RNR {
                    idc = 182;
                    text = "RHQ";
                    tooltip = "Join AM2 RHQ Server";
                    y = "(1 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2802, ""AM2""]";
                };
                class ConnectAM2_CTC: ConnectAM2_RNR {
                    idc = 183;
                    text = "CTC";
                    tooltip = "Join AM2 CTC Server";
                    y = "(2 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2502, ""AM2""]";
                };
                class ConnectAM2_Alpha: ConnectAM2_RNR {
                    idc = 184;
                    text = "Alpha";
                    tooltip = "Join AM2 Alpha Squad Server";
                    y = "(3 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2302, ""AM2""]";
                };
                class ConnectAM2_Bravo: ConnectAM2_RNR {
                    idc = 185;
                    text = "Bravo";
                    tooltip = "Join AM2 Bravo Squad Server";
                    y = "(4 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2352, ""AM2""]";
                };
                class ConnectAM2_Charlie: ConnectAM2_RNR {
                    idc = 186;
                    text = "Charlie";
                    tooltip = "Join AM2 Charlie Squad Server";
                    y = "(5 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2402, ""AM2""]";
                };
                class ConnectAM2_Battalion: ConnectAM2_RNR {
                    idc = 187;
                    text = "Battalion";
                    tooltip = "Join AM2 Battalion Server";
                    y = "(6 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2302, ""AM2""]";
                };

                class ConnectSpacer1: RscButtonMenuMain {
                    idc = -1;
                    text = "";
                    tooltip = "";
                    w = "9.6 * (pixelW * pixelGrid * 2)";
                    y = "(7 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH * 3)";
                    x = "0.2 * (pixelW * pixelGrid * 2)";
                    h = "pixelH";
                    onButtonClick = "";
                    colorBackground[]={1,1,1,1};
                    colorBackgroundFocused[]={1,1,1,1};
                    colorBackground2[]={1,1,1,1};
                    animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
                    animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
                };

                class ConnectAM3_RNR: ConnectAM2_RNR {
                    idc = 188;
                    text = "RNR";
                    tooltip = "Join AM3 RNR Server";
                    y = "(7 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH * 7)";
                    onButtonClick = "connectToServer [""216.250.114.55"", 2602, ""AM3""]";
                    animTextureNormal="\TAW_AUX_MENU\Data\UI\taw_button_am3_ca.paa";
					animTextureDisabled="\TAW_AUX_MENU\Data\UI\taw_button_am3_ca.paa";
					animTextureOver="\TAW_AUX_MENU\Data\UI\taw_button_am3_hover_ca.paa";
					animTextureFocused="\TAW_AUX_MENU\Data\UI\taw_button_am3_hover_ca.paa";
					animTexturePressed="\TAW_AUX_MENU\Data\UI\taw_button_am3_ca.paa";
					animTextureDefault="\TAW_AUX_MENU\Data\UI\taw_button_am3_ca.paa";
                };

                class ConnectAM3_Battalion: ConnectAM3_RNR {
                    idc = 189;
                    text = "Battalion";
                    tooltip = "Join AM3 Battalion Server";
                    y = "(8 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH * 7)";
                    onButtonClick = "connectToServer [""216.250.114.55"", 2302, ""AM3""]";
                };

                class ConnectSpacer2: RscButtonMenuMain {
                    idc = -1;
                    text = "";
                    tooltip = "";
                    w = "9.6 * (pixelW * pixelGrid * 2)";
                    y = "(9 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH * 9)";
                    x = "0.2 * (pixelW * pixelGrid * 2)";
                    h = "pixelH";
                    onButtonClick = "";
                    colorBackground[]={1,1,1,1};
                    colorBackgroundFocused[]={1,1,1,1};
                    colorBackground2[]={1,1,1,1};
                    animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
                    animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
                };

                class ConnectAM2_Liberation: ConnectAM2_RNR {
                    idc = 190;
                    text = "Liberation #1";
                    tooltip = "Join Liberation Server";
                    y = "(9 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH * 13)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 4202, ""AM2""]";
                    animTextureNormal="#(argb,8,8,3)color(0,0,0,1)";
                    animTextureDisabled="#(argb,8,8,3)color(0,0,0,1)";
                    animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
                    animTexturePressed="#(argb,8,8,3)color(0,0,0,1)";
                    animTextureDefault="#(argb,8,8,3)color(0,0,0,1)";
                };
                class ConnectAM2_Antistasi: ConnectAM2_RNR {
                    idc = 190;
                    text = "Antistasi #1";
                    tooltip = "Join Antistasi Server";
                    y = "(10 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH * 13)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 4002, ""AM2""]";
                    animTextureNormal="#(argb,8,8,3)color(0,0,0,1)";
                    animTextureDisabled="#(argb,8,8,3)color(0,0,0,1)";
                    animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
                    animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
                    animTexturePressed="#(argb,8,8,3)color(0,0,0,1)";
                    animTextureDefault="#(argb,8,8,3)color(0,0,0,1)";
                };
            };
        };
    };
};
