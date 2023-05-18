#include<stdio.h>
main(void){
	// Kiem tra nam nhuan
	int year;
	printf ("Nhap vao 1 nam bat ky: ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		printf ("%d la nam nhuan! ", year);
	}
	else 
		printf ("%d ko phai nam nhuan! ",year);
		
}
