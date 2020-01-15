

#include "my_lib.h"
#include "stm8s_clk.h"
/*
* Config with HSE 16Mhz
*/
void CLK_CONFIG_16MHZ_HSE(void)
{
    CLK_DeInit();// cancelled all intit clock previously
    CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
    CLK_ClockSwitchConfig(CLK_SWITCHMODE_AUTO, CLK_SOURCE_HSE, DISABLE, CLK_CURRENTCLOCKSTATE_DISABLE);
}