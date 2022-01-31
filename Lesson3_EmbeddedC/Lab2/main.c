
#include<stdint.h>
typedef volatile unsigned int  vuint32_t;

#define RCC_base 0x40021000
#define portA_base 0x40010800
#define RCC_APB2ENR *((volatile uint32_t*)(RCC_base + 0x18))
#define GPIO_CRH  *((volatile uint32_t*)(portA_base + 0x04))
#define GPIO_ODR *((volatile uint32_t*)(portA_base + 0x0c))


typedef union {
          vuint32_t  all_fields;
          struct{
          vuint32_t     reserved:13;
          vuint32_t     p_13:1;
            } pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(portA_base +0x0c);

int main(void)
{
	RCC_APB2ENR |=(1<<2);
	GPIO_CRH &=0xff0fffff;
	GPIO_ODR |=0x00200000;
    /* Loop forever */
	while(1)
	{       
                int i;
		R_ODR-> pin.p_13=1;
		for(i=0; i<5000;i++);
	
		R_ODR-> pin.p_13=0;
		for(i=0;i<5000;i++);

		return 0;
	}
}