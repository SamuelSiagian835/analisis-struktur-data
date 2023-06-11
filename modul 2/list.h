typedef int elementtype;        //membuat permisalan kalau elementype itu int

#ifndef _List_H                 //mengidentifikasi atau membuat file header idempoten 
#define _List_H                 //mendefenisikan konstanta

struct node;                    //
typedef struct node *ptrtonode;         //tipe data struct
typedef ptrtonode list;                 //tipe data 
typedef ptrtonode position;             //tipe data 

list construct(list l);                                 //fungsi untuk membuat List(header L)
void insert(elementtype x, list l, position p);         //fungsi untuk insert elemen

position header(list l);                                //fungsi untuk menset L sebagai header
position advance(position p);                           //ffungsi untuk memajukan pointer posisi ke node/elemen selanjutnya

elementtype retreive(position p);                       //fungsi untuk mendapatkan (mengambil) elemen pada posisi p

int islast(position p, list l);                         //fungsi untuk mencek apakah node/elemen pada posisi P merupakan node/elemen terakhir

position find(elementtype x, list l);

void update(elementtype x, position p);
position findprevious(elementtype x, list l);
void delete(elementtype x, list l);
int isempty(list l);
void deletelist(list l);

#endif      //penutup