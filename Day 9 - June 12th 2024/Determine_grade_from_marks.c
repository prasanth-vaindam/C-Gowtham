#include<stdio.h>
int main(){
	int marks;
	
	printf("Please enter your marks");
	scanf("%d", &marks);
	if(marks>=90 && marks<=100){
		printf("You got A Grade\n");
	}else if(marks >= 80 && marks<90){
		printf("You got B Grade\n");
	}else if(marks >= 60 && marks<80) {
		printf("You got C Grade\n");
	}else if(marks >= 50 && marks<60) {
		printf("You got D Grade\n");
	}else if(marks >= 35 && marks<50){
		printf("You Passed the Exame\n");
	}else {
		printf("You did not attain a Grade\n");
	}
	return 0;
 }
