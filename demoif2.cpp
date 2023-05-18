#include<stdio.h>
main (void){
	int x , y;
	x = y = 0;
	printf ("Hay chon so 1 - 3: ");
	scanf ("%d", &x);
	if ( x == 1){
		printf(" OK");
		printf(" \nNhap tiep gia tri cua y tu 1 - 5: ");
		scanf ("%d", &y);
		if (y <= 5){
			printf (" Gia tri cua y la: %d ", y);
		}
		else
		printf (" Qua gioi han roi! ");
		
	}
	else 
	printf ("Khong phai so 1! ");
}

