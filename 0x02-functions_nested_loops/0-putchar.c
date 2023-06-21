#include<unistd.h>

/**
 * writes the caracter c to stdout
 * Return:on Success 1.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
