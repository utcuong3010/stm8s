/* Define to prevent recursion include */
#ifndef __MY_LIB_H
#define __MY_LIB_H

#include "stm8s.h"

void CLK_CONFIG_16MHZ_HSE(void);
void Delay_Using_Timer4_Init(void);
void Delay_ISR(void);
void Delay_ms(uint32_t time);


// End if define
#endif


