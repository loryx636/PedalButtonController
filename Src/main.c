/*
 * ----------------------------------------------------------------------------------
 * @file  		: main.c
 * @brief 		: Main program body
 *
 * ----------------------------------------------------------------------------------
 *	 Copyright (c) 2019 Lorenzo Tramuto
 *
 *	Fork of Dmitry Skulkin <dmitry.skulkin@gmail.com> work              			*
 *																					*
 *	Permission is hereby granted, free of charge, to any person obtaining a copy	*
 *	of this software and associated documentation files (the "Software"), to deal	*
 *	in the Software without restriction, including without limitation the rights	*
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell		*
 *	copies of the Software, and to permit persons to whom the Software is			*
 *	furnished to do so, subject to the following conditions:						*
 *																					*
 *	The above copyright notice and this permission notice shall be included in all	*
 *	copies or substantial portions of the Software.									*
 *																					*
 *	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR		*
 *	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,		*
 *	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE		*
 *	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER			*
 *	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,	*
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE	*
 *	SOFTWARE.																		*
 * ----------------------------------------------------------------------------------
 * */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
//#include "ssd1306.h"
#include "stm32f1xx_hal.h"
#include "periph_init.h"
#include "rotary.h"
#include "keypad.h"
#include "usbd_customhid.h"
#include "usb_device.h"
#include "..\common_types\common_structs.h"

/* USER CODE BEGIN Includes */

//#include "ssd1306_fonts.h"
#include "ssd1306_tests.h"
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/
I2C_HandleTypeDef hi2c1;

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);


DMA_HandleTypeDef hdma_adc1;
volatile uint8_t USBSendBuffer[USEDPINS+1]={1,0};			//1 report id, 8 bytes buttons, 12 bytes for 6 axes
//volatile extern uint16_t Rot_Press_Time;
volatile extern struct total_config_ config;
volatile extern struct mouse_report_ mouse_report;
volatile extern struct keyboard_report_ keyboard_report;
volatile extern struct gamepad_report_ gamepad_report;
volatile extern struct multimedia_report_ multimedia_report;

void init_display() {
    ssd1306_TestAll();
}

void loop() {
	HAL_Delay(100);
}

int main(void){
	//return mainDisplay();
	return mainButtonController();
}

int mainDisplay(void)
{
	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();
	/* Configure the system clock */
	SystemClock_Config(); //quello del display

	/* Initialize all configured peripherals codice del display*/
	MX_GPIO_Init();
	MX_I2C1_Init();

	//inizializza display (lancia test)
	init_display();


	while (1)
	{
	loop();
	}
}


