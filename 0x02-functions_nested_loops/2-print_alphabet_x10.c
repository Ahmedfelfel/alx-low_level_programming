#include "main.h"
/**
*main-print_alphabet_x10
*Return: always 0
**/
void print_alphabet(void)
{
char c, i;
for (i=0;i<10;i++)
  {
   for (c='a';c<='z';c++)
     {
      _putchar(c);
     }
_putchar('\n');
  }
}
