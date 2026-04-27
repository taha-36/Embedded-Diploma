#include "UART.h"
unsigned char string_buffer[100] = "learn_in_depth:Taha" ;
void main(void)
{
	UART_Send_String(&string_buffer[0]);
}