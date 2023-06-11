#include <stdio.h>

int aVar = 10;
int *aPtr;
int main()
{
    aPtr = &aVar;
    printf("\nAlamat memori ditunjuk *Ptr = %d", aPtr);
    printf("\nAlamat memori variabel &aVar = %d\n", &aVar);

    printf("\nAkses langsung (aVar ) : aVar = %d", aVar);
    printf("\nAkses tak langsung (*aPtr ) : aVar = %d\n", *aPtr);
}