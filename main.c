//////////////////////////////////////////////////////////////////////////
//  			Author:	afmha					//
//			Mail:	afmha@hotmail.com			//
//			Github:	https://github.com/afmha		//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(){
	
	//Değişkenler
	float a,b,c,d;
	int secim;
	//Değişkenler
	
	//Değişken Tanımlama
	a = 0;
	b = 0;
	c = 0;
	d = 1;
	//Değişken Tanımlama
	
	while(d=1){
		
		printf("Lutfen secim yapin:\n[1]\t=>\tToplama Islemi\n[2]\t=>\tCarpma Islemi\n[3]\t=>\tCikarma Islemi\n[4]\t=>\tBolme Islemi\n[5]\t=>\tCikis\n");
		scanf("%i",&secim);
		if(secim == 1){
			printf("1. Sayi:");
			scanf("%f",&a);
			printf("2. Sayi:");
			scanf("%f",&b);
			c = a + b;
			printf("Sonuc: %.2f",c);
			printf("\n");
		}else if(secim == 2){
			printf("1. Sayi:");
			scanf("%f",&a);
			printf("2. Sayi:");
			scanf("%f",&b);
			c = a * b;
			printf("Sonuc: %.2f",c);
			printf("\n");
		}else if(secim == 3){
			printf("1. Sayi:");
			scanf("%f",&a);
			printf("2. Sayi:");
			scanf("%f",&b);
			c = a - b;
			printf("Sonuc: %.2f",c);
			printf("\n");
		}else if(secim == 4){
			printf("1. Sayi:");
			scanf("%f",&a);
			printf("2. Sayi:");
			scanf("%f",&b);
			c = a / b;
			printf("Sonuc: %.2f",c);
			printf("\n");
		}else if(secim == 5){
			return 0;
		}else{
			printf("Secim iptal edildi.\n");
		}
		
	}
	
	return 0;
	
}
