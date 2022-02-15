#include"uart.h"

unsigned char string_buffer[100]= "learn-in-depth:yasmin";
unsigned char const string_buffer2[100]= "learn-in-depth:yasmin";

void main (void)
{
uart_send_string(string_buffer);
}