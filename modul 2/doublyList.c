// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang
// 12S21042 - Samuel Siagian

#include <stdio.h>
#include <stdlib.h>
#include "2list.h"

struct node
{
  elementtype element;
  position next;
  position before;
};

list construct(list l)
{
  l = malloc(sizeof(struct node));
  if (l == NULL)
  {
    printf("Memori kosong dan tidak dapat dialokasi!!");
  }
  l->next = NULL;
  l->before = NULL;
  return l;
}

position header(list l)
{
  return l;
}

void insert(elementtype x, list l, position p)
{
  position tmpcell;
  tmpcell = malloc(sizeof(struct node));
  if (tmpcell == NULL)
  {
    printf("Out of space!!");
  }
  tmpcell->element = x;
  tmpcell->next = p->next;
  tmpcell->before = p->before;
  p->next = tmpcell;
  if (p->before == NULL)
  {
    p->before = findprevious(x, l);
  }
  else
  {
    p->before = previous(p);
  }
}

position previous(position p)
{
  return p->before;
}

position advance(position p)
{
  return p->next;
}

elementtype retreive(position p)
{
  return p->element;
}

int islast(position p, list l)
{
  return p->next == NULL;
}

position find(elementtype x, list l)
{
  position p = l->next;
  while (p->element != x && p != NULL)
  {
    p = p->next;
  }
  return p;
}

void update(elementtype x, position p)
{
  p->element = x;
}

position findprevious(elementtype x, list l)
{
  position p = l;
  while (p->next != NULL && p->next->element != x)
  {
    p = p->next;
  }
  return p;
}

int isempty(list l)
{
  return l->next == NULL;
}

void delete (elementtype x, list l)
{
  position p = NULL, tmpnode = NULL;
  if (!isempty(l))
  {
    p = findprevious(x, l);
  }
  if (p != NULL)
  {
    tmpnode = p->next;
    p->next = tmpnode->next;
    free(tmpnode);
    p->before = findprevious(x, l);
  }
}

void deletelist(list l)
{
  position p = NULL, tmpnode = NULL;
  p = l;
  tmpnode = p->next;
  while (tmpnode != NULL)
  {
    p->next = tmpnode->next;
    free(tmpnode);
    tmpnode = p->next;
  }
}

position findKth(int index, list l)
{
  position p = NULL;
  p = l->next;
  for (int idx = 1; i <= index; i++)
  {
    p = p->next;
  }
  return p;
}