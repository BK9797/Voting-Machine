/******************************************************************************
 *
 * Layer: Application Layer
 *
 * File Name: app.c
 *
 * Description: source file for the APP
 *
 * Author: BISHOY KAMEL
 *
 *******************************************************************************/

/*******************************************************************************
 *                                  Inclusions                                  *
 *******************************************************************************/

#include<util/delay.h>
#include"app.h"
#include"lcd.h"
#include"keypad.h"
#include"std_types.h"
#include"common_macros.h"

/*******************************************************************************
 *                              Global Variables	                           *
 *******************************************************************************/

static uint8 A= 0;
static uint8 B= 0;
static uint8 C= 0;
static uint8 D= 0;

/*******************************************************************************
 *                            Local Functions Prototypes                       *
 *******************************************************************************/


/*******************************************************************************
 *                             Functions definition                            *
 *******************************************************************************/

void APP_voidInit()
{
	LCD_init();
}


void APP_WelcomeScreen()
{
    LCD_displayString(" Voting Machine");
    _delay_ms(LONG_DELAY);

    LCD_clearScreen();
    LCD_displayString("      some");
	LCD_moveCursor(1, 0);
    LCD_displayString("  Instructions");
    _delay_ms(LONG_DELAY);

    LCD_clearScreen();
    LCD_displayString("1)A      2)B ");
	LCD_moveCursor(1, 0);
    LCD_displayString("3)C      4)D");
    _delay_ms(LONG_DELAY);

    LCD_clearScreen();
    LCD_displayString("5)Reset");
	LCD_moveCursor(1, 0);
    LCD_displayString("6)Get the Winner");
    _delay_ms(LONG_DELAY);

    LCD_clearScreen();
    LCD_displayString("Loading.......");
    _delay_ms(LONG_DELAY);

    APP_Selector();
}


void APP_Selector()
{
	LCD_clearScreen();
	LCD_displayString("A=");
	LCD_integerToString(A);

	LCD_moveCursor(0, 8);
	LCD_displayString("B=");
	LCD_integerToString(B);

	LCD_moveCursor(1, 0);
	LCD_displayString("C=");
	LCD_integerToString(C);

	LCD_moveCursor(1, 8);
	LCD_displayString("D=");
	LCD_integerToString(D);
}


void INCREMENT()
{
	uint8 key=KEYPAD_getPressedKey();

	if(key > 6)
	{
		LCD_clearScreen();
		LCD_displayString("  ERROR INPUT");
		_delay_ms(LONG_DELAY);

		LCD_clearScreen();
		APP_Selector();
	}

	else
	{
		switch (key)
		{
		    case 1:

				_delay_ms(SHORT_DELAY);
				A++;
				LCD_moveCursor(0, 2);
				LCD_integerToString(A);
				break;


			case 2:

				_delay_ms(SHORT_DELAY);
				B++;
				LCD_moveCursor(0, 10);
				LCD_integerToString(B);
				break;


			case 3:

				_delay_ms(SHORT_DELAY);
				C++;
				LCD_moveCursor(1, 2);
				LCD_integerToString(C);
				break;


			case 4:

				_delay_ms(SHORT_DELAY);
				D++;
				LCD_moveCursor(1, 10);
				LCD_integerToString(D);
				break;


			case 5:

				_delay_ms(SHORT_DELAY);
				App_Reset();
				break;


			case 6:

				_delay_ms(SHORT_DELAY);
				App_Winner();
				break;
		}
	}
}


void App_Reset()
{
	A=B=C=D= 0;
	APP_Selector();
}


void App_Winner()
{
	if((A>B) && (A>C) && (A>D))
	{
		LCD_clearScreen();
		LCD_displayString("A is the Winner");
		LCD_moveCursor(1, 0);
	    LCD_displayString("congratulations!");
	}

	else if((B>A) && (B>C) && (B>D))
	{
		LCD_clearScreen();
		LCD_displayString("B is the Winner");
		LCD_moveCursor(1, 0);
	    LCD_displayString("congratulations!");
	}

	else if((C>A) && (C>B) && (C>D))
	{
		LCD_clearScreen();
		LCD_displayString("C is the Winner");
		LCD_moveCursor(1, 0);
	    LCD_displayString("congratulations!");
	}

	else
	{
		LCD_clearScreen();
		LCD_displayString("D is the Winner");
		LCD_moveCursor(1, 0);
	    LCD_displayString("congratulations!");
	}

	GRN_LED_on();
	_delay_ms(LONG_DELAY);
	GRN_LED_off();

    LCD_clearScreen();
    LCD_displayString("Loading.......");

    _delay_ms(LONG_DELAY);
	App_Reset();
}