/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

    /**Initializes the CPU, AHB and APB busses clocks
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* I2C1 init function */
static void MX_I2C1_Init(void)
{

  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000*4;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
static void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);//prova cambio pin
  //HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6 | GPIO_PIN_7, GPIO_PIN_RESET); //test LT

  /*Configure GPIO pin : PC13 */
  //GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_7; //LTtest
  GPIO_InitStruct.Pin = GPIO_PIN_13;  //prova cambio pin
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);//prova cambio pin
  //HAL_GPIO_Init(GPIOB, &GPIO_InitStruct); //LTtest

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void _Error_Handler(char * file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif



int mainButtonController(void)

{
    extern struct keypad buttons[MAX_BUTTONS];
    extern volatile uint8_t SBstore[MAX_BUTTONS];
    extern uint8_t total_buttons;
    uint8_t pov[4] = {0};


  /* Configure the system clock, Initializes the Flash interface and the Systick */
  sysclock_init();

  /* Initialize all configured peripherals */
  gpio_init();
//  adc_init();


  /* Initialize all configured peripherals */
  MX_USB_DEVICE_Init();


  while (1)
  {
	  	 fill_buffer_4_axises();
	  	 CheckRotaries();

	  	 for (uint8_t i=0;i<MAX_POVS;i++) {
	  		pov[i]=0;
	  	 }

		 for (uint8_t i=0;i<total_buttons;i++) {
				if (SBstore[i] == pov1up_button){
					if (buttons[i].pressed)
						pov[0] |= 1<<3;
				}
				if (SBstore[i] == pov1right_button){
					if (buttons[i].pressed)
						pov[0] |= 1<<2;
				}
				if (SBstore[i] == pov1down_button){
					if (buttons[i].pressed)
						pov[0] |= 1<<1;
				}
				if (SBstore[i] == pov1left_button){
					if (buttons[i].pressed)
						pov[0] |= 1;
				}
				if (SBstore[i] == pov2up_button){
					if (buttons[i].pressed)
						pov[1] |= 1<<3;
				}
				if (SBstore[i] == pov2right_button){
					if (buttons[i].pressed)
						pov[1] |= 1<<2;
				}
				if (SBstore[i] == pov2down_button){
					if (buttons[i].pressed)
						pov[1] |= 1<<1;
				}
				if (SBstore[i] == pov2left_button){
					if (buttons[i].pressed)
						pov[1] |= 1;
				}
				if (SBstore[i] == pov3up_button){
					if (buttons[i].pressed)
						pov[2] |= 1<<3;
				}
				if (SBstore[i] == pov3right_button){
					if (buttons[i].pressed)
						pov[2] |= 1<<2;
				}
				if (SBstore[i] == pov3down_button){
					if (buttons[i].pressed)
						pov[2] |= 1<<1;
				}
				if (SBstore[i] == pov3left_button){
					if (buttons[i].pressed)
						pov[2] |= 1;
				}
				if (SBstore[i] == pov4up_button){
					if (buttons[i].pressed)
						pov[3] |= 1<<3;
				}
				if (SBstore[i] == pov4right_button){
					if (buttons[i].pressed)
						pov[3] |= 1<<2;
				}
				if (SBstore[i] == pov4down_button){
					if (buttons[i].pressed)
						pov[3] |= 1<<1;
				}
				if (SBstore[i] == pov4left_button){
					if (buttons[i].pressed)
						pov[3] |= 1;
				}
			 if (SBstore[i] == joystick_button) {
				 if (buttons[i].pressed){
					 //USBSendBuffer[i/8+1] |= ButtonsCodes[i%8];
					 gamepad_report.buttons |= 1ULL<<i;
				 } else {
					 //USBSendBuffer[i/8+1] &= ~ButtonsCodes[i%8];
					 gamepad_report.buttons &= ~(1ULL<<i);
				 }
			 }
			if (SBstore[i] == mouseleft_button){
				if (buttons[i].pressed){
					mouse_report.left_button = 1;
				} else {
					mouse_report.left_button = 0;
				}
			}
			if (SBstore[i] == mousemiddle_button){
				if (buttons[i].pressed){
					mouse_report.middle_button = 1;
				} else {
					mouse_report.middle_button = 0;
				}
			}
			if (SBstore[i] == mouseright_button){
				if (buttons[i].pressed){
					mouse_report.right_button = 1;
				} else {
					mouse_report.right_button = 0;
				}
			}
			if (SBstore[i] == leftcontrol_button){
				if (buttons[i].pressed){
					keyboard_report.left_ctrl = 1;
				} else {
					keyboard_report.left_ctrl = 0;
				}
			}
			if (SBstore[i] == leftshift_button){
				if (buttons[i].pressed){
					keyboard_report.left_shft = 1;
				} else {
					keyboard_report.left_shft = 0;
				}
			}
			if (SBstore[i] == leftalt_button){
				if (buttons[i].pressed){
					keyboard_report.left_alt = 1;
				} else {
					keyboard_report.left_alt = 0;
				}
			}
			if (SBstore[i] == leftgui_button){
				if (buttons[i].pressed){
					keyboard_report.left_gui = 1;
				} else {
					keyboard_report.left_gui = 0;
				}
			}
			if (SBstore[i] == rightcontrol_button){
				if (buttons[i].pressed){
					keyboard_report.right_ctrl = 1;
				} else {
					keyboard_report.right_ctrl = 0;
				}
			}
			if (SBstore[i] == rightshift_button){
				if (buttons[i].pressed){
					keyboard_report.right_shft = 1;
				} else {
					keyboard_report.right_shft = 0;
				}
			}
			if (SBstore[i] == rightalt_button){
				if (buttons[i].pressed){
					keyboard_report.right_alt = 1;
				} else {
					keyboard_report.right_alt = 0;
				}
			}
			if (SBstore[i] == rightgui_button){
				if (buttons[i].pressed){
					keyboard_report.right_gui = 1;
				} else {
					keyboard_report.right_gui = 0;
				}
			}
			if 		(((SBstore[i] >= a_button) && (SBstore[i] <= space_button)) ||
					((SBstore[i] >= f1_button) && (SBstore[i] <= f12_button)) ||
					((SBstore[i] >= insert_button) && (SBstore[i] <= uparrow_button))) {
				if (buttons[i].pressed){
					keyboard_report.key1 = SBstore[i];
				} else {
					keyboard_report.key1 = 0;
				}
			}
			if (SBstore[i] == volumemute_button) {
				if (buttons[i].pressed){
					multimedia_report.volume_mute = 1;
				} else {
					multimedia_report.volume_mute = 0;
				}
			}
			if (SBstore[i] == volumeup_button) {
				if (buttons[i].pressed){
					multimedia_report.volume_up = 1;
				} else {
					multimedia_report.volume_up = 0;
				}
			}
			if (SBstore[i] == volumedown_button) {
				if (buttons[i].pressed){
					multimedia_report.volume_down = 1;
				} else {
					multimedia_report.volume_down = 0;
				}
			}
		 }

		 for (uint8_t i=0;i<MAX_POVS;i++) {
		 	  			 switch (pov[i]) {
		 	  			 	 case (8)	: gamepad_report.pov[i] = 0; break;
		 	  			 	 case (12)	: gamepad_report.pov[i] = 1; break;
		 	  			 	 case (4)	: gamepad_report.pov[i] = 2; break;
		 	  			 	 case (6)	: gamepad_report.pov[i] = 3; break;
		 	  			 	 case (2)	: gamepad_report.pov[i] = 4; break;
		 	  			 	 case (3)	: gamepad_report.pov[i] = 5; break;
		 	  			 	 case (1)	: gamepad_report.pov[i] = 6; break;
		 	  			 	 case (9)	: gamepad_report.pov[i] = 7; break;
		 	  			 	 default	: gamepad_report.pov[i] = 8; break;
		 	  			 }
		 	  		 }

/*
	  for (uint8_t i=0;i<Number_Rotaries + config.total_single_encoders;i++){

				  diff = millis - RotaryStore[i].time_pressed;

				  if (diff > config.rotary_press_time) {
					  USBSendBuffer[(i/4)+encoders_offset] &= ~ButtonsCodes[(i%4)*2];
					  USBSendBuffer[(i/4)+encoders_offset] &= ~ButtonsCodes[(i%4)*2+1];
					  RotaryStore[i].pressed = 0;
					  RotaryStore[i].previous_state = 0;
				  } else {
					  if (!RotaryStore[i].previous_state){
						  if (RotaryStore[i].pressed == DIR_CW) {
							  USBSendBuffer[(i/4)+encoders_offset] |= ButtonsCodes[(i%4)*2];
						  }
						  if (RotaryStore[i].pressed == DIR_CCW) {
							  USBSendBuffer[(i/4)+encoders_offset] |= ButtonsCodes[(i%4)*2+1];
						  }
						  RotaryStore[i].previous_state = RotaryStore[i].pressed;
					  }
				  }
	  }

				  if (!RotaryStore[i].pressed) {
					  USBSendBuffer[(i/4)+encoders_offset] &= ~ButtonsCodes[(i%4)*2];
					  USBSendBuffer[(i/4)+encoders_offset] &= ~ButtonsCodes[(i%4)*2+1];
				  }


				  if (RotaryStore[i].pressed == DIR_CW) {
					  if ( diff > config.rotary_press_time){
						  USBSendBuffer[(i/4)+encoders_offset] &= ~ButtonsCodes[(i%4)*2];
						  RotaryStore[i].pressed = 0;
					  }
				  		 else
				  			 USBSendBuffer[(i/4)+encoders_offset] |= ButtonsCodes[(i%4)*2];
				  	 }

				  if (RotaryStore[i].pressed == DIR_CCW) {
					  if (diff > config.rotary_press_time){
						  USBSendBuffer[(i/4)+encoders_offset] &= ~ButtonsCodes[(i%4)*2+1];
						  RotaryStore[i].pressed = 0;
					  }
				  		  else
				  			  USBSendBuffer[(i/4)+encoders_offset] |= ButtonsCodes[(i%4)*2+1];
				  		}
			  }
*/

	  //We should send report only if some action exist
			/*  for (uint8_t i=1;i<21;i++) {
				  chk |= USBSendBuffer[i];
			  }
			  for (uint8_t i=21;i<25;i++) {
				  if (USBSendBuffer[i] != 8) chk |= USBSendBuffer[i];
			  }
			  if (chk) {
				 USBD_CUSTOM_HID_SendReport(hUsbDevice_0, USBSendBuffer, USEDPINS+1);
				 packet_counter=0;
			  } else {
				  packet_counter++;
				  if (packet_counter < 6) USBD_CUSTOM_HID_SendReport(hUsbDevice_0, USBSendBuffer, USEDPINS+1);
			  }*/
  }
}
