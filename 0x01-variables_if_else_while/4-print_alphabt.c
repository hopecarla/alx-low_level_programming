#include <stdio.h>
/**
*main -main function
*
* Return: always 0
*/
int main(void)
{
        char p;

        for (p = 'a'; p <= 'z'; p++)
        {
        if (p != 'q' && p != 'e')
                putchar(p);
        }
        putchar('\n');
        return (0);
}
