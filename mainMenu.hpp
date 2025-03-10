
class RscControlsGroupNoHScrollbars;
class RscStandardDisplay;
class RscHTML;
class RscText;
class RscActivepicture;
class RscControlsGroupNoScrollbars;
class RscMainMenuSpotlight;

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
            show=0;
            onload="";
            text="";
        };

        //TAW Join RNR
        // class Spotlight3: RscMainMenuSpotlight {
        //     class Controls {
        //         class Button;
        //         class GroupHover;
        //         class GroupPicture;
        //         class Text;
        //         class TextBackground;
        //     };
        // };

        // class SpotlightRNR: Spotlight3 {
        //     idc = 127892;
        //     show = 1;
        //     h = "3 * (pixelH * pixelGridNoUIScale * 2)";
        //     y = "0.5 - ((10/2) - 3) * (pixelH * pixelGridNoUIScale * 2)";

        //     class Controls: Controls {
        //         class Text: Text {
        //             text = "Join RNR"
        //             h = "3 * (pixelH * pixelGridNoUIScale * 2)";
        //         };
        //     };
        // };

        // //TAW Join Battalion
        // class Spotlight2: RscMainMenuSpotlight {
        //     class Controls {
        //         class Button;
        //         class GroupHover;
        //         class GroupPicture;
        //         class Text;
        //         class TextBackground;
        //     };
        // };

        // class SpotlightBattalion: Spotlight2 {
        //     show = 1;
        //     idc = 127893;
        //     h = "3 * (pixelH * pixelGridNoUIScale * 2)";
        //     y = "0.5 - ((10/2) - 3) * (pixelH * pixelGridNoUIScale * 2)";

        //     class Controls: Controls {
        //         class Text: Text {
        //             text = "Join Battalion"
        //             h = "3 * (pixelH * pixelGridNoUIScale * 2)";
        //         };
        //     };
        // };

        // //TAW Join 
        // class Spotlight1: RscMainMenuSpotlight {
        //     class Controls {
        //         class Button;
        //         class GroupHover;
        //         class GroupPicture;
        //         class Text;
        //         class TextBackground;
        //     };
        // };

        // class SpotlightRHQ: Spotlight1 {
        //     show = 1;
        //     idc = 127894;
        //     h = "3 * (pixelH * pixelGridNoUIScale * 2)";
        //     y = "0.5 - ((10/2) - 3) * (pixelH * pixelGridNoUIScale * 2)";

        //     class Controls: Controls {
        //         class Text: Text {
        //             text = "Join RHQ"
        //             h = "3 * (pixelH * pixelGridNoUIScale * 2)";
        //         };
        //     };
        // };
    };
};
