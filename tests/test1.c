#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
    int len2;

    /* len = _printf(NULL); */
    len2 = _printf(NULL);
    _printf("%");
    fflush(stdout);
    printf("%d\n", len2);
    /*     if (len != len2)
        {
            printf("Lengths differ.\n");
            fflush(stdout);
            return (1);
        } */
    return (0);
}