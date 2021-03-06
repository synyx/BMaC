/*
	motion_module.h - Header for the Motion module class.
	
	Revision 0
	
	Features:
			- Declares the basic class needed for this functionality.
			- Allows one to use a 
			
	2017/05/23, Maya Posch <posch@synyx.de>
*/


#pragma once
#ifndef MOTION_MODULE_H
#define MOTION_MODULE_H


#include "ota_core.h"


#define GPIO_PIN 0 // GPIO 0 (D5) by default.


class MotionModule {
	static int pin;
	static Timer timer;
	static Timer warmup;
	static bool motion;
	static bool firstLow;
	
public:
	static bool init();
	static bool shutdown();
	static void config(String cmd);
	static void warmupSensor();
	static void readSensor();
	static void IRAM_ATTR interruptHandler();
};


#endif
