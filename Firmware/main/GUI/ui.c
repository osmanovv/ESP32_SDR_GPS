// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.3
// Project name: SquareLine_Project-GPS

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_ScreenConfigure
void ui_ScreenConfigure_screen_init(void);
void ui_event_ScreenConfigure(lv_event_t * e);
lv_obj_t * ui_ScreenConfigure;
lv_obj_t * ui_Label1;
void ui_event_btnStartStop(lv_event_t * e);
lv_obj_t * ui_btnStartStop;
lv_obj_t * ui_Label7;
lv_obj_t * ui_PanelConfigureSats;
void ui_event_TextAreaPRN1(lv_event_t * e);
lv_obj_t * ui_TextAreaPRN1;
void ui_event_TextAreaPRN2(lv_event_t * e);
lv_obj_t * ui_TextAreaPRN2;
void ui_event_TextAreaPRN3(lv_event_t * e);
lv_obj_t * ui_TextAreaPRN3;
void ui_event_TextAreaPRN4(lv_event_t * e);
lv_obj_t * ui_TextAreaPRN4;
lv_obj_t * ui_Label5;
void ui_event_TextAreaFreq1(lv_event_t * e);
lv_obj_t * ui_TextAreaFreq1;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label9;
void ui_event_TextAreaFreq2(lv_event_t * e);
lv_obj_t * ui_TextAreaFreq2;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label10;
void ui_event_TextAreaFreq3(lv_event_t * e);
lv_obj_t * ui_TextAreaFreq3;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label12;
void ui_event_TextAreaFreq4(lv_event_t * e);
lv_obj_t * ui_TextAreaFreq4;
lv_obj_t * ui_Label13;
void ui_event_btnStop(lv_event_t * e);
lv_obj_t * ui_btnStop;
lv_obj_t * ui_Label14;
void ui_event_btnRestartAcq(lv_event_t * e);
lv_obj_t * ui_btnRestartAcq;
lv_obj_t * ui_Label15;
void ui_event_Keyboard1(lv_event_t * e);
lv_obj_t * ui_Keyboard1;


// SCREEN: ui_ScreenState
void ui_ScreenState_screen_init(void);
void ui_event_ScreenState(lv_event_t * e);
lv_obj_t * ui_ScreenState;
lv_obj_t * ui_Label2;
lv_obj_t * ui_lblStateCommon;


// SCREEN: ui_ScreenIQ
void ui_ScreenIQ_screen_init(void);
void ui_event_ScreenIQ(lv_event_t * e);
lv_obj_t * ui_ScreenIQ;
lv_obj_t * ui_Label3;


// SCREEN: ui_ScreenPosition
void ui_ScreenPosition_screen_init(void);
void ui_event_ScreenPosition(lv_event_t * e);
lv_obj_t * ui_ScreenPosition;
lv_obj_t * ui_Label4;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ScreenConfigure(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScreenState, LV_SCR_LOAD_ANIM_MOVE_LEFT, 0, 0, &ui_ScreenState_screen_init);
    }
}
void ui_event_btnStartStop(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        btnStartStopPressed(e);
    }
}
void ui_event_TextAreaPRN1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaPRN1);
        funcShowKeyboard(e);
    }
}
void ui_event_TextAreaPRN2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaPRN2);
        funcShowKeyboard(e);
    }
}
void ui_event_TextAreaPRN3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaPRN3);
        funcShowKeyboard(e);
    }
}
void ui_event_TextAreaPRN4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaPRN4);
        funcShowKeyboard(e);
    }
}
void ui_event_TextAreaFreq1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaFreq1);
        funcShowKeyboard(e);
    }
}
void ui_event_TextAreaFreq2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        funcShowKeyboard(e);
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaFreq2);
    }
}
void ui_event_TextAreaFreq3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        funcShowKeyboard(e);
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaFreq3);
    }
}
void ui_event_TextAreaFreq4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextAreaFreq4);
        funcShowKeyboard(e);
    }
}
void ui_event_btnStop(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        btnStopClick(e);
    }
}
void ui_event_btnRestartAcq(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        btnCodeSearchClick(e);
    }
}
void ui_event_Keyboard1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_READY) {
        _ui_flag_modify(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_ScreenState(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScreenIQ, LV_SCR_LOAD_ANIM_MOVE_LEFT, 0, 0, &ui_ScreenIQ_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScreenConfigure, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 0, 0, &ui_ScreenConfigure_screen_init);
    }
}
void ui_event_ScreenIQ(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScreenPosition, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_ScreenPosition_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScreenState, LV_SCR_LOAD_ANIM_MOVE_LEFT, 0, 0, &ui_ScreenState_screen_init);
    }
}
void ui_event_ScreenPosition(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScreenIQ, LV_SCR_LOAD_ANIM_MOVE_LEFT, 0, 0, &ui_ScreenIQ_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenConfigure_screen_init();
    ui_ScreenState_screen_init();
    ui_ScreenIQ_screen_init();
    ui_ScreenPosition_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_ScreenConfigure);
}
