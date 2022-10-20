get_precision.c

Who has access

O

System properties

Type

C

Size

729 bytes

Storage used

729 bytes

Location

printf

Owner

Ojo Samuel

Modified

Oct 19, 2022 by Ojo Samuel

Opened

11:10 AM by me

Created

Oct 19, 2022

No description

Viewers can download

#include "main.h"



/**
 *
 *  * get_precision - Calculates the precision for printing
 *
 *   * @format: Formatted string in which to print the arguments
 *
 *    * @i: List of arguments to be printed.
 *
 *     * @list: list of arguments.
 *
 *      *
 *
 *       * Return: Precision.
 *
 *        */

int get_precision(const char *format, int *i, va_list list)

{

		int curr_i = *i + 1;

			int precision = -1;



				if (format[curr_i] != '.')

							return (precision);



					precision = 0;



						for (curr_i += 1; format[curr_i] != '\0'; curr_i++)

								{

											if (is_digit(format[curr_i]))

														{

																		precision *= 10;

																					precision += format[curr_i] - '0';

																							}

													else if (format[curr_i] == '*')

																{

																				curr_i++;

																							precision = va_arg(list, int);

																										break;

																												}

															else

																			break;

																}



							*i = curr_i - 1;



								return (precision);

}
