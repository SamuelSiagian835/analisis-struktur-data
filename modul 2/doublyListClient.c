// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang
// 12S21042 - Samuel Siagian

#include <stdio.h>
#include <stdlib.h>
#include "2list.h"

void printlist(const list l);

void printlist(const list l)
{
  position p = NULL;
  p = header(l);
  do
  {
    p = advance(p);
    printf("%d ", retreive(p));
  } while (!islast(p, l));
  printf("\n");
}

int main(int argc, char *argv[])
{
  list l = NULL;
  position p = NULL;

  l = construct(l);
  p = header(l);

  insert(77, l, p);
  printlist(l);

  p = advance(p);
  insert(100, l, p);
  printlist(l);

  p = advance(p);
  insert(277, l, p);
  printlist(l);

  p = advance(p);
  insert(377, l, p);
  printlist(l);

  p = advance(p);
  insert(477, l, p);
  printlist(l);

  if ((p = find(477, l)) != NULL)
  {
    printf("Pencarian Berhasil, nilai %d ditemukan \n\n", retreive(p));
    update(500, p);
    printf("Elemen dengan nilai 477 telah dupdate menjadi 500\n");
    printlist(l);
  }

  printf("\nDelete elemen dengan nilai 500\n");
  delete (500, l);
  printlist(l);

  deletelist(l);
  printlist(l);
  free(p);
  free(l);

  return 0;
}