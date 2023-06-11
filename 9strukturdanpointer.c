//Struktur dan pointer
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int nim;
    char *name;
    char *prodi;
};

struct student *addstudent(int nim, char *name, char *prodi);

int main(int argc, char const *argv[])
{
    struct student *ucok = addstudent(111423451, "ucok", "S1 SI ");
    printf("data ucok : \n");
    printf("\tnim       :%d\n", ucok->nim);
    printf("\tnama      :%s\n", ucok->name);
    printf("\tprodi     :%s\n", ucok->prodi);
    return 0;
}
struct student *addstudent(int id, char *nama, char *prodi)
{
    struct student *temp = malloc(sizeof(struct student));
    temp->nim = id;
    temp->name = nama;
    temp->prodi = prod;
    return temp;
}