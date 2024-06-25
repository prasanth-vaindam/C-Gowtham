#include<stdio.h>
int main(){
	int age;
	printf("please enter your age:");
	scanf("%d",&age);
//	printf("Your age is %d\n", age);
//	printf("Return value of expression age > 18 is: %d", age>18);
	
	if(age>=18){
		printf("You are eligible to Vote");
	}
//else{
//		printf("You are not yet eliigible to vote");
//	}
	return 0;
}
