#include<stdio.h>
int main(){
    int array_a[9]={0,3,6,9,18,36,72,144,288};
    int i, cari, flag=0;
    printf("Masukan data yang ingin dicari : ");
    scanf("%i",&cari);
    for(i=0;i<9;i++){
        if(array_a[i]==cari){
            flag=1;
            break;
        }
    }
    if(flag==1) printf("Data yang anda cari ditemukan pada index ke-%i",i);
    else printf("Data yang anda cari tidak ditemukan!");
}