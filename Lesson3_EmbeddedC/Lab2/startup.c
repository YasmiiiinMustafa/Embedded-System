 // startup.c
//Eng.Yasmin Mostafa


#include"platform_types.h"

void reset_handler();
extern int main(void);  // to know that main is already declared 34an el object mayz3l4 hnfhm leh b3den !!! 

void defualt_handler()
{
reset_handler();
}

void NMI_Handler(void) __attribute__((weak,alias("defualt_handler")));;
void H_faulg_Handler(void) __attribute__((weak,alias("defualt_handler")));;
void MM_fault_Handler(void) __attribute__((weak,alias("defualt_handler")));;
void Bus_Handler(void) __attribute__((weak,alias("defualt_handler")));;
void Usage_Fault_Handler(void) __attribute__((weak,alias("defualt_handler")));;

extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss;
extern unsigned int _stack_top;

uint32 vectors[] __attribute__((section(".vectors"))) = {
(uint32) &_stack_top,
(uint32) &NMI_Handler,
(uint32) &H_faulg_Handler,
(uint32) &MM_fault_Handler,
(uint32) &Bus_Handler,
(uint32) &Usage_Fault_Handler
};

void reset_handler()
{
//copy data from flash to ram 
unsigned int DATA_size = (unsigned char *)&_E_DATA -(unsigned char *)&_S_DATA;
unsigned char* p_src=(unsigned char*)&_E_text;
unsigned char* p_dst=(unsigned char*)&_S_DATA;
int i;
for(i =0; i<DATA_size;i++)
{
*((unsigned char *)p_dst++)=*((unsigned char *)p_src++);
}


//init bss section 
unsigned int bss_size = (unsigned char *)&_E_bss -(unsigned char *)&_S_bss;
p_dst=(unsigned char*)&_S_bss;

for(i =0; i<bss_size;i++)
{
*((unsigned char *)p_dst++)=(unsigned char) 0;
}



//JUMB MAIN
main();
}