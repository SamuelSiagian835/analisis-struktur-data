#include<stdio.h>
#include<stdlib.h>

double *perkalianElemenMatriks(double *v1, double *v2, int elements);

int main(){
    double v1[4] = {1,2,3,4};
    double v2[4] = {9,8,7,6};
    double hasil[4], *pointer = NULL;
    int i;

    pointer = perkalianElemenMatriks(v1, v2, 4);

    for(i = 0; i < 4; i++){
        hasil[i] = *pointer;
        *pointer++;
    }
    printf("hasil = (");
    for(i = 0; i < 4; i++){
        printf("%.0f,", hasil[i]);
    }
    printf(")\n");
}
 
double *perkalianElemenMatriks(double *v1, double *v2, int elements){
    int i;
    double *hasil;

    hasil = (double *)malloc(elements*sizeof(double));
    while(i < elements){
        hasil[i] = *v1* *v2;
        v1++;
        v2++;
        i++;
    }
    return hasil;
 }