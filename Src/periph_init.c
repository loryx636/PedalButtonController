/*
 * ----------------------------------------------------------------------------------
 * @file  		: periph_init.c
 * @brief 		: Periphery initialization  library
 *
 * ----------------------------------------------------------------------------------
 *	 Copyright (c) 2016 Dmitry Skulkin <dmitry.skulkin@gmail.com>					*
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

#include <periph_init.h>
#include <keypad.h>
#include <rotary.h>
#include "..\common_types\common_structs.h"


const struct pin_conf pins[USEDPINS] = {
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 0},		//A0
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 1},		//A1
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 2}, 		//A2
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 3}, 		//A3
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 4}, 		//A4
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 5}, 		//A5
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 6}, 		//A6
		{(uint32_t *)GPIOA_CRL, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 7}, 		//A7
		{(uint32_t *)GPIOA_CRH, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 8},		//A8
		{(uint32_t *)GPIOA_CRH, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 9}, 		//A9
		{(uint32_t *)GPIOA_CRH, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 10},		//A10
		{(uint32_t *)GPIOA_CRH, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 11},		//A11
		{(uint32_t *)GPIOA_CRH, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 12},		//A12
		{(uint32_t *)GPIOA_CRH, (uint32_t *)GPIOA_BSRR, (uint32_t *)GPIOA_IDR, 15},		//A15
		{(uint32_t *)GPIOB_CRL, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 0},		//B0
		{(uint32_t *)GPIOB_CRL, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 1}, 		//B1
		{(uint32_t *)GPIOB_CRL, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 3},		//B3
		{(uint32_t *)GPIOB_CRL, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 4}, 		//B4
		{(uint32_t *)GPIOB_CRL, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 5}, 		//B5
		{(uint32_t *)GPIOB_CRL, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 6}, 		//B6 //tenere libero per display
		{(uint32_t *)GPIOB_CRL, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 7}, 		//B7 //tenere libero per display
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 8}, 		//B8
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 9}, 		//B9
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 10},		//B10
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 11},		//B11
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 12},		//B12
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 13},		//B13
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 14},		//B14
		{(uint32_t *)GPIOB_CRH, (uint32_t *)GPIOB_BSRR, (uint32_t *)GPIOB_IDR, 15},		//B15
		{(uint32_t *)GPIOC_CRH, (uint32_t *)GPIOC_BSRR, (uint32_t *)GPIOC_IDR, 13},		//C13
		{(uint32_t *)GPIOC_CRH, (uint32_t *)GPIOC_BSRR, (uint32_t *)GPIOC_IDR, 14},		//C14
		{(uint32_t *)GPIOC_CRH, (uint32_t *)GPIOC_BSRR, (uint32_t *)GPIOC_IDR, 15},		//C15
};


//configurazione buttonBox gt3 con display
volatile struct total_config_ config = {
		    .config_version = FIRMWARERELEASE,
			.packet_id1 = 4,
			.packet_id2 = 4,
			.packet_id3 = 4,
			.packet_id4 = 4,
			.packet_id5 = 4,
			.packet_id6 = 4,
			.packet_id7 = 4,
			.packet_id8 = 4,
			.operation_code1 = 1,
			.operation_code2 = 2,
			.operation_code3 = 3,
			.operation_code4 = 4,
			.operation_code5 = 4,
			.operation_code6 = 4,
			.operation_code7 = 4,
			.operation_code8 = 4,
			.rotary_press_time = 100,
			.rotary_debounce_time = 50,
			.button_debounce_time = 50,
			.rotswitch_press_time = 100,
			.rotswitch_min_time = 0,
			.analog_2_button_min_time = 0,
			.analog_2_button_press_time = 100,
			.usb_exchange_rate = 16,
			.combined_axis1_mincalib_value = 0,
			.combined_axis1_maxcalib_value = 4095,
			.combined_axis2_mincalib_value = 0,
			.combined_axis2_maxcalib_value = 4095,
			.combined_axis_percent = 50,
			.combined_axis_pin1 = 4,
			.combined_axis_pin2 = 5,
			.combined_axis_enabled = 0,
			.total_single_encoders = 0,
			.combined_axis_cooperate = 1,
			.combined_axis_separate = 0,
			.combined_axis_pin1_autocalib = 0,
			.combined_axis_pin2_autocalib = 0,
			//.analog_2_button_threshold = 600, //for DimSim
			.analog_2_button_inputs = 0,
			.POV_config = 0,
			.axes[0].axis_min_calib_value = 0x1E, //for DimSim
			.axes[0].axis_max_calib_value = 0x3A3, //for DimSim
			.axes[0].axis_profile = 0,
			.axes[0].axis_autocalibrate = 0,
			.axes[1].axis_min_calib_value = 0,
			.axes[1].axis_max_calib_value = 4095,
			.axes[1].axis_profile = 0,
			.axes[1].axis_autocalibrate = 0,
			.axes[2].axis_min_calib_value = 0,
			.axes[2].axis_max_calib_value = 4095,
			.axes[2].axis_profile = 0,
			.axes[2].axis_autocalibrate = 0,
			.axes[3].axis_min_calib_value = 0,
			.axes[3].axis_max_calib_value = 4095,
			.axes[3].axis_profile = 0,
			.axes[3].axis_autocalibrate = 0,
			.axes[4].axis_min_calib_value = 0,
			.axes[4].axis_max_calib_value = 4095,
			.axes[4].axis_profile = 0,
			.axes[4].axis_autocalibrate = 0,
			.axes[5].axis_min_calib_value = 0,
			.axes[5].axis_max_calib_value = 4095,
			.axes[5].axis_profile = 0,
			.axes[5].axis_autocalibrate = 0,
			.pin[0] = Button_ROW,		//A0
			.pin[1] = Button_ROW,		//A1
			.pin[2] = Button_ROW, 		//A2
			.pin[3] = Button_ROW, 		//A3
			.pin[4] = Button_ROW, 		//A4
			.pin[5] = Not_Used, 		//A5	//Not_Used		//AnalogMedSmooth
			.pin[6] = Not_Used, 		//A6	//Not_Used		//Chain_Rotary_Enc_1
			.pin[7] = Not_Used, 		//A7	//Not_Used		//Button_COLUMN
			.pin[8] = Button_COLUMN, 		//A8	//Not_Used		//Chain_Rotary_Enc_1
			.pin[9] = Button_COLUMN, 	 	//A9	//Not_Used		//Chain_Rotary_Enc_1
			.pin[10] = Chain_Rotary_Enc_1, 		//A10	//Not_Used		//Chain_Rotary_Enc_1
			.pin[11] = Not_Used, 		//A11	//Not_Used		//Not_Used
			.pin[12] = Not_Used, 		//A12	//Not_Used		//Not_Used
			.pin[13] = Chain_Rotary_Enc_1, 		//A15	//Not_Used		//Chain_Rotary_Enc_1
			.pin[14] = Chain_Rotary_Enc_1, 		//B0	//Not_Used		//Chain_Rotary_Enc_1
			.pin[15] = Chain_Rotary_Enc_1, 	 	//B1	//Not_Used		//Chain_Rotary_Enc_1
			.pin[16] = Chain_Rotary_Enc_1, 		//B3	//Not_Used		//Button_COLUMN
			.pin[17] = Button,		//B4	//Not_Used		//Button_ROW
			.pin[18] = Button,		//B5	//Not_Used		//Button_ROW
			.pin[19] = Not_Used, 		//B6	//Not_Used		//Button_ROW //tenere liberi per display
			.pin[20] = Not_Used, 	 	//B7	//Not_Used		//Button_ROW //tenere liberi per display
			.pin[21] = Not_Used, 	 	//B8	//Not_Used		  //usare per cronometro display
			.pin[22] = Not_Used, 	 	//B9	//Not_Used		  //usare per cronometro display
			.pin[23] = Not_Used, 		//B10	//Not_Used		//tenere liberi per display
			.pin[24] = Not_Used, 		//B11	//Not_Used		//tenere liberi per display
			.pin[25] = Button_COLUMN, 		//B12
			.pin[26] = Button_COLUMN, 		//B13
			.pin[27] = Button_COLUMN, 		//B14
			.pin[28] = Button_COLUMN, 		//B15
			.pin[29] = Not_Used, 		//C13
			.pin[30] = Chain_Rotary_PINA, 		//C14
			.pin[31] = Chain_Rotary_PINB, 		//C15
			.profile_names[0][0] = 'L',
			.profile_names[0][1] = 'i',
			.profile_names[0][2] = 'n',
			.profile_names[0][3] = 'e',
			.profile_names[0][4] = 'a',
			.profile_names[0][5] = 'r',
			.profile_names[0][6] = 0,
			.profile_names[1][0] = 'E',
			.profile_names[1][1] = 'x',
			.profile_names[1][2] = 'p',
			.profile_names[1][3] = 'o',
			.profile_names[1][4] = 'n',
			.profile_names[1][5] = 'e',
			.profile_names[1][6] = 'n',
			.profile_names[1][7] = 't',
			.profile_names[1][8] = '1',
			.profile_names[1][9] = 0,
			.profile_names[2][0] = 'E',
			.profile_names[2][1] = 'x',
			.profile_names[2][2] = 'p',
			.profile_names[2][3] = 'o',
			.profile_names[2][4] = 'n',
			.profile_names[2][5] = 'e',
			.profile_names[2][6] = 'n',
			.profile_names[2][7] = 't',
			.profile_names[2][8] = '2',
			.profile_names[2][9] = 0,
			.profile_names[3][0] = 'S',
			.profile_names[3][1] = 'h',
			.profile_names[3][2] = 'a',
			.profile_names[3][3] = 'p',
			.profile_names[3][4] = 'e',
			.profile_names[3][5] = '1',
			.profile_names[3][6] = 0,
			.profile_names[4][0] = 'S',
			.profile_names[4][1] = 'h',
			.profile_names[4][2] = 'a',
			.profile_names[4][3] = 'p',
			.profile_names[4][4] = 'e',
			.profile_names[4][5] = '2',
			.profile_names[4][6] = 0,
			.profile_names[5][0] = 'I',
			.profile_names[5][1] = 'n',
			.profile_names[5][2] = 'v',
			.profile_names[5][3] = 'e',
			.profile_names[5][4] = 'r',
			.profile_names[5][5] = 't',
			.profile_names[5][6] = 'e',
			.profile_names[5][7] = 'd',
			.profile_names[5][8] = 0,
			.axes_shapes1[0][0] = 0x000,
			.axes_shapes1[0][1] = 0x1D0,
			.axes_shapes1[0][2] = 0x3A0,
			.axes_shapes1[0][3] = 0x550,
			.axes_shapes1[0][4] = 0x720,
			.axes_shapes1[0][5] = 0x8C0,
			.axes_shapes1[0][6] = 0xAA0,
			.axes_shapes1[0][7] = 0xC40,
			.axes_shapes1[0][8] = 0xE40,
			.axes_shapes1[0][9] = 0xFFF, //linear
			.axes_shapes1[1][0] = 0x000,
			.axes_shapes1[1][1] = 0x580,
			.axes_shapes1[1][2] = 0x9C0,
			.axes_shapes1[1][3] = 0xC40,
			.axes_shapes1[1][4] = 0xE10,
			.axes_shapes1[1][5] = 0xF10,
			.axes_shapes1[1][6] = 0xF80,
			.axes_shapes1[1][7] = 0xFFF,
			.axes_shapes1[1][8] = 0xFFF,
			.axes_shapes1[1][9] = 0xFFF, //exp1
			.axes_shapes1[2][0] = 0x000,
			.axes_shapes1[2][1] = 0x000,
			.axes_shapes1[2][2] = 0x000,
			.axes_shapes1[2][3] = 0x000,
			.axes_shapes1[2][4] = 0x060,
			.axes_shapes1[2][5] = 0x130,
			.axes_shapes1[2][6] = 0x270,
			.axes_shapes1[2][7] = 0x440,
			.axes_shapes1[2][8] = 0x860,
			.axes_shapes1[2][9] = 0xFFF, //exp2
			.axes_shapes2[0][0] = 0x000,
			.axes_shapes2[0][1] = 0x000,
			.axes_shapes2[0][2] = 0x060,
			.axes_shapes2[0][3] = 0x1A0,
			.axes_shapes2[0][4] = 0x4B0,
			.axes_shapes2[0][5] = 0xB70,
			.axes_shapes2[0][6] = 0xE40,
			.axes_shapes2[0][7] = 0xFB0,
			.axes_shapes2[0][8] = 0xFF0,
			.axes_shapes2[0][9] = 0xFFF, //shape1
			.axes_shapes2[1][0] = 0x000,
			.axes_shapes2[1][1] = 0x440,
			.axes_shapes2[1][2] = 0x650,
			.axes_shapes2[1][3] = 0x780,
			.axes_shapes2[1][4] = 0x7C0,
			.axes_shapes2[1][5] = 0x7F0,
			.axes_shapes2[1][6] = 0x860,
			.axes_shapes2[1][7] = 0x960,
			.axes_shapes2[1][8] = 0xBD0,
			.axes_shapes2[1][9] = 0xFFF, //shape2
			.axes_shapes2[1][0] = 0xFFF,
			.axes_shapes2[2][1] = 0xE40,
			.axes_shapes2[2][2] = 0xC40,
			.axes_shapes2[2][3] = 0xAA0,
			.axes_shapes2[2][4] = 0x8C0,
			.axes_shapes2[2][5] = 0x720,
			.axes_shapes2[2][6] = 0x550,
			.axes_shapes2[2][7] = 0x3A0,
			.axes_shapes2[2][8] = 0x1D0,
			.axes_shapes2[2][9] = 0x000, //inverted
};



//default parameters
/*
volatile struct total_config_ config ={
		    .config_version = FIRMWARERELEASE,
			.packet_id1 = 4,
			.packet_id2 = 4,
			.packet_id3 = 4,
			.packet_id4 = 4,
			.packet_id5 = 4,
			.packet_id6 = 4,
			.packet_id7 = 4,
			.packet_id8 = 4,
			.operation_code1 = 1,
			.operation_code2 = 2,
			.operation_code3 = 3,
			.operation_code4 = 4,
			.operation_code5 = 4,
			.operation_code6 = 4,
			.operation_code7 = 4,
			.operation_code8 = 4,
			.rotary_press_time = 100,
			.rotary_debounce_time = 50,
			.button_debounce_time = 50,
			.rotswitch_press_time = 100,
			.rotswitch_min_time = 0,
			.analog_2_button_min_time = 0,
			.analog_2_button_press_time = 100,
			.usb_exchange_rate = 16,
			.combined_axis1_mincalib_value = 0,
			.combined_axis1_maxcalib_value = 4095,
			.combined_axis2_mincalib_value = 0,
			.combined_axis2_maxcalib_value = 4095,
			.combined_axis_percent = 50,
			.combined_axis_pin1 = 4,
			.combined_axis_pin2 = 5,
			.combined_axis_enabled = 0,
			.total_single_encoders = 0,
			.combined_axis_cooperate = 1,
			.combined_axis_separate = 0,
			.combined_axis_pin1_autocalib = 0,
			.combined_axis_pin2_autocalib = 0,
			//.analog_2_button_threshold = 600, //for DimSim
			.analog_2_button_inputs = 0,
			.POV_config = 0,
			.axes[0].axis_min_calib_value = 0x1E, //for DimSim
			.axes[0].axis_max_calib_value = 0x3A3, //for DimSim
			.axes[0].axis_profile = 0,
			.axes[0].axis_autocalibrate = 0,
			.axes[1].axis_min_calib_value = 0,
			.axes[1].axis_max_calib_value = 4095,
			.axes[1].axis_profile = 0,
			.axes[1].axis_autocalibrate = 0,
			.axes[2].axis_min_calib_value = 0,
			.axes[2].axis_max_calib_value = 4095,
			.axes[2].axis_profile = 0,
			.axes[2].axis_autocalibrate = 0,
			.axes[3].axis_min_calib_value = 0,
			.axes[3].axis_max_calib_value = 4095,
			.axes[3].axis_profile = 0,
			.axes[3].axis_autocalibrate = 0,
			.axes[4].axis_min_calib_value = 0,
			.axes[4].axis_max_calib_value = 4095,
			.axes[4].axis_profile = 0,
			.axes[4].axis_autocalibrate = 0,
			.axes[5].axis_min_calib_value = 0,
			.axes[5].axis_max_calib_value = 4095,
			.axes[5].axis_profile = 0,
			.axes[5].axis_autocalibrate = 0,
			.pin[0] = Button_GND,		//A0	//AnalogMedSmooth	//AnalogMedSmooth
			.pin[1] = Button_GND,		//A1	//Analog2Button	//AnalogMedSmooth
			.pin[2] = Button_GND, 		//A2	//Not_Used		//AnalogMedSmooth
			.pin[3] = Button_GND, 		//A3	//Not_Used		//AnalogMedSmooth
			.pin[4] = Button_GND, 		//A4	//Not_Used		//AnalogMedSmooth
			.pin[5] = Button_GND, 		//A5	//Not_Used		//AnalogMedSmooth
			.pin[6] = Button_GND, 		//A6	//Not_Used		//Chain_Rotary_Enc_1
			.pin[7] = Button_GND, 		//A7	//Not_Used		//Button_COLUMN
			.pin[8] = Button_GND, 		//A8	//Not_Used		//Chain_Rotary_Enc_1
			.pin[9] = Button_GND, 	 	//A9	//Not_Used		//Chain_Rotary_Enc_1
			.pin[10] = Button_GND, 		//A10	//Not_Used		//Chain_Rotary_Enc_1
			.pin[11] = Not_Used, 		//A11	//Not_Used		//Not_Used
			.pin[12] = Not_Used, 		//A12	//Not_Used		//Not_Used
			.pin[13] = Button_GND, 		//A15	//Not_Used		//Chain_Rotary_Enc_1
			.pin[14] = Button_GND, 		//B0	//Not_Used		//Chain_Rotary_Enc_1
			.pin[15] = Button_GND, 	 	//B1	//Not_Used		//Chain_Rotary_Enc_1
			.pin[16] = Button_GND, 		//B3	//Not_Used		//Button_COLUMN
			.pin[17] = Button_GND,		//B4	//Not_Used		//Button_ROW
			.pin[18] = Button_GND,		//B5	//Not_Used		//Button_ROW
			.pin[19] = Not_Used, 		//B6	//Not_Used		//Button_ROW //tenere liberi per display
			.pin[20] = Not_Used, 	 	//B7	//Not_Used		//Button_ROW //tenere liberi per display
			.pin[21] = Button_GND, 	 	//B8	//Not_Used		//Button_ROW
			.pin[22] = Button_GND, 	 	//B9	//Not_Used		//Button_ROW
			.pin[23] = Button_GND, 		//B10	//Not_Used		//Chain_Rotary_PINA
			.pin[24] = Button_GND, 		//B11	//Not_Used		//Chain_Rotary_PINB
			.pin[25] = Button_GND, 		//B12	//Not_Used		//Button_COLUMN
			.pin[26] = Button_GND, 		//B13	//Not_Used		//Chain_Rotary_Enc_1
			.pin[27] = Button_GND, 		//B14	//Not_Used		//Chain_Rotary_Enc_1
			.pin[28] = Button_GND, 		//B15	//Not_Used		//Chain_Rotary_Enc_1
			.pin[29] = Button_GND, 		//C13	//Not_Used		//Button_COLUMN
			.pin[30] = Button_GND, 		//C14	//Not_Used		//Button_COLUMN
			.pin[31] = Button_GND, 		//C15	//Not_Used		//Button_COLUMN
			.profile_names[0][0] = 'L',
			.profile_names[0][1] = 'i',
			.profile_names[0][2] = 'n',
			.profile_names[0][3] = 'e',
			.profile_names[0][4] = 'a',
			.profile_names[0][5] = 'r',
			.profile_names[0][6] = 0,
			.profile_names[1][0] = 'E',
			.profile_names[1][1] = 'x',
			.profile_names[1][2] = 'p',
			.profile_names[1][3] = 'o',
			.profile_names[1][4] = 'n',
			.profile_names[1][5] = 'e',
			.profile_names[1][6] = 'n',
			.profile_names[1][7] = 't',
			.profile_names[1][8] = '1',
			.profile_names[1][9] = 0,
			.profile_names[2][0] = 'E',
			.profile_names[2][1] = 'x',
			.profile_names[2][2] = 'p',
			.profile_names[2][3] = 'o',
			.profile_names[2][4] = 'n',
			.profile_names[2][5] = 'e',
			.profile_names[2][6] = 'n',
			.profile_names[2][7] = 't',
			.profile_names[2][8] = '2',
			.profile_names[2][9] = 0,
			.profile_names[3][0] = 'S',
			.profile_names[3][1] = 'h',
			.profile_names[3][2] = 'a',
			.profile_names[3][3] = 'p',
			.profile_names[3][4] = 'e',
			.profile_names[3][5] = '1',
			.profile_names[3][6] = 0,
			.profile_names[4][0] = 'S',
			.profile_names[4][1] = 'h',
			.profile_names[4][2] = 'a',
			.profile_names[4][3] = 'p',
			.profile_names[4][4] = 'e',
			.profile_names[4][5] = '2',
			.profile_names[4][6] = 0,
			.profile_names[5][0] = 'I',
			.profile_names[5][1] = 'n',
			.profile_names[5][2] = 'v',
			.profile_names[5][3] = 'e',
			.profile_names[5][4] = 'r',
			.profile_names[5][5] = 't',
			.profile_names[5][6] = 'e',
			.profile_names[5][7] = 'd',
			.profile_names[5][8] = 0,
			.axes_shapes1[0][0] = 0x000,
			.axes_shapes1[0][1] = 0x1D0,
			.axes_shapes1[0][2] = 0x3A0,
			.axes_shapes1[0][3] = 0x550,
			.axes_shapes1[0][4] = 0x720,
			.axes_shapes1[0][5] = 0x8C0,
			.axes_shapes1[0][6] = 0xAA0,
			.axes_shapes1[0][7] = 0xC40,
			.axes_shapes1[0][8] = 0xE40,
			.axes_shapes1[0][9] = 0xFFF, //linear
			.axes_shapes1[1][0] = 0x000,
			.axes_shapes1[1][1] = 0x580,
			.axes_shapes1[1][2] = 0x9C0,
			.axes_shapes1[1][3] = 0xC40,
			.axes_shapes1[1][4] = 0xE10,
			.axes_shapes1[1][5] = 0xF10,
			.axes_shapes1[1][6] = 0xF80,
			.axes_shapes1[1][7] = 0xFFF,
			.axes_shapes1[1][8] = 0xFFF,
			.axes_shapes1[1][9] = 0xFFF, //exp1
			.axes_shapes1[2][0] = 0x000,
			.axes_shapes1[2][1] = 0x000,
			.axes_shapes1[2][2] = 0x000,
			.axes_shapes1[2][3] = 0x000,
			.axes_shapes1[2][4] = 0x060,
			.axes_shapes1[2][5] = 0x130,
			.axes_shapes1[2][6] = 0x270,
			.axes_shapes1[2][7] = 0x440,
			.axes_shapes1[2][8] = 0x860,
			.axes_shapes1[2][9] = 0xFFF, //exp2
			.axes_shapes2[0][0] = 0x000,
			.axes_shapes2[0][1] = 0x000,
			.axes_shapes2[0][2] = 0x060,
			.axes_shapes2[0][3] = 0x1A0,
			.axes_shapes2[0][4] = 0x4B0,
			.axes_shapes2[0][5] = 0xB70,
			.axes_shapes2[0][6] = 0xE40,
			.axes_shapes2[0][7] = 0xFB0,
			.axes_shapes2[0][8] = 0xFF0,
			.axes_shapes2[0][9] = 0xFFF, //shape1
			.axes_shapes2[1][0] = 0x000,
			.axes_shapes2[1][1] = 0x440,
			.axes_shapes2[1][2] = 0x650,
			.axes_shapes2[1][3] = 0x780,
			.axes_shapes2[1][4] = 0x7C0,
			.axes_shapes2[1][5] = 0x7F0,
			.axes_shapes2[1][6] = 0x860,
			.axes_shapes2[1][7] = 0x960,
			.axes_shapes2[1][8] = 0xBD0,
			.axes_shapes2[1][9] = 0xFFF, //shape2
			.axes_shapes2[1][0] = 0xFFF,
			.axes_shapes2[2][1] = 0xE40,
			.axes_shapes2[2][2] = 0xC40,
			.axes_shapes2[2][3] = 0xAA0,
			.axes_shapes2[2][4] = 0x8C0,
			.axes_shapes2[2][5] = 0x720,
			.axes_shapes2[2][6] = 0x550,
			.axes_shapes2[2][7] = 0x3A0,
			.axes_shapes2[2][8] = 0x1D0,
			.axes_shapes2[2][9] = 0x000, //inverted
};*/

