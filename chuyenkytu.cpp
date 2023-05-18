#include<stdio.h>
//Dua chu cai viet hoa thanh chu viet thuong
main(void){
	char c;
	printf("Viet 1 ky tu: ");
	scanf("%c",&c);
	if(c >= 'A' && c <= 'Z'){
		printf ("Ky tu viet thuong la: %c", c + 'a'- 'A');
		
	}
	else 
	printf ("Ky tu da nhap la %c",c);
}
