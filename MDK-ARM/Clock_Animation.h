#include "DIALOG.h"

//Window new state
#define Window_NULL -1 //No window change
#define Window_Menu 0
#define Window_Clock 1
#define Window_Config 2

//Callbacks
static int _ConfigDraw(const WIDGET_ITEM_DRAW_INFO * pDrawItemInfo);
static int _ClockDraw(const WIDGET_ITEM_DRAW_INFO * pDrawItemInfo);

//For window changing
extern int window_control; 
extern WM_HWIN CreateMenu(void);	//Corresponds to Window Menu
extern WM_HWIN CreateClock_view(void); //Corresponds to Window Clock
extern WM_HWIN CreateClock_config(void); //Corresponds to Window Config

//For updating time for clock hands
extern void time_rotating(void);
extern int seconds_angle,minutes_angle,hours_angle,clock_show;
