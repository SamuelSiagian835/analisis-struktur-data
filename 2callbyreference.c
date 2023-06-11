#include <stdio.h>
#include <stdlib.h>

int angka1, angka2;
void swap(int *num1, int *num2);
int main (int argc, char *argv[])
{
    int *ptr1, *ptr2;
    angka1 = atoi(argv[1]);
    angka2 = atoi(argv[2]);

    printf("Angka 1 = %d\n", angka1);
    printf("Angka 2 = %d\n", angka2);

    ptr1 = &angka1;
    ptr2 = &angka2;

    swap(ptr1, ptr2);

    printf("\nAngka 1 = %d\n", angka1);
    printf("Angka 2 = %d\n", angka2);
   
    return 0;
}
void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}