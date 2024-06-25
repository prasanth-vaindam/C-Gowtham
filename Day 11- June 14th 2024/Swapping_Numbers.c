#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two Numbers: ");
	scanf("%d%d",&a, &b);
	printf("Actual Values: ");
	printf("a:%d b:%d\n",a,b);
	
	// Logic for swapping
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("After Swapping Values: ");
	printf("a:%d b:%d\n",a,b);
	
	return 0;
}
