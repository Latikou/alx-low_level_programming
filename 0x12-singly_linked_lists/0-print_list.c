#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
 size_t s = 0;
	
 while (h)
 {
 printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
 h = h->next;
 s++;
 }

 return (i);
}
