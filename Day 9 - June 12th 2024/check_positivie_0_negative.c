#include<stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number > 0){
		printf("the Given number is Positive");
	}
	else if(number < 0){
		printf("The given number is Negative");
	}else{
		printf("The given number is Zero");
	}
}
