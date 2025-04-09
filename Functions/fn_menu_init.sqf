
#include "\a3\Ui_f\hpp\defineResincl.inc"
#include "\a3\Ui_f\hpp\defineResinclDesign.inc"
#include "\a3\Ui_f\hpp\defineDIKCodes.inc"
#define MENU_TIME		0.2

params ["_display"];

disableserialization;

private _controlsGroup = _display displayCtrl 127890;

//Handle Side Button
private _fnc_onSetFocus = {
	params ["_control"];
	private _controlsGroup = ctrlParentControlsGroup _control;

	(_controlsGroup controlsGroupCtrl 1034) ctrlSetTextColor [1,1,1,1];
	(_controlsGroup controlsGroupCtrl 1035) ctrlSetTextColor [1,1,1,1];
	(_controlsGroup controlsGroupCtrl 1036) ctrlSetTextColor [0,0,0,1];
};

private _fnc_onKillFocus = {
	params ["_control"];
	private _controlsGroup = ctrlParentControlsGroup _control;

	(_controlsGroup controlsGroupCtrl 1034) ctrlSetTextColor [0,0,0,0.75];
	(_controlsGroup controlsGroupCtrl 1035) ctrlSetTextColor [0,0,0,0.75];
	(_controlsGroup controlsGroupCtrl 1036) ctrlSetTextColor [1,1,1,0.5];
};

(_controlsGroup controlsGroupCtrl 1037) ctrlAddEventHandler ["MouseEnter", _fnc_onSetFocus];
(_controlsGroup controlsGroupCtrl 1037) ctrlAddEventHandler ["SetFocus", _fnc_onSetFocus];
(_controlsGroup controlsGroupCtrl 1037) ctrlAddEventHandler ["MouseExit", _fnc_onKillFocus];
(_controlsGroup controlsGroupCtrl 1037) ctrlAddEventHandler ["KillFocus", _fnc_onKillFocus];


//Handle Steam Friends Icon
//https://community.bistudio.com/wiki/getSteamFriendsServers
//TODO: Can obtain list of servers friends are on and if it matches our servers, show friend icon with a number.

//Handle Server Button Group
//TODO: Need to essentially replicate the show/hide functions of the main menu buttons. The code is pretty messy to take fully.

// private _fnc_groupEnter = {
// 	params ["_control"];

// 	private _ctrlTitle = _control;
// 	private _display = ctrlparent _ctrlTitle;

// 	["menuClear",[_display],""] call RscDisplayMain_script;

// 	private _ctrlGroup = _display displayctrl (ctrlidc _ctrlTitle - 10);
// 	private _ctrlGroupPos = ctrlposition _ctrlGroup;

// 	//--- Move buttons group next to the title button
// 	_ctrlGroupPos set [0,(ctrlposition _ctrlTitle select 0) min (safezoneX + safezoneW - (ctrlposition _ctrlGroup select 2) - (ctrlposition _ctrlTitle select 3) * 3/4)];
// 	_ctrlGroup ctrlsetposition _ctrlGroupPos;
// 	_ctrlGroup ctrlcommit 0;

// 	_ctrlGroupPos set [3,_params select 1];
// 	_ctrlGroup ctrlsetposition _ctrlGroupPos;
// 	_ctrlGroup ctrlcommit MENU_TIME;
// };

// private _fnc_groupExit = {
// 	params ["_control"];

// 	private _ctrlTitle = _control;
// 	private _ctrlGroup = _display displayctrl (ctrlidc _ctrlTitle - 10);
// 	private _ctrlGroupPos = ctrlposition _ctrlGroup;
// 	_ctrlGroupPos set [3,0];
// 	_ctrlGroup ctrlsetposition _ctrlGroupPos;
// 	_ctrlGroup ctrlcommit MENU_TIME;
// };


// (_controlsGroup controlsGroupCtrl 1016) ctrlAddEventHandler ["MouseEnter", _fnc_groupEnter];
// (_controlsGroup controlsGroupCtrl 1016) ctrlAddEventHandler ["SetFocus", _fnc_groupEnter];
// (_controlsGroup controlsGroupCtrl 1016) ctrlAddEventHandler ["mouseExit", _fnc_groupExit];
// (_controlsGroup controlsGroupCtrl 1016) ctrlAddEventHandler ["killfocus", _fnc_groupExit];


// [(_controlsGroup controlsGroupCtrl 1016)] call _fnc_groupExit;





// //--- Mouse Area Init
// _ctrlMouseArea = _display displayctrl IDC_MAIN_MOUSEAREA;
// _ctrlMouseArea ctrladdeventhandler ["mousebuttondown",{with uinamespace do {[(_controlsGroup controlsGroupCtrl 1016)] call _fnc_groupExit;};}];

// //--- Close menu when focus is set to any non-menu element apart from the mouse area
// _menuControlIDCs = [
// 	IDC_MAIN_GROUP_SINGLEPLAYER,
// 	IDC_MAIN_GROUP_MULTIPLAYER,
// 	IDC_MAIN_GROUP_TUTORIALS,
// 	IDC_MAIN_GROUP_OPTIONS,
// 	IDC_MAIN_GROUP_SESSION,
// 	1006,

// 	IDC_MAIN_TITLE_SINGLEPLAYER,
// 	IDC_MAIN_TITLE_MULTIPLAYER,
// 	IDC_MAIN_TITLE_TUTORIALS,
// 	IDC_MAIN_TITLE_OPTIONS,
// 	IDC_MAIN_TITLE_SESSION,
// 	1016,

// 	IDC_MAIN_TITLEICON_SINGLEPLAYER,
// 	IDC_MAIN_TITLEICON_MULTIPLAYER,
// 	IDC_MAIN_TITLEICON_TUTORIALS,
// 	IDC_MAIN_TITLEICON_OPTIONS,
// 	IDC_MAIN_TITLEICON_SESSION
// ];
// {
// 	if (!(ctrlidc _x in _menuControlIDCs) && !(ctrlidc (ctrlParentControlsGroup _x) in _menuControlIDCs)) then {
// 		_x ctrladdeventhandler ["mouseenter",{with uinamespace do {[(_controlsGroup controlsGroupCtrl 1016)] call _fnc_groupExit;};}];
// 		_x ctrladdeventhandler ["setfocus",{with uinamespace do {[(_controlsGroup controlsGroupCtrl 1016)] call _fnc_groupExit;};}];
// 	};
// } foreach (allcontrols _display - [_ctrlMouseArea]);