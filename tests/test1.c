#include "../main.h"
#include <stdio.h>

int main(void)
{
    int printed_chars;

    printed_chars = _printf("%c\n", 'A');
    printf("Number of characters printed: %d\n", printed_chars);

    return (0);
}
