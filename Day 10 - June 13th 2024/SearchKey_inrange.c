#include<stdio.h>
int main()
{
	int key; 
	
	// you are reading a number from the user
	printf("Please enter the number: ");
	scanf("%d", &key);

	if((key>=1) && (key<=100)){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
