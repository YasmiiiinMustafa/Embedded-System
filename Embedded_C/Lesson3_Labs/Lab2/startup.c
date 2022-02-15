 // startup.c
//Eng.Yasmin Mostafa


#include <stdint.h>


void reset_handler();
extern int main(void);  
void default_handler();

void NMI_Handler(void) __attribute__((weak,alias("default_handler")));;
void H_faulg_Handler(void) __attribute__((weak,alias("default_handler")));;
void MM_fault_Handler(void) __attribute__((weak,alias("default_handler")));;
void Bus_Handler(void) __attribute__((weak,alias("default_handler")));;
void Usage_Fault_Handler(void) __attribute__((weak,alias("default_handler")));;

extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss;
extern unsigned int _stack_top;

uint32_t vectors[] __attribute__((section(".vectors"))) = {
(uint32_t) &_stack_top,
(uint32_t) &NMI_Handler,
(uint32_t) &H_faulg_Handler,
(uint32_t) &MM_fault_Handler,
(uint32_t) &Bus_Handler,
(uint32_t) &Usage_Fault_Handler
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

void default_handler()
{
reset_handler();
}
