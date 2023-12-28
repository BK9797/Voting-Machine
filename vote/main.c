 /******************************************************************************
 *
 * Module: vote
 *
 * File Name: main.c
 *
 * Description: main file for the AVR vote APP
 *
 * Author: BISHOY KAMEL
 *
 *******************************************************************************/

#include"app.h"
int main()
{
	APP_voidInit();
	APP_WelcomeScreen();

	while(1)
	{
		INCREMENT();
	}
}

