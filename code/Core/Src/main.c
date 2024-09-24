/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
#define RED 100
#define YELLOW 200
#define GREEN 300
#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5
#define LED6 6
#define LED7 7
#define LED8 8
#define LED9 9
#define LED10 10
#define LED11 11
#define LED12 12


/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void OFF(int LED_COLOR){
	switch(LED_COLOR){
	case RED:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		break;
	case YELLOW:
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		break;
	case GREEN:
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		break;
	case LED1:
		 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
		 break;
	case LED2:
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
		break;
	case LED3:
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
		break;
	case LED4:
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
		break;
	case LED5:
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
		break;
	case LED6:
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
		break;
	case LED7:
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
		break;
	case LED8:
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
		break;
	case LED9:
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
		break;
	case LED10:
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
		break;
	case LED11:
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		break;
	case LED12:
		HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, RESET);
		break;
	default:
		break;
	}
}
void ON(int LED_COLOR){
	switch(LED_COLOR){
		case RED:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			break;
		case LED1:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
			break;
		case LED2:
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
			break;
		case LED3:
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
			break;
		case LED4:
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
			break;
		case LED5:
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
			break;
		case LED6:
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
			break;
		case LED7:
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, SET);
			break;
		case LED8:
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, SET);
			break;
		case LED9:
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, SET);
			break;
		case LED10:
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
			break;
		case LED11:
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
			break;
		case LED12:
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, SET);
			break;
		default:
			break;
		}

}
void display7SEG(int num){
	switch(num){
	case 0:
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	 	 break;

	case 1:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	  	HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	  	HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  	HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	  	HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	  	break;
	case 2:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	  	HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 3:
	  	HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	 	HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	  	HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  	break;

	case 4:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	  	HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	default:
		break;
	}
}
void display7SEG1(int num){
	switch(num){
	case 0:
		 HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
	 	 HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
	  	 HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
	 	 HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);
	 	 break;

	case 1:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, SET);
	  	HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);
	  	HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
	  	HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
	  	HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);
	  	break;
	case 2:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);
	  	HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
		break;
	case 3:
	  	HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
	 	HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
	 	HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
	  	HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
	  	break;

	case 4:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
	  	HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);
	  	HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
		break;
	default:
		break;
	}
}
void EX1(int EX1_counter){
	if(EX1_counter>2){
		ON(YELLOW);
		OFF(RED);
	}else if(EX1_counter>0){
		ON(RED);
		OFF(YELLOW);
	}
}
/*void EX2(int EX2_counter){
	if(EX2_counter>5){
		ON(RED);
		OFF(GREEN);
		OFF(YELLOW);
	}else if(EX2_counter>2){
		ON(GREEN);
		OFF(RED);
		OFF(YELLOW);
	}else if(EX2_counter>0){
		ON(YELLOW);
		OFF(RED);
		OFF(GREEN);
	}
}*/
void EX3(int EX3_counter1,int EX3_counter2){
	if(EX3_counter1>5){
			ON(LED1);
			ON(LED7);

			OFF(LED11);
			OFF(LED5);

			OFF(LED12);
			OFF(LED6);
			display7SEG(EX3_counter1-5);//EX5
			if(EX3_counter2>7){
				ON(LED2);
				ON(LED8);

				OFF(LED3);
				OFF(LED9);

				OFF(LED4);
				OFF(LED10);
				display7SEG1(EX3_counter2-7);//EX5
			}else if(EX3_counter2>5){
				ON(LED4);
				ON(LED10);

				OFF(LED3);
				OFF(LED9);

				OFF(LED2);
				OFF(LED8);
				display7SEG1(EX3_counter2-5);//EX5
			}
	}else if(EX3_counter1>2){

			ON(LED6);
			ON(LED12);

			OFF(LED11);
			OFF(LED5);

			OFF(LED1);
			OFF(LED7);
			display7SEG(EX3_counter1-2);//EX5
		}else if(EX3_counter1>0){
			ON(LED5);
			ON(LED11);

			OFF(LED1);
			OFF(LED7);

			OFF(LED12);
			OFF(LED6);
			display7SEG(EX3_counter1);//EX5
		}
	if(EX3_counter2<=5){
		ON(LED3);
		ON(LED9);

		OFF(LED4);
		OFF(LED10);

		OFF(LED2);
		OFF(LED8);
		display7SEG1(EX3_counter2);//EX5
	}
}

