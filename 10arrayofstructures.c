#include<stdio.h>
#include <stdlib.h>

struct student{
    int nim;
    char *name;
    char *prodi;
};
struct student *addStudent(int nim, char*name, char *prodi);

int main(){
    int main ,i;
    struct student **lstStu;

    for (i = 0; i < 2; i++)
    lstStu = malloc(2*sizeof(struct student *));

    lstStu[0] = addStudent(111423451, "ucok lambok", "S1 IF");
    lstStu[1] = addStudent(111423452, "butet sangap", "S1 SI");

    for(i = 0; i < 2; i++){
        printf("Mahasiswa ke-%d\n", i);
        printf("\tNim   :%d\n", lstStu[i]->nim);
        printf("\tNama   :%s\n", lstStu[i]->name);
        printf("\tProdi   :%s\n", lstStu[i]->prodi);
    }
    for(i = 0; i < 2; i++){
        free(lstStu[i]);
    }
    free(lstStu);
    return 0;
}

struct student *addStudent(int nim, char *name, char *prodi){
    struct student *temp = malloc(sizeof(struct student));
    temp-> nim = nim;
    temp->name = name;
    temp->prodi = prodi;
    return temp;
}