#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    /*int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};*/
    int array[] = {13, 7};
    size_t n = 4/*sizeof(array) / sizeof(array[0])*/;
    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}