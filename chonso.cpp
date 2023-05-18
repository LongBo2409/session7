#include<stdio.h>
main(){
	int x ;
	x = 0;
	printf("Nhap vao mot so tu 1 - 3: ");
	scanf("%d",&x);
	if (x == 1){
		printf("Lua chon la 1! ");
	}
	else if (x == 2){
		printf("Lua chon la 2! "); 
	}
	else if (x == 3){
		printf("Lua chon la 3! "); 
	}
	else
		printf("Lua chon sai so! ");
	return 0;
}
