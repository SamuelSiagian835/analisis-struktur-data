#include <stdio.h>

int main(int argc, char *argv[]){
    int a = 100;
    int *ptr = &a;
    int **ptrToPtr = &ptr;

    **ptrToPtr = 200;
    
    printf("Value of a = **ptrToPtr = %d\n", **ptrToPtr);
    printf("Value of a = *ptr = %d\n", *`ptr);
    printf("Value of a = a = %d\n\n", a);

    printf("The address of a = &a = %p\n", a);
    printf("The address of a = ptr = %p\n", ptr);
    printf("The address of a = **ptrToPtr = %p\n\n", **ptrToPtr);

    printf("The address of ptr = &ptr = %p\n", &ptr);
    printf("The address of *ptr = ptrToPtr = %p\n", ptrToPtr);
    printf("The address of **ptrToPtr = &ptrToPtr = %p\n", &ptrToPtr);
}