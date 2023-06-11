// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang
// 12S21042 - Samuel Siagian

typedef int elementtype;

struct node;
typedef struct node *ptrtonode;
typedef ptrtonode list;
typedef ptrtonode position;

list construct(list l);
void insert(elementtype x, list l, position p);

position header(list l);
position advance(position p);
position previous(position p);

elementtype retreive(position p);

int islast(position p, list l);

position find(elementtype x, list l);
position findKth(int index, list l);

void update(elementtype x, position p);
position findprevious(elementtype x, list l);
void delete(elementtype x, list l);
int isempty(list l);
void deletelist(list l);