volatile struct mouse_report_ mouse_report = {
		.packet_id = 6,
		.left_button = 0,
		.right_button = 0,
		.middle_button = 0,
		.additional_buttons = 0,
		.X_pos = 0,
		.Y_pos = 0,
		.mouse_wheel_pos = 0,
};

volatile struct gamepad_report_ gamepad_report = {
		.packet_id = 1,
		.buttons = 0,
		.axis[0] = 0,
		.axis[1] = 0,
		.axis[2] = 0,
		.axis[3] = 0,
		.axis[4] = 0,
		.axis[5] = 0,
		.pov[0] = 8,
		.pov[1] = 8,
		.pov[2] = 8,
		.pov[3] = 8,
};

volatile struct keyboard_report_ keyboard_report = {
		.packet_id = 7,
		.left_ctrl = 0,
		.left_shft = 0,
		.left_alt = 0,
		.left_gui = 0,
		.right_ctrl = 0,
		.right_shft = 0,
		.right_alt = 0,
		.right_gui = 0,
		.key1 = 0,
		.key2 = 0,
		.key3 = 0,
		.key4 = 0,
		.key5 = 0,
		.key6 = 0,
};

volatile struct multimedia_report_ multimedia_report = {
		.packet_id = 9,
		.scan_next = 0,
		.scan_prev = 0,
		.stop = 0,
		.play = 0,
		.volume_mute = 0,
		.volume_down = 0,
		.volume_up = 0,
//		.browser = 0,
};

