#include<stdio.h>
#include<ctype.h>
int main(){
	char grade;
	
	printf("Enter Your Grade: ");
	scanf("%c", &grade);
	
	grade = toupper(grade);
	printf("grade: %c\n",grade);
	
	return 0;	
}
