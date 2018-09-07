/*
 * ----------------------------------------------------------------------------------
 * @file  		: periph_init.h
 * @author 		: Dmitry Skulkin <dmitry.skulkin@gmail.com>
 * @version		: 0.1
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

#ifndef PERIPH_INIT_H_
#define PERIPH_INIT_H_

#include <stm32f1xx.h>
#include <flash_store.h>
#include <usbd_def.h>

#define USEDPINS 32
#define AXISES 6
#define ADC_BUFF_SIZE 12
#define UNIQUEIDREG 0x1FFFF7E8


typedef enum {
	Not_Used = 0,
	AnalogNoSmooth = 1,
	AnalogLowSmooth = 2,
	AnalogMedSmooth = 3,
	AnalogHighSmooth = 4,
	Analog2Button = 5,
	Chain_Rotary_PINA = 6,
	Chain_Rotary_PINB = 7,
	Chain_Rotary_Enc_1 = 8,
	Chain_Rotary_Enc_2 = 9,
	Chain_Rotary_Enc_4 = 10,
	Single_Rotary_PINA_1 = 11,
	Single_Rotary_PINB_1 = 12,
	Single_Rotary_PINA_2 = 13,
	Single_Rotary_PINB_2 = 14,
	Single_Rotary_PINA_4 = 15,
	Single_Rotary_PINB_4 = 16,
	Button_ROW = 17,
	Button_COLUMN = 18,
	Button = 19,
	Button_GND = 20,
	RotSwPole = 21,
	RotSwWire = 22,
} pintype;


struct pin_conf {
		pintype pin_type;
		uint32_t * conf_reg_addr;
		uint32_t * bsrr_reg_addr;
		uint32_t * idr_reg_addr;
		uint8_t pin_number;
	};

struct rot_conf {
		pintype PINA_Type;
		pintype PINB_Type;
		uint32_t * PINA_IDR;
		uint32_t * PINB_IDR;
		uint16_t PINA;
		uint16_t PINB;
		uint16_t PINAmask;
		uint16_t PINBmask;
	};

struct axis_conf {
	uint8_t calib_min_lowbyte;
	uint8_t calib_min_hibyte;
	uint8_t calib_max_lowbyte;
	uint8_t calib_max_hibyte;
	uint8_t special;
	uint32_t calib_min;
	uint32_t calib_max;
};

struct rot_switches {
	uint8_t state;
	uint64_t timepressed;
};

void gpio_init(void);
void gpio_ports_config(void);
void adc_init(void);
void sysclock_init(void);
void NVIC_init(void);
void processing_axises(uint8_t axis, uint8_t Kstab, uint8_t i);
void fill_buffer_4_axises(void);
uint32_t map(uint32_t x, uint32_t in_min, uint32_t in_max, uint32_t out_min, uint32_t out_max);
void custom_usb_config(void);
uint8_t uint8_to_32(uint8_t value);

#endif /* PERIPH_INIT_H_ */
