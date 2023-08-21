#include "main.h"
#include <stdarg.h>


int _printf(const char *format, ...);
{
	int jambo = 0;/*char to print*/

	va_list(list_of_argu, format)
	while(*format)
		if(format =! '%')/*check if special char */
		{
			write(1, format, 1);
				jambo++;
		}
		else/*move to the next char */
		{
			format++;
		}
		if(format == '\0')/*exclude the end byte as per instruction */
		{
			break;
		}
		if(format == c)
		{
			write(1, format, 1);
		}
		if(format == s)
		{
			write(1, format, 1);
		}



	va_start
	va_arg	