volatile struct sensor_report_ sensor_report = {
		.packet_id = 5,
		.operation_code = 254,
		.sensor_value[0] = 0,
		.sensor_value[1] = 0,
		.sensor_value[2] = 0,
		.sensor_value[3] = 0,
		.sensor_value[4] = 0,
		.sensor_value[5] = 0,
};


//uint8_t * USBD_PRODUCT_STRING_FS;
uint8_t * USBD_SERIALNUMBER_STRING_FS;
uint8_t USB_Serial_Number_Unique[15] = {0};

//volatile uint8_t Number_AnalogButtons=0;
uint8_t Number_DigiButtons=0;
volatile uint8_t send_buffer[USBD_CUSTOMHID_OUTREPORT_BUF_SIZE]={0};
volatile uint8_t config_flag=0;

volatile struct rot_conf Single_rotaries[USEDPINS] = {0};

volatile struct a2b {
    uint8_t buttons_number;
    uint16_t buttons_intervals[MAX_A2B_BUTTONS];
} A2Bstore[MAX_A2B_INPUTS] = {0};
volatile uint16_t axes_shapes[MAX_AXES][SHAPEVALUES];

volatile uint8_t SBstore[MAX_BUTTONS]={0};
volatile uint8_t keyboard_exists = 0;
volatile uint8_t multimedia_exists = 0;

