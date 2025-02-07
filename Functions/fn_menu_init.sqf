#include "\a3\ui_f\hpp\defineResinclDesign.inc"

params ["_display"];
private _controlsGroup = _display displayCtrl 127890;

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
