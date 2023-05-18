#include<stdio.h>
main(void){
	int a, b;
	printf("Nhap vao 1 so: ");
	scanf("%d",&a);
	b = a % 2;
	if (b == 0)
	printf ("%d la so chan! ", a);
	else 
	printf ("%d la so le! ", a);
}
