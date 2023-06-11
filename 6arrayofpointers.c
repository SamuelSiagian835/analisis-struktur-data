#include <stdio.h>

void printStrings(char *pointer[], int n);

int main(){
    char *message[8] = { "C", "Programming", "is", "fun", "efficient", "and", "very", "challenging."};
    printStrings(message, 8);

}

void printStrings(char *pointer[], int n){
    int count;
    for(count = 0; count < n; count++)
    printf("%s ", pointer[count]);
    printf("\n");
}