uint8_t total_buttons = 0;

uint32_t * Rot_PINA_IDR, * Rot_PINB_IDR;
uint16_t Rot_PINA_pin, Rot_PINB_pin;
uint8_t Number_Rotaries=0,
		//Number_Single_Rotaries=0,
		Number_Rows=0,
		Number_Columns=0,
		Number_Buttons=0,
		Number_Simple_Buttons=0,
		Number_Wires=0,
		Number_RotSwitches=0;
//uint8_t buttons_offset=0;
uint8_t encoders_offset=0;
volatile uint32_t ADC1Values[ADC_BUFF_SIZE];
//uint32_t ADC1Prevs_Values[ADC_BUFF_SIZE]={0};
volatile uint64_t millis;
uint8_t Number_Channels=0;
extern volatile uint8_t USBSendBuffer[USEDPINS+1];
volatile uint8_t connected_mode;

extern uint8_t USBD_CUSTOM_HID_CfgDesc[41];

uint8_t mouse_inputs=0;

const uint8_t FIR7_coeff[] = {1,1,1,4,1,1,1};
const uint8_t FIR5_coeff[] = {1,2,4,2,1};
const uint8_t FIR3_coeff[] = {2,6,2};


void gpio_init(void) {

	// GPIO Ports Clock for GPIOA/B/C/D
	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN;
	// Disable JTAG and SWD
//	RCC->APB2ENR |= RCC_APB2ENR_AFIOEN;
//	AFIO->MAPR = AFIO_MAPR_SWJ_CFG_DISABLE;

	uint8_t * curradr;

	curradr = (uint8_t *)get_lastpage_addr((uint16_t *)FLASHSIZEREG) ;

	if (*(curradr + offsetof(struct total_config_,config_version)) != FIRMWARERELEASE) {
		erase_flash();
		write_flash();
	} else {
		get_config();
	}


	gpio_ports_config();

	custom_usb_config();

}


