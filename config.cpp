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
        };
        //steam://connect/136.243.53.62:2602?appid=107410
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
            h = "(5 *   1.5) *  (pixelH * pixelGrid * 2)";
            class Controls {
                class ConnectRNR: RscButtonMenuMain {
                    idc = 181;
                    text = "RNR";
                    tooltip = "Join RNR Server";
                    w = "10 * (pixelW * pixelGrid * 2)";
                    h = "1.5 * (pixelH * pixelGrid * 2) - (pixelH)";
                    x = 0;
                    y = "(0) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2602, ""AM2""]";
                };
                class ConnectAlpha: ConnectRNR {
                    idc = 182;
                    text = "Alpha";
                    tooltip = "Join Alpha Squad Server";
                    y = "(1 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2302, ""AM2""]";
                };
                class ConnectBravo: ConnectRNR {
                    idc = 183;
                    text = "Bravo";
                    tooltip = "Join Bravo Squad Server";
                    y = "(2 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2352, ""AM2""]";
                };
                class ConnectCharlie: ConnectRNR {
                    idc = 184;
                    text = "Charlie";
                    tooltip = "Join Charlie Squad Server";
                    y = "(3 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2402, ""AM2""]";
                };
                class ConnectBattalion: ConnectRNR {
                    idc = 185;
                    text = "Battalion";
                    tooltip = "Join Battalion Server";
                    y = "(4 * 1.5) * (pixelH * pixelGrid * 2) + (pixelH)";
                    onButtonClick = "connectToServer [""136.243.53.62"", 2302, ""AM2""]";
                };
            };
        };




    };
};
