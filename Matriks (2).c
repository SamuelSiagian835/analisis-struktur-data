// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang
// 12S21042 - Samuel Siagian


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, k;              //melakukan pembuatan variabel 
  int m1, n1, m2, n2;       //melakukan pembuatan variabel 
  int total = 0;            //melakukan pendefenisian total = 0

  printf("Jumlah baris matriks pertama: ");     //melakukan pemanggilan Jumlah m1
  scanf("%d", &m1);
  printf("Jumlah kolom matriks pertama: ");     //melakukan pemanggilan Jumlah n1
  scanf("%d", &n1);

  printf("Jumlah baris matriks kedua: ");       //melakukan pemanggilan Jumlah m2
  scanf("%d", &m2);
  printf("Jumlah kolom matriks kedua: ");       //melakukan pemanggilan Jumlah n2
  scanf("%d", &n2);

  int mat1[m1][n1], mat2[m2][n2], akhir[m1][n2];        //melakukan pendefenisian untuk matriks 1, 2 dan akhir

  if (n1 != m2)                             //melakukan branching jika n1 tidak sama dengan m2
  { 
    exit(0);                                //menghentikan program
  }
  else                                      //jika pernyataan diatas tidak memenuhi maka program akan dialanjutkan ke else
  {
    printf("Elemen matriks pertama: \n");   //melakukan pemanggilan terhadap elemen matriks pertama
    for (i = 0; i < m1; i++)                //looping for terhadap i
    {
      for (j = 0; j < n1; j++)              //looping for terhadap j
      {
        scanf("%d", &mat1[i][j]);           //memasukkan inputan matriks pertama
      }
    }

    printf("Elemen matriks kedua: \n");     //melakukan pemanggilan terhadap elemen matriks kedua
    for (i = 0; i < m2; i++)                //looping for terhadap i
    {
      for (j = 0; j < n2; j++)              //looping for terhadap j
      {
        scanf("%d", &mat2[i][j]);           //memasukkan inputan matriks kedua
      }
    }

    for (i = 0; i < m1; i++)                //looping for terhadap i
    {
      for (j = 0; j < n2; j++)              //looping for terhadap j
      {
        for (k = 0; k < m2; k++)            //looping for terhadap k
        {
          total = total + mat1[i][k] * mat2[k][j];      //melakukan pencarian total dengan mengalikan matriks pertama dan menjumlahkannya
        }
        akhir[i][j] = total;                            //pendefenisian terhadap indeks i dan j dengan = total
        printf("%d\n", akhir[i][j]);                    //pemanggilan akhir dengan indeks i dan j
        total = 0;                                      //membuat pendefenisian total = 0
      }
    }

    printf("Jawaban Matriks\n\n");                      //pemanggilan jawaban matriks dengan\n
    for (i = 0; i < m1; i++)                            //looping for i
    {
      for (j = 0; j < n2; j++)                          //looping for j
      {
        printf("%d\t", akhir[i][j]);                    //pemanggilan hasil akhir lalu pemberian spasi
      }
      printf("\n");                                     //membuat hasil berpindah ke bawah
    }
  }
  return 0;                                             //menghentikan program
}