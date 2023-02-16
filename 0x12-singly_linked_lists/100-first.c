#include "lists.h"

/**
 * execute_before_main_function - executed before the main function
 */
void __attribute__ ((constructor)) execute_before_main_function()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