void custom_usb_config(void) {
	//uint8_t i=0;
	uint32_t * curradr;
	uint32_t id1,id2,id3;
	uint8_t mod;

	/*
	USB_Product_String[0] = 79; // O
	USB_Product_String[1] = 83; // S
	USB_Product_String[2] = 72; // H
	USB_Product_String[3] = 32; // Space
	USB_Product_String[4] = 80; // P
	USB_Product_String[5] = 66; // B
	USB_Product_String[6] = 32; // Space
	USB_Product_String[7] = 67; // C
	USB_Product_String[8] = 111; // o
	USB_Product_String[9] = 110; // n
	USB_Product_String[10] = 116; // t
	USB_Product_String[11] = 114; // r
	USB_Product_String[12] = 111; // o
	USB_Product_String[13] = 108; // l
	USB_Product_String[14] = 108; // l
	USB_Product_String[15] = 101; // e
	USB_Product_String[16] = 114; // r
	USB_Product_String[17] = 0;


	if (config.usb_ps_uniq[0]) {
		USB_Product_String[17] = 32; // Space
		USB_Product_String[18] = 40; // (
		while ((config.usb_ps_uniq[i]) && (i < 10)) {
			USB_Product_String[19+i] = config.usb_ps_uniq[i];
			i++;
		}

		USB_Product_String[19+i] = 41; // )
		USB_Product_String[19+i+1] = 0;
	}

	USBD_PRODUCT_STRING_FS = USB_Product_String;
	*/

	USB_Serial_Number_Unique[14]=0;
	curradr = (uint32_t *)UNIQUEIDREG;
	id1 = *curradr++;
	id2 = *curradr++;
	id3 = *curradr;

	id2^=id1;
	id3^=id1;

		for (uint8_t i=0; i<6; i++) {
			mod = id2 % 32;
			USB_Serial_Number_Unique[13-i]=uint8_to_32(mod);
			id2 = id2/32;
		}
		USB_Serial_Number_Unique[7]=uint8_to_32(id2);
		for (uint8_t i=0; i<6; i++) {
			mod = id3 % 32;
			USB_Serial_Number_Unique[6-i]=uint8_to_32(mod);
			id3 = id3/32;
		}
		USB_Serial_Number_Unique[0]=uint8_to_32(id3);

 	USBD_SERIALNUMBER_STRING_FS = USB_Serial_Number_Unique;


 	USBD_CUSTOM_HID_CfgDesc[33]=config.usb_exchange_rate;
}

uint8_t uint8_to_32(uint8_t value) {
	if (value > 9) return (value+55);
	else return (value+48);
}

