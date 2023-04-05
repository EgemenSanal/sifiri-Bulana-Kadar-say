#include <stdio.h>
#include <stdlib.h>

int SifiriBulanaKadar(int sayi1,int sayi2){
	
	int i = 0;
	
	while(sayi1 !=0 && sayi2 != 0){ // 1. veya 2. sayi 0 degilse dongu devam eder.Eger sayi1 sayi2 den buyukse sayi1 den sayi2 yi cikarir degilse tam tersini yapar.2 sayidan biri 0 olursa dongu durur
		
		if(sayi1 >= sayi2){
			sayi1 -=sayi2;
		}else{
			sayi2-=sayi1;
		}
		
		i++;
	}
	return i;
	
}

int main(){
	
	int a,b;
	printf("2 TANE DEGER GIRINZ\n");
	scanf("%d %d",&a,&b);
	
	printf("Sifiri Bulmak Icin Yapilan Islem Sayisi = %d \n",SifiriBulanaKadar(a,b));
	
	
	
	
	
	return 0;
}
