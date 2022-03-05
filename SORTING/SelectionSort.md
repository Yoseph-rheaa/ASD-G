# ASD-G
Yoseph Rhema Setiawan / 672021051 / ASD-G

![selection](https://user-images.githubusercontent.com/98729975/156886430-49091c48-1a4c-4d6f-b8b4-5e0e2c010afb.png)

#include <stdio.h>

int selectionSort(int array1[], int n){

  int i, j, posisi, swap;
  
  for(i = 0; i < (n-1); i++){
  
    posisi = i;
    
    for (j = i + 1; j < n; j++){
    
      if(array1[posisi] > array1[j]){
      
        posisi = j;
        
      }
      
    }
    
    if(posisi != i){
    
      swap = array1[i];
      
      array1[i] = array1[posisi];
      
      array1[posisi] = swap;
      
    }
    
  }
  
}

int main(){

  int array[100], n, i, j;
  
  printf("Masukkan Jumlah Data Yang Diinginkan: ");
  
  scanf("%d", &n);
  
  printf("Masukkan data sebanyak %d :\n", n);
  
  for(i = 0; i < n; i++){
  
    scanf("%d", &array[i]);
    
  }
  
  selectionSort(array, n);
  
  printf("Hasil Pengurutan Bilangan Sebagai Berikut:\n");
  
  for(i = 0; i < n; i++){
  
    printf("%d ", array[i]);
    
  }
  
  printf("\n");
  
}