void gpio_ports_config(void) {

	uint32_t tmpregmask;
	uint8_t tmpconfvalue=0x4,
			tmpbsrrvalue=0,
			i,
			tmp=0;
	uint8_t Number_Poles = 0;
	//TODO make it as struct & pass ptr to it to functions
	Number_Channels = 0;
//	Number_AnalogButtons = 0;
	Number_DigiButtons = 0;
	extern volatile struct rots RotaryStore[USEDPINS];
	extern struct keypad buttons[MAX_BUTTONS];

	for (uint8_t i=0; i<USEDPINS; i++) {
			Single_rotaries[i].PINA_IDR = 0;
			Single_rotaries[i].PINA_Type = 0;
			Single_rotaries[i].PINAmask = 0;
			Single_rotaries[i].PINB_IDR = 0;
			Single_rotaries[i].PINB_Type = 0;
			Single_rotaries[i].PINBmask = 0;
			RotaryStore[i].pressed = 0;
			RotaryStore[i].state = 0;
			RotaryStore[i].time_pressed = 0;
			RotaryStore[i].previous_state = 0;
		}
	Rot_PINA_IDR = 0;
	Rot_PINB_IDR = 0;
	Rot_PINA_pin = 0;
	Rot_PINB_pin = 0;
	Number_Rotaries = 0;
	Number_Rows = 0;
	Number_Columns = 0;
	Number_Buttons = 0;
	Number_Simple_Buttons = 0;
	Number_Wires = 0;
	Number_RotSwitches = 0;
	encoders_offset = 0;

	for (uint8_t i=0; i<ADC_BUFF_SIZE; i++) {
		ADC1Values[i] = 0;
//		ADC1Prevs_Values[i] = 0;
	}

	for (uint8_t i=0; i<MAX_BUTTONS; i++){
		buttons[i].current_state = 0;
		buttons[i].pressed = 0;
		buttons[i].prev_state = 0;
		buttons[i].time_pressed = 0;
	}


//	uint8_t Number_Single_Rotaries_PINA=0,
//			Number_Single_Rotaries_PINB=0;

	// Reset all prevs states
	GPIOA->CRL=0x44444444;
	GPIOA->CRH=0x44444444;
	GPIOA->ODR=0x0;
	GPIOB->CRL=0x44444444;
	GPIOB->CRH=0x44444444;
	GPIOB->ODR=0x0;
	GPIOC->CRL=0x44444444;
	GPIOC->CRH=0x44444444;
	GPIOC->ODR=0x0;



	// making registers configuration;

	for (i=0;i<USEDPINS;i++){
		switch (config.pin[i]) {
		case Not_Used:		tmpconfvalue=0x4;
							tmpbsrrvalue=0x10;
							break;
		case AnalogLowSmooth:
		case AnalogMedSmooth:
		case AnalogHighSmooth:
		case AnalogNoSmooth:
		case Analog2Button: Number_Channels++;
							tmpconfvalue=0x0;
							tmpbsrrvalue=0x10;
							break;
		case Analog2MouseX:
		case Analog2MouseY:
		case Analog2MouseWheel: Number_Channels++;
							tmpconfvalue=0x0;
							tmpbsrrvalue=0x10;
							mouse_inputs++;
							break;
		case Chain_Rotary_PINA:
							tmpconfvalue=0x8;
							tmpbsrrvalue=0x10;
							Rot_PINA_IDR=pins[i].idr_reg_addr;
							Rot_PINA_pin=0x1<<pins[i].pin_number;
							break;
		case Chain_Rotary_PINB:
							tmpconfvalue=0x8;
							tmpbsrrvalue=0x10;
							Rot_PINB_IDR=pins[i].idr_reg_addr;
							Rot_PINB_pin=0x1<<pins[i].pin_number;
							break;
		case Button_ROW: 	Number_Rows++;
							tmpconfvalue=0x8;
							tmpbsrrvalue=0x10;
							break;
		case Button:		Number_Simple_Buttons++;
							tmpconfvalue=0x8;
							tmpbsrrvalue=0x10;
							break;
		case Button_GND:	Number_Simple_Buttons++;
							tmpconfvalue=0x8;
							tmpbsrrvalue=0x00;
							break;
		case Chain_Rotary_Enc_1:
		case Chain_Rotary_Enc_2:
							Number_Rotaries++;
							tmpconfvalue=0x02;
							tmpbsrrvalue=0x10;
							break;
		case Single_Rotary_PINA_1:
		case Single_Rotary_PINA_2:
		case Single_Rotary_PINA_4:
//							Single_rotaries[Number_Single_Rotaries_PINA].PINA=(0x1<<pins[i].pin_number);
//							Single_rotaries[Number_Single_Rotaries_PINA].PINA_IDR=pins[i].idr_reg_addr;
//							Single_rotaries[Number_Single_Rotaries_PINA].PINA_Type=pins[i].pin_type;
//							Number_Single_Rotaries_PINA++;
							tmpconfvalue=0x02;
							tmpbsrrvalue=0x10;
							break;
		case Single_Rotary_PINB_1:
		case Single_Rotary_PINB_2:
		case Single_Rotary_PINB_4:
//							Single_rotaries[Number_Single_Rotaries_PINB].PINB=(0x1<<pins[i].pin_number);
//							Single_rotaries[Number_Single_Rotaries_PINB].PINB_IDR=pins[i].idr_reg_addr;
//							Single_rotaries[Number_Single_Rotaries_PINB].PINB_Type=pins[i].pin_type;
//							Number_Single_Rotaries_PINB++;
							tmpconfvalue=0x02;
							tmpbsrrvalue=0x10;
							break;
		case Button_COLUMN: Number_Columns++;
							tmpconfvalue=0x02;
							tmpbsrrvalue=0x10;
							break;
		case RotSwPole:		Number_Poles++;
							tmpconfvalue=0x02;
							tmpbsrrvalue=0x10;
							break;
		case RotSwWire:		Number_Wires++;
							tmpconfvalue=0x8;
							tmpbsrrvalue=0x10;
							break;
		}

		if (pins[i].pin_number>7) {
			tmp=pins[i].pin_number-8;
		} else {
			tmp=pins[i].pin_number;
		};

		tmpregmask = (uint32_t)(0b1111 << (tmp*4));
		*pins[i].conf_reg_addr = (*(pins[i].conf_reg_addr) & (~tmpregmask)) | (tmpconfvalue << (tmp*4));
		*pins[i].bsrr_reg_addr 	= 1 << (pins[i].pin_number+tmpbsrrvalue);
	}

	for (uint8_t i=0; i<config.total_single_encoders; i++) {
		Single_rotaries[i].PINA_IDR=pins[config.single_encoder_pinA[i]].idr_reg_addr;
		Single_rotaries[i].PINA_Type=config.pin[config.single_encoder_pinA[i]];
		Single_rotaries[i].PINAmask=(0x1<<pins[config.single_encoder_pinA[i]].pin_number);
		Single_rotaries[i].PINB_IDR=pins[config.single_encoder_pinB[i]].idr_reg_addr;
		Single_rotaries[i].PINB_Type=config.pin[config.single_encoder_pinB[i]];
		Single_rotaries[i].PINBmask=(0x1<<pins[config.single_encoder_pinB[i]].pin_number);
	}

	Number_DigiButtons = Number_Columns*Number_Rows + Number_Simple_Buttons;
	Number_Buttons = Number_DigiButtons;
	for (uint8_t i = 0; i < config.analog_2_button_inputs; i++){
		if (i < 5) {
			Number_Buttons += config.a2b_1st5[i].buttons_number;
			A2Bstore[i].buttons_number = config.a2b_1st5[i].buttons_number;
			for (uint8_t j=0; j<MAX_A2B_BUTTONS; j++){
				A2Bstore[i].buttons_intervals[j] = (config.a2b_1st5[i].buttons_intervals[j]*4095)/255;
			}
		}
		else {
			Number_Buttons += config.a2b_2nd5[i-5].buttons_number;
			A2Bstore[i].buttons_number = config.a2b_2nd5[i-(MAX_A2B_BUTTONS/2)].buttons_number;
			for (uint8_t j=0; j<MAX_A2B_BUTTONS; j++){
				A2Bstore[i].buttons_intervals[j] = (config.a2b_2nd5[i-(MAX_A2B_BUTTONS/2)].buttons_intervals[j]*4095)/255;
			}
		}
	}

	for (uint8_t i=0; i<MAX_BUTTONS;i++){
		if (i<MAX_BUTTONS/2) SBstore[i] = config.buttons_types1st[i];
		else SBstore[i] = config.buttons_types2nd[i-MAX_BUTTONS/2];
		if (((SBstore[i] >= a_button) && (SBstore[i] <= space_button)) ||
			((SBstore[i] >= f1_button) && (SBstore[i] <= f12_button)) ||
			((SBstore[i] >= insert_button) && (SBstore[i] <= uparrow_button))) {
			keyboard_exists = 1;
		}
		if ((SBstore[i] >= volumemute_button) && (SBstore[i] <= volumedown_button)) {
			multimedia_exists = 1;
		}
 	}

	Number_RotSwitches = Number_Poles * Number_Wires;
	encoders_offset = (Number_Buttons + Number_RotSwitches);///8;// + 2;
	total_buttons = (MAX_BUTTONS > (encoders_offset + config.total_single_encoders + Number_Rotaries)) ? MAX_BUTTONS : (encoders_offset + config.total_single_encoders + Number_Rotaries);
	//if (((Number_Buttons + Number_RotSwitches)%8) == 0) encoders_offset++; else encoders_offset=encoders_offset+2;


	adc_init();

	for (uint8_t i=0;i<MAX_AXES;i++) {
		if (config.axes[i].axis_autocalibrate == 1) {
			config.axes[i].axis_min_calib_value = 4095;
			config.axes[i].axis_max_calib_value = 1;
		}
        for (uint8_t j=0; j<10; j++) {
            if (i<MAX_AXES/2) axes_shapes[i][j] = config.axes_shapes1[i][j];
            else axes_shapes[i][j] = config.axes_shapes2[i-MAX_AXES/2][j];
        }
	}

	if (config.combined_axis_enabled) {
		uint8_t lastaxis=0;
		if (Number_Channels-config.analog_2_button_inputs > MAX_AXES) lastaxis=5; else lastaxis=Number_Channels-config.analog_2_button_inputs;
		config.axes[lastaxis].axis_min_calib_value = config.combined_axis1_mincalib_value;
		config.axes[lastaxis].axis_max_calib_value = config.combined_axis1_maxcalib_value;
	}
}

void periph_deinit(void){
	//ADC deinit
	ADC1->CR2 |= (uint32_t)0x0;
	//clock disable
	//RCC->APB2ENR = 0;
	//RCC->AHBENR = 0;
	//RCC->APB1ENR = 0;
}

