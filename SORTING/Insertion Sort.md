# ASD-G
Yoseph Rhema Setiawan / 672021051 / ASD-G

![Insert Sort](https://user-images.githubusercontent.com/98729975/156887544-050f7cef-8b62-440c-a2a3-678c002e646c.png)

#include <stdio.h>

int main(){

  int n, array[100], i, j, tmp;
  
  printf("Masukkan jumlah banyaknya data: ");
  
  scanf("%d", &n);
  
  printf("Masukkan %d angka integer\n", n);
  
  for(i = 0; i < n; i++){
  
    scanf("%d", &array[i]);
    
  }
  
  for (i = 1; i <= n; i++){
  
    j = i;
    
    while(j > 0 && array[j-1] > array[j]){
    
      tmp = array[j];
      
      array[j] = array[j-1];
      
      array[j-1] = tmp;
      
      j--;
      
    }
    
  }
  
  printf("Hasil pengurutan sebagai berikut:\n");
  
  for (i = 0; i <= n-1; i++){
  
    printf("%d ", array[i]);
    
  }
  
  printf("\n");
  
  return 0;
  
}
