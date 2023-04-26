#include <limits.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        int r;

        r = print_sign(98);
        if (r > 0)
                _putchar('+');
        else if (r == 0)
                _putchar('0');
        else
                _putchar('-');
        _putchar('\n');
        return (0);
}

