get_size.c

Who has access

O

System properties

Type

C

Size

461 bytes

Storage used

461 bytes

Location

printf

Owner

Ojo Samuel

Modified

Oct 19, 2022 by Ojo Samuel

Opened

11:12 AM by me

Created

Oct 19, 2022

No description

Viewers can download

#include "main.h"



/**
 *
 *  * get_size - Calculates the size to cast the argument
 *
 *   * @format: Formatted string in which to print the arguments
 *
 *    * @i: List of arguments to be printed.
 *
 *     *
 *
 *      * Return: Precision.
 *
 *       */

int get_size(const char *format, int *i)

{

		int curr_i = *i + 1;

			int size = 0;



				if (format[curr_i] == 'l')

							size = S_LONG;

					else if (format[curr_i] == 'h')

								size = S_SHORT;



						if (size == 0)

									*i = curr_i - 1;

							else

										*i = curr_i;



								return (size);

}
