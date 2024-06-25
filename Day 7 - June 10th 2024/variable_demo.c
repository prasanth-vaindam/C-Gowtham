// Program to Demonstrate variable, address of variable and sizeof variable
#include<stdio.h>
int main(){
	int age = 23;
	char grade = 'A';
	float c = (double)10/3;
	double d = (double) 10/3;
	
	printf("The Size of a character is: %d byte\n", sizeof(grade));
	printf("The Size of a  is: %.12lf  is %d bytes\n",c, sizeof(c));
	printf("The Size of d  is: %.12lf  is %d bytes\n",d, sizeof(d));
	
	printf("age: %d\n",age); // this will print the value op: 23
	printf("address of the variable : %u \n", &age);// this will print the address of the variable
	printf("size of the integer variable (age) is: %d bytes", sizeof(age));
	
	return 0;
}
