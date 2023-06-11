#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i, j, rows, cols;
  int **array = NULL;

  printf("Jumlah baris = ");
  scanf("%d", &rows);
    
  printf("Jumlah kolom = ");
  scanf("%d", &cols);

  array = (int **)malloc(rows * sizeof(int *));
  if (array == NULL)
  {
    printf("Alokasi memory array = null \n");
    exit(0);
  }

  for (i = 0; i < rows; i++)
  {
    array[i] = (int *)malloc(cols * sizeof(int));
    if (array == NULL)
    {
      printf("Alokasi memory array = null\n");
      exit(0);
    }
  }
  printf("\nEntri elemen matriks\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      scanf("%d", &array[i][j]);
    }
  }

  printf("\nTampilkan elemen matriks\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      printf("%d\t", array[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < rows; i++)
  {
    free(array[i]);
  }
  free(array);

  return 0;
}