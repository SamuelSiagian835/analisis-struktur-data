#include <stdio.h>
#include <stdlib.h>

struct node
{
  elementtype element;
  position next;
};

list construct(list l)
{
  l=malloc(sizeof(struct node));
  if (l==NULL)
  {
    printf("Memori kosong dan tidak dapat dialokasi!!");
  }
  l->next=NULL;
  return l;
}

position header(list l)
{
  return l;
}

void insert(elementtype x, list l, position p)
{
  position tmpcell;
  tmpcell=malloc(sizeof(struct node));
  if (tmpcell==NULL)
  {
    printf("Out of space!!");
  }
  tmpcell->element=x;
  tmpcell->next=p->next;
  p->next=tmpcell;
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
  return p->next==NULL;
}

position find(elementtype x, list l)
{
  position p=l->next;
  while (p->element!=x && p!=NULL)
  {
    p=p->next;
  }
  return p;
}

void update(elementtype x, position p)
{
  p->element=x;
}

position findprevious(elementtype x, list l)
{
  position p=l;
  while (p->next!=NULL && p->next->element!=x)
  {
    p=p->next;
  }
  return p;
}

int isempty(list l)
{
  return l->next==NULL;
}

void delete(elementtype x, list l)
{
  position p=NULL, tmpnode=NULL;
  if (!isempty(l))
  {
    p=findprevious(x, l);
  }
  if (p!=NULL)
  {
    tmpnode=p->next;
    p->next=tmpnode->next;
    free(tmpnode);
  }
}

void deletelist(list l)
{
  position p=NULL, tmpnode=NULL;
  p=l;
  tmpnode=p->next;
  while (tmpnode!=NULL)
  {
    p->next=tmpnode->next;
    free(tmpnode);
    tmpnode=p->next;
  }
}