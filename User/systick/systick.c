#include "systick.h"


void Systick_Init(void)
{
	/* SystemCoreClock / 1000    1ms�ж�һ��
	 * SystemCoreClock / 100000	 10us�ж�һ��
	 * SystemCoreClock / 1000000 1us�ж�һ��
	 * static __INLINE uint32_t SysTick_Config(uint32_t ticks)��core_cm3.h�ж��壬����������ת�ؼĴ�����ֵ��
	 * ����Ҳ�����ж����ȼ����á�
	*/
	if(SysTick_Config(SystemCoreClock/1000))
	{
		while(1);
	}
}

