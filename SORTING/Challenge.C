#include <stdio.h>
void bubbleSort(int array1[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j ++){
      if(array1[j] > array1[j+1]){
        tmp = array1[j];
        array1[j] = array1[j+1];
        array1[j+1] = tmp;
      }
    }
  }
}
int main() {
  int array[100], n, i, j;
  printf("Masukkan Banyak elemen: ");
  scanf("%d", &n);
  printf("Masukkan Nilai: ");
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  bubbleSort(array, n);
  printf("Hasil Pengurutan Sebagai Berikut:\n");
  for(i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}