void adc_init(void) {


	//ADC clock enable
	RCC->APB2ENR |= RCC_APB2ENR_ADC1EN ;
	//DMA clock enable
	RCC->AHBENR |= RCC_AHBENR_DMA1EN;

	//reset ADC prev config
	ADC1->CR1=(uint32_t)0x0;
	ADC1->CR2=(uint32_t)0x0;
	ADC1->SMPR1=(uint32_t)0x0;
	ADC1->SMPR2=(uint32_t)0x0;
	ADC1->SQR3=(uint32_t)0x0;
	ADC1->SQR2=(uint32_t)0x0;
	ADC1->SQR1=(uint32_t)0x0;
	//reset DMA prev config
	DMA1_Channel1->CPAR = 0x0;
	DMA1_Channel1->CMAR = 0x0;
	DMA1_Channel1->CCR = 0x0;
	DMA1_Channel1->CNDTR =0x0;


	//Set ADC DR Register as peripheral
	DMA1_Channel1->CPAR = (uint32_t)&ADC1->DR;
	//Set Memory address
	DMA1_Channel1->CMAR = (uint32_t)ADC1Values;
	//Total number of data transfered
	DMA1_Channel1->CNDTR = Number_Channels;//ADC_BUFF_SIZE;
	//Channel priority very high
	DMA1_Channel1->CCR |= DMA_CCR_PL;
	//Memory size 32bit
	DMA1_Channel1->CCR |= DMA_CCR_MSIZE;
	//Peripheral size 32bit
	DMA1_Channel1->CCR |= DMA_CCR_PSIZE;
	//Circular mode
	DMA1_Channel1->CCR |= DMA_CCR_CIRC;
	//Memory inc
	DMA1_Channel1->CCR |= DMA_CCR_MINC;
	//DMA Channel1 enable
	DMA1_Channel1->CCR |= DMA_CCR_EN;

	//Calibration
	ADC1->CR2 |= ADC_CR2_CAL;
	while (!(ADC1->CR2 & ADC_CR2_CAL));

	//DMA + Continious Conversion
	ADC1->CR2 |= ADC_CR2_DMA;
	ADC1->CR2 |= ADC_CR2_CONT;
	//Scan mode
	ADC1->CR1 |= ADC_CR1_SCAN ;
	//13.5 cycles for all channels
	ADC1->SMPR1 = (uint32_t)0x492492;
	ADC1->SMPR2 = (uint32_t)0x12492492;
	//Wakeup ADC
	ADC1->CR2 |= ADC_CR2_ADON;

	uint8_t channel=0;

	for (uint8_t i=0;i<USEDPINS;i++){
		if ((config.pin[i] == AnalogNoSmooth) || (config.pin[i] == AnalogLowSmooth) ||
				(config.pin[i] == AnalogMedSmooth) || (config.pin[i] == AnalogHighSmooth) ||
				(config.pin[i] == Analog2Button) ||
				(config.pin[i] == Analog2MouseX) || (config.pin[i] == Analog2MouseY) || (config.pin[i] == Analog2MouseWheel)) {
			if (channel < 6) {
				ADC1->SQR3 |= pins[i].pin_number << (5*channel); // for A0-A5
			} else {
				if (channel < 8){
					ADC1->SQR2 |= pins[i].pin_number << (5*(channel-6)); // for A6-A7
				} else {
					ADC1->SQR2 |= (pins[i].pin_number+8) << (5*(channel-6)); // for B0-B1
				}
			}
			channel++;
		}
	}
	ADC1->SQR1 |= (--channel) << 20;

	//Start ADC
	ADC1->CR2 |= ADC_CR2_ADON;
}

void sysclock_init(void) {
	//HSE on
	RCC->CR |= RCC_CR_HSEON;
	//Wait for HSE is ready
	while (!(RCC->CR & RCC_CR_HSERDY)) {};
	//Turn on prefetch flash buffer
	FLASH->ACR |= FLASH_ACR_PRFTBE;
	//Config for 2 cycles
	FLASH->ACR &= (uint32_t)((uint32_t)~FLASH_ACR_LATENCY);
	FLASH->ACR |= (uint32_t)FLASH_ACR_LATENCY_2;
	//PLL as system clock
	RCC->CFGR |= RCC_CFGR_SW_PLL;
	//AHB not divided
	RCC->CFGR |= RCC_CFGR_HPRE_DIV1;
	//APB1 divided by 2
	RCC->CFGR |= RCC_CFGR_PPRE1_DIV2;
	//APB2 not divided
	RCC->CFGR |= RCC_CFGR_PPRE2_DIV1;
	//ADC divided by 8
	RCC->CFGR |= RCC_CFGR_ADCPRE_DIV8;
	//HSE for PLL source
	RCC->CFGR |= RCC_CFGR_PLLSRC;
	//PLL multiplicator factor
	RCC->CFGR |= RCC_CFGR_PLLMULL9;
	//PLL on
	RCC->CR |= RCC_CR_PLLON;
	//Wait until PLL is on
	while(!(RCC->CR & RCC_CR_PLLRDY)) {};


	//USB clock enable
	RCC->APB1ENR |= RCC_APB1ENR_USBEN;

	//SysTick
	SysTick_Config(72000);
	SysTick->CTRL |= SYSTICK_CLKSOURCE_HCLK;

	NVIC_init();

}


