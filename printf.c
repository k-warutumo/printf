#include "main.h"
#include <stdarg.h>


int _printf(const char *format, ...);
{
	int jambo = 0;/*an int initialised to 0 since funct returns numb of*/
			/*characters  printed*/

	va_list(list_of_argu, format)

		if (format == NULL)
		{
			return (-1);
		}

	va_start(list_of_argu, format)

		while (*format)/*loop iterates thru all char of the str */
		{

		if (format != '%')/*check if char is not % */
		{
			write(1, format, 1);/*write to std outptu i.e print*/
				jambo++;
		}

		else/*if the 1st char in format is % */
		{
			format++;/*skip % and  move to next charater*/

		if (format == '\0')/*exclude the end byte as per instruction */
				break;
			if (format == '%')/*chechcks and handles % character */
				write(1, format, 1);/*to print a second % i.e %% */
				jambo++;


			else if (*format == 'c')/* checks and handles %C character */
					{
						char c = va_arg(list_of_argu, int);

						write(1, &c, 1);
						jambo++;
					}


			else if (*format == 's')/*checks and handles %s charateres*/
				{
						char *str = va_arg(list_of_argu, char*);
						int str_len = 0;

						/*calculate lentgh of strin*/
			while (str[str_len] != '\0')
				str_len++;


						write(1, str, str_len);
						jambo += str_len;
					}


		}

		format++;
		}
va_end(list_of_argu);
return (jambo);
}


	va_start
	va_arg

