#include<stdio.h>
int main(){
	
	// read two numbers left limit and right limit
	int n1, n2;
	
	printf("Enter the limits(n1 and n2): ");
	scanf("%d%d",&n1, &n2);
	
	printf("%d and %d are the entered numbers!\n", n1, n2);
	
	int key;
	printf("Enter the key value to search in range: ");
	scanf("%d",&key);
	
	printf("The entered key value is %d\n",key);
	
	return 0;
}