void NVIC_init(void){
	   NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);
	  /* System interrupt init*/
	  /* MemoryManagement_IRQn interrupt configuration */
	  NVIC_SetPriority(MemoryManagement_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	  /* BusFault_IRQn interrupt configuration */
	  NVIC_SetPriority(BusFault_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	  /* UsageFault_IRQn interrupt configuration */
	  NVIC_SetPriority(UsageFault_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	  /* DebugMonitor_IRQn interrupt configuration */
	  NVIC_SetPriority(DebugMonitor_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	  /* SysTick_IRQn interrupt configuration */
	  NVIC_SetPriority(SysTick_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
}


void fill_buffer_4_axises(void) {
	  uint8_t Ainput=0;
	  uint8_t A2Binput=0;

	  for (uint8_t i=0;i<USEDPINS;i++) {
		  switch (config.pin[i]) {
		  	  case AnalogNoSmooth:		  processing_axises(Ainput++, 100, i); break;
		  	  case AnalogLowSmooth:	  	  processing_axises(Ainput++, 3, i); break;
		  	  case AnalogMedSmooth:		  processing_axises(Ainput++, 5, i); break;
		  	  case AnalogHighSmooth:	  processing_axises(Ainput++, 7, i); break;
		  	  case Analog2Button:		  processing_axises(Ainput++, 200+A2Binput++, i); break;
		  	  case Analog2MouseX:		  processing_axises(Ainput++, 101, i); break;
		  	  case Analog2MouseY:		  processing_axises(Ainput++, 102, i); break;
		  	  case Analog2MouseWheel:	  processing_axises(Ainput++, 103, i); break;
		  	  default:					  break;
		  }
	  }
}


void processing_axises(uint8_t Ainput, uint8_t Kstab, uint8_t i) {

	uint32_t curr = 0;
	uint32_t volatile optvalue =0;
	uint32_t volatile mapvalue=0;
	uint8_t endvalue;
	uint8_t Number_Axes=0;
	uint8_t button = Number_DigiButtons;
static	uint32_t AxisComboValue=0;
static uint8_t pincount=0;
static uint8_t Axis=0;

	Number_Axes=Number_Channels-config.analog_2_button_inputs-mouse_inputs-1;

	curr = ADC1Values[Ainput];
	sensor_report.sensor_value[Ainput] = ADC1Values[Ainput];

	if (Kstab == 100) optvalue = curr;
		else optvalue = fir_smoothing(curr,Ainput,Kstab);


	if (Kstab == 101) {
		int8_t mouse_x = (int8_t)map(curr, 0, 4095, MOUSEMIN, MOUSEMAX);
		if (abs(mouse_x) > MOUSE_THRESHOLD)		mouse_report.X_pos =  mouse_x;
			else mouse_report.X_pos = 0;
		return;
	}
	if (Kstab == 102) {
		int8_t mouse_y = (int8_t)map(curr, 0, 4095, MOUSEMIN, MOUSEMAX);
		if (abs(mouse_y) > MOUSE_THRESHOLD)		mouse_report.Y_pos = mouse_y;
			else mouse_report.Y_pos = 0;
		return;
	}
	if (Kstab == 103) {
		int8_t mouse_wheel = (int8_t)map(curr, 0, 4095, MOUSEMIN, MOUSEMAX);
		if (abs(mouse_wheel) > MOUSE_THRESHOLD)		mouse_report.mouse_wheel_pos = mouse_wheel;
			else mouse_report.mouse_wheel_pos = 0;
		return;
	}



	if (Kstab > 199) {
//		optvalue = (80 *(int32_t)(curr - ADC1Prevs_Values[Ainput]))/100 + ADC1Prevs_Values[Ainput];
//		ADC1Prevs_Values[Ainput] = optvalue;
		for (uint8_t i=0; i<(Kstab-200);i++){
			button += A2Bstore[i].buttons_number;
		}


		for (uint8_t j=0; j<A2Bstore[Kstab-200].buttons_number-1; j++){
			if ((optvalue > A2Bstore[Kstab-200].buttons_intervals[j]) && (optvalue < A2Bstore[Kstab-200].buttons_intervals[j+1])){
				SetButtonState(button,1,a2b_button);
			} else {
				SetButtonState(button,0,a2b_button);
			}
			button++;
		}
		if (optvalue > A2Bstore[Kstab-200].buttons_intervals[A2Bstore[Kstab-200].buttons_number-1]) {
			SetButtonState(button,1,a2b_button);
		} else {
			SetButtonState(button,0,a2b_button);
		}
		return;
	}


//	optvalue = (Kstab *(int32_t)(curr - ADC1Prevs_Values[Ainput]))/100 + ADC1Prevs_Values[Ainput];

	if (config.axes[Axis].axis_autocalibrate == 1) {
		if (curr < config.axes[Axis].axis_min_calib_value) config.axes[Axis].axis_min_calib_value = curr;
		if (curr > config.axes[Axis].axis_max_calib_value) config.axes[Axis].axis_max_calib_value = curr;
	} else {
		if (optvalue < config.axes[Axis].axis_min_calib_value) optvalue = config.axes[Axis].axis_min_calib_value;
		if (optvalue > config.axes[Axis].axis_max_calib_value) optvalue = config.axes[Axis].axis_max_calib_value;
	}

//	ADC1Prevs_Values[Ainput] = optvalue;

	if (config.combined_axis_enabled) {
		Number_Axes-=2;
	if ((i == config.combined_axis_pin1) || (i == config.combined_axis_pin2)){
		pincount++;
		if (i == config.combined_axis_pin1) optvalue = map(optvalue, config.combined_axis1_mincalib_value, config.combined_axis1_maxcalib_value, 0, 4095);
			else optvalue = map(optvalue, config.combined_axis2_mincalib_value, config.combined_axis2_maxcalib_value, 0, 4095);
		if (config.combined_axis_cooperate) {
			if (i == config.combined_axis_pin1) endvalue=config.combined_axis_percent;
				else endvalue=100-config.combined_axis_percent;
			optvalue=(optvalue*endvalue)/100;
			if (pincount==1)  {
				AxisComboValue=optvalue;
//				ADC1Prevs_Values[Ainput] = optvalue;
				return; //not going to send axis value if not processed both inputs
			}
				else optvalue+=AxisComboValue;
		} else {
			if (pincount==1)  {
							AxisComboValue=optvalue;
//							ADC1Prevs_Values[Ainput] = optvalue;
							return; //not going to send axis value if not processed both inputs
						}
							else {
								if (AxisComboValue > optvalue) optvalue=AxisComboValue;
							}
		}
		//Axis=5;
		if (pincount==2) pincount=0;
		//Combined axis will be always on AXIS6
		mapvalue = map(optvalue, config.axes[5].axis_min_calib_value, config.axes[5].axis_max_calib_value, 0, 4095);
		gamepad_report.axis[5] = mapvalue;
		return;
	}
	}


	mapvalue = map(optvalue, config.axes[Axis].axis_min_calib_value, config.axes[Axis].axis_max_calib_value, 0, 4095);

	uint8_t  current_part = mapvalue/(MAX_ADC_RES/(SHAPEVALUES-1));

    int16_t  shpvalue = getSplinePoint(axes_shapes[config.axes[Axis].axis_profile][current_part],
    							axes_shapes[config.axes[Axis].axis_profile][current_part+1], mapvalue%(MAX_ADC_RES/(SHAPEVALUES-1)));
    if (shpvalue > MAX_ADC_RES) shpvalue = MAX_ADC_RES;
    if (shpvalue < 0) shpvalue = 0;


	gamepad_report.axis[Axis] = shpvalue;
	Axis++;

	if ((Axis > MAX_AXES-1) || (Axis > Number_Axes)) Axis=0;
}


uint32_t map(uint32_t x, uint32_t in_min, uint32_t in_max, uint32_t out_min, uint32_t out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

uint16_t getSplinePoint(uint16_t p1, uint16_t p2, uint16_t distance){
	return (p1 + ((p2 - p1)*distance)/(MAX_ADC_RES/(SHAPEVALUES)));
}

uint16_t fir_smoothing(uint16_t orig_value, uint16_t input, uint8_t window_size){
	uint16_t smooth_value = 0;
	static uint16_t adc_store[ADC_BUFF_SIZE][FIRMAXWINDOWSSIZE] = {0};

	for (uint8_t i=0;i<window_size-1;i++) {
		adc_store[input][i] = adc_store[input][i+1];
		if (window_size == 3)
			smooth_value += FIR3_coeff[i] * adc_store[input][i] / 10;
		if (window_size == 5)
			smooth_value += FIR5_coeff[i] * adc_store[input][i] / 10;
		if (window_size == 7)
			smooth_value += FIR7_coeff[i] * adc_store[input][i] / 10;

	  }
	adc_store[input][window_size-1] = orig_value;

	if (window_size == 3)
		smooth_value += FIR3_coeff[window_size-1] * adc_store[input][window_size-1] / 10;
	if (window_size == 5)
		smooth_value += FIR5_coeff[window_size-1] * adc_store[input][window_size-1] / 10;
	if (window_size == 7)
		smooth_value += FIR7_coeff[window_size-1] * adc_store[input][window_size-1] / 10;



	adc_store[input][window_size-1] = smooth_value;
	smooth_value = adc_store[input][window_size/2];

	return smooth_value;
}