void 	setNumberOnClock(int num){
	switch(num){
	case 0:
		ON(LED12);

		break;
	case 1:
		ON(LED1);
		break;
	case 2:
		ON(LED2);
		break;
	case 3:
		ON(LED3);
		break;
	case 4:
		ON(LED4);
		break;
	case 5:
		ON(LED5);
		break;
	case 6:
		ON(LED6);
		break;
	case 7:
		ON(LED7);
		break;
	case 8:
		ON(LED8);
		break;
	case 9:
		ON(LED9);
		break;
	case 10:
		ON(LED10);
		break;
	case 11:
		ON(LED11);
		break;
	default:
		break;
	}
}
void clearNumberOnClock(int num){
	switch(num){
	case 0:
		OFF(LED12);
		break;
	case 1:
		OFF(LED1);
		break;
	case 2:
		OFF(LED2);
		break;
	case 3:
		OFF(LED3);
		break;
	case 4:
		OFF(LED4);
		break;
	case 5:
		OFF(LED5);
		break;
	case 6:
		OFF(LED6);
		break;
	case 7:
		OFF(LED7);
		break;
	case 8:
		OFF(LED8);
		break;
	case 9:
		OFF(LED9);
		break;
	case 10:
		OFF(LED10);
		break;
	case 11:
		OFF(LED11);
		break;
	default:
		break;
	}
}
void clearAllClock(){
	OFF(LED1);
	OFF(LED2);
	OFF(LED3);
	OFF(LED4);
	OFF(LED5);
	OFF(LED6);
	OFF(LED7);
	OFF(LED8);
	OFF(LED9);
	OFF(LED10);
	OFF(LED11);
	OFF(LED12);
}
void EX10(int hour, int min, int sec){
	clearNumberOnClock(hour-1);
	clearNumberOnClock(min/5-1);
	clearNumberOnClock(sec/5-1);
	if(hour==0){
			clearNumberOnClock(11);
		}
		if(sec==0){
			clearNumberOnClock(11);
		}
		if(min==0){
				clearNumberOnClock(11);
			}
	setNumberOnClock(hour);
	setNumberOnClock(min/5);
	setNumberOnClock(sec/5);
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
//int EX1_counter=4;
//int EX2_counter=10; int EX3_counter=10;
//int EX4_counter=10;
//int EX6_counter=0;
int hour=6; int min=50; int sec=0;
  while (1)
  {

//Excercise 1
	 /* EX1(EX1_counter--);
	  if(EX1_counter<=0){
	  		EX1_counter=4;
	  }*/
//Excercise 2
	 // EX2(EX2_counter);

//Excercise 3,5
/*	EX3(EX2_counter--,EX3_counter--);

	 if(EX2_counter<=0){
	 	EX2_counter=10;
	 }
	 if(EX3_counter<=0){
	 	EX3_counter=10;
	 }*/
//Excercise 4
	  /*if(EX4_counter>=10)	EX4_counter=0;
	  display7SEG(EX4_counter++);*/
//Excercise 6
	/*  ON(LED1);
	  	ON(LED2);
	  	ON(LED3);
	  	ON(LED4);
	  	ON(LED5);
	  	ON(LED6);
	  	ON(LED7);
	  	ON(LED8);
	  	ON(LED9);
	  	ON(LED10);
	  	ON(LED11);
	  	ON(LED12);
	  if(EX6_counter>11){
		  EX6_counter=0;
	  }
	  clearNumberOnClock(EX6_counter++);*/
//Excercise 10
 EX10(hour,min,sec++);
	 if(sec>59){
		 sec=0;
		 min++;
	 }
	 if(min>59){
		 hour++;
		 min=0;
	 }
	 if(hour>11){
		 hour=0;
	 }
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG1_0_Pin|SEG1_1_Pin|SEG1_2_Pin|SEG1_3_Pin
                          |LED_RED_Pin|LED_YELLOW_Pin|SEG_0_Pin|SEG_1_Pin
                          |SEG_2_Pin|SEG_3_Pin|SEG_4_Pin|SEG_5_Pin
                          |SEG_6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED1_Pin|LED2_Pin|LED3_Pin|LED11_Pin
                          |LED12_Pin|SEG1_4_Pin|SEG1_5_Pin|SEG1_6_Pin
                          |LED_GREEN_Pin|LED4_Pin|LED5_Pin|LED6_Pin
                          |LED7_Pin|LED8_Pin|LED9_Pin|LED10_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG1_0_Pin SEG1_1_Pin SEG1_2_Pin SEG1_3_Pin
                           LED_RED_Pin LED_YELLOW_Pin SEG_0_Pin SEG_1_Pin
                           SEG_2_Pin SEG_3_Pin SEG_4_Pin SEG_5_Pin
                           SEG_6_Pin */
  GPIO_InitStruct.Pin = SEG1_0_Pin|SEG1_1_Pin|SEG1_2_Pin|SEG1_3_Pin
                          |LED_RED_Pin|LED_YELLOW_Pin|SEG_0_Pin|SEG_1_Pin
                          |SEG_2_Pin|SEG_3_Pin|SEG_4_Pin|SEG_5_Pin
                          |SEG_6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED1_Pin LED2_Pin LED3_Pin LED11_Pin
                           LED12_Pin SEG1_4_Pin SEG1_5_Pin SEG1_6_Pin
                           LED_GREEN_Pin LED4_Pin LED5_Pin LED6_Pin
                           LED7_Pin LED8_Pin LED9_Pin LED10_Pin */
  GPIO_InitStruct.Pin = LED1_Pin|LED2_Pin|LED3_Pin|LED11_Pin
                          |LED12_Pin|SEG1_4_Pin|SEG1_5_Pin|SEG1_6_Pin
                          |LED_GREEN_Pin|LED4_Pin|LED5_Pin|LED6_Pin
                          |LED7_Pin|LED8_Pin|LED9_Pin|LED10_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
