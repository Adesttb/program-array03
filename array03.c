#include <stdio.h>
#define Nmaks 100
typedef int arrayInt[Nmaks];


void bacaArray(arrayInt A, int n);
void tulisArray(arrayInt A, int n);
void hitungArray(arrayInt A, int n, float *u);

main()
{
  arrayInt A;
  int k;
  int n;
  float u;

  printf("Jumlah data array : ");
  scanf("%d", &n);
 
  printf("Baca data :\n");
  bacaArray(A,n);
 
  printf("Tulis data :\n");
  tulisArray(A,n);

  hitungArray(A,n,&u);
  printf("Rata-rata data = %.2f\n", u);
}

void bacaArray(arrayInt A, int n)
{
  int i;

  for(i=0; i<n; i++)
    {
      printf("Nilai A[%d] : ", i);
      scanf("%d", &A[i]);
    }
}

void tulisArray(arrayInt A, int n)
{
  int i;
 
  for (i=0; i<n; i++)
    printf("A[%d] = %d\n", i, A[i]);
}

void hitungArray(arrayInt A, int n, float *u)
{
  int i;
  float jumlah;
 
  i = 1;
  jumlah = 0;
  for(i=0; i<n; i++)
    jumlah = jumlah + A[i];

  *u = jumlah/n;

}