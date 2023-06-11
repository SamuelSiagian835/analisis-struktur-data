#include <stdio.h>
#include <stdlib.h>

struct pegawai
{
  int id;
  char *namaawal;
  char *namatengah;
  char *namaakhir;
  char *kecamatan;
  char *kota;
  char *provinsi;
  int age;
  float salary;
};
struct pegawai *addPegawai(int id, char *namaawal, char *namatengah, char *namaakhir, char *kecamatan, char *kota, char *provinsi, int age, float salary);

int main(int argc, char *argv[], float argb)
{
  int i, jumlah, id, age;
  char namaawal[20];
  char namatengah[20];
  char namaakhir[20];
  char kecamatan[20];
  char kota[20];
  char provinsi[20];
  float salary;

  struct pegawai *karyawan = NULL;
  printf("Masukkan Jumlah data yang ingin diinput :");
  scanf("%d", &jumlah);

  if (jumlah > 1000)
  {
    exit(0);
  }
  for (i = 1; i <= jumlah; i++)
  {
    printf("\nINFORMASI PEGAWAI\n");
    printf("Masukkan id:");
    scanf("%d", &id);
    printf("Masukkan Nama Awal:");
    scanf("%s", &namaawal);
    printf("Masukkan Nama Tengah:");
    scanf("%s", &namatengah);
    printf("Masukkan Nama Akhir:");
    scanf("%s", &namaakhir);
    printf("Masukkan Kecamatan :");
    scanf("%s", &kecamatan);
    printf("Masukkan Kota :");
    scanf("%s", &kota);
    printf("Masukkan Provinsi :");
    scanf("%s", &provinsi);
    printf("Masukkan Usia :");
    scanf("%d", &age);
    printf("Masukkan Pendapatan :");
    scanf("%f", &salary);

    karyawan = addPegawai(id, namaawal, namatengah, namaakhir, kecamatan, kota, provinsi, age, salary);
    printf("\nID  :%d\n", karyawan->id);
    printf("Nama Awal:%s\n", karyawan->namaawal);
    printf("Nama Tengah:%s\n", karyawan->namatengah);
    printf("Nama Akhir:%s\n", karyawan->namaakhir);
    printf("Kecamatan :%s\n", karyawan->kecamatan);
    printf("Kota :%s\n", karyawan->kota);
    printf("Provinsi :%s\n", karyawan->provinsi);
    printf("Usia :%d\n", karyawan->age);
    printf("Pendapatan :%.2f\n\n", karyawan->salary);
  }

  int tambah;
  printf("Apakah anda ingin menambah informasi pegawai? (1/0):");
  scanf("%d", &tambah);

  if (tambah == 0)
  {
    exit(0);
  }
  else
  {
    struct pegawai *karyawan = NULL;
    printf("Masukkan Jumlah data yang ingin diinput :");
    scanf("%d", &jumlah);

    if (jumlah > 1000)
    {
      exit(0);
    }
    for (i = 1; i <= jumlah; i++)
    {
      printf("Masukkan id:");
      scanf("%d", &id);
      printf("Masukkan Nama Awal:");
      scanf("%s", &namaawal);
      printf("Masukkan Nama Tengah:");
      scanf("%s", &namatengah);
      printf("Masukkan Nama Akhir:");
      scanf("%s", &namaakhir);
      printf("Masukkan Kecamatan :");
      scanf("%s", &kecamatan);
      printf("Masukkan Kota :");
      scanf("%s", &kota);
      printf("Masukkan Provinsi :");
      scanf("%s", &provinsi);
      printf("Masukkan Usia :");
      scanf("%d", &age);
      printf("Masukkan Pendapatan :");
      scanf("%f", &salary);

      karyawan = addPegawai(id, namaawal, namatengah, namaakhir, kecamatan, kota, provinsi, age, salary);
      printf("\nID  :%d\n", karyawan->id);
      printf("Nama Awal:%s\n", karyawan->namaawal);
      printf("Nama Tengah:%s\n", karyawan->namatengah);
      printf("Nama Akhir:%s\n", karyawan->namaakhir);
      printf("Kecamatan :%s\n", karyawan->kecamatan);
      printf("Kota :%s\n", karyawan->kota);
      printf("Provinsi :%s\n", karyawan->provinsi);
      printf("Usia :%d\n", karyawan->age);
      printf("Pendapatan :%.2f\n\n", karyawan->salary);
    }
  }
  return 0;
}

struct pegawai *addPegawai(int id, char *namaawal, char *namatengah, char *namaakhir, char *kecamatan, char *kota, char *provinsi, int age, float salary)
{
  struct pegawai *temporary = malloc(sizeof(struct pegawai));
  temporary->id = id;
  temporary->namaawal = namaawal;
  temporary->namatengah = namatengah;
  temporary->namaakhir = namaakhir;
  temporary->kecamatan = kecamatan;
  temporary->kota = kota;
  temporary->provinsi = provinsi;
  temporary->age = age;
  temporary->salary = salary;
  return temporary;
}