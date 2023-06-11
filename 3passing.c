#include <stdio.h>
#define jlh_bln 12

void printArray(float *array, int arrayLength);
float anggaran[jlh_bln];

int main (){
    int i = 0;
    int arrayLength;

    while(i < jlh_bln){
        printf("Anggaran bulan ke-%d = ", i+1);
        scanf("%f", &anggaran[i]);
        i++;
    }
    arrayLength = sizeof(anggaran)/sizeof(float);
    printArray(anggaran, arrayLength);

    return 0;
}

void printArray(float *array, int arrayLength){
    int j;
    printf("\n");
    for (j = 0; j< arrayLength; j++){
        printf("Elemen anggaran[%d] = %.1f\n", j, *array++);
    }
}