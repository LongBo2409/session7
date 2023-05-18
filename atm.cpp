#include<stdio.h>
main(){
	int cost, pin, choice;
	float tong = 5000000;
	
	printf ("Chao mung den voi internet banking!!! ");
	printf ("\nNhap vao ma PIN: ");
	scanf ("%d", &pin);
	if (pin == 2222){
		printf ("Menu\n");
		printf ("1. Chuyen tien\n");
		printf ("2. Rut tien\n");
		scanf ("%d", &choice);
		switch(choice){
			case 1:
				printf ("Nhap vao so tien can chuyen: ");
				scanf ("%d", &cost);
				 
				if(cost > tong)
				printf ("Ko co du so du\n");
				else
				tong -= cost;
				printf ("Chuyen tien thanh cong!");
				printf ("So tien con lai trong tai khoan la %.1f\n",tong);
				
			case 2:
				printf ("Nhap vao so tien can rut: ");
				scanf ("%d", &cost);
				
				if(cost > tong)
				printf ("Ko co du so du\n");
				else
				tong -= cost;
				printf ("Rut tien thanh cong!");
				printf ("So tien con lai trong tai khoan la %.1f\n",tong);
		}
	}
	else 
		printf ("Ma PIN sai\n");
	return 0;	
}
