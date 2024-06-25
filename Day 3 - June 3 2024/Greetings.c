// The below line includes standard input out (STDIO) header file(.h)


// stands for single line comment

/*
This is multi line comment
it can expand in multiple lines
*/


#include<stdio.h>
int main()
{
	printf("Namaste\n");
	
	// we are declaring 3 variables, In c we must declare variable before they are used
	int a;
	int b;
	int c;
	
	a = 10;
	b = 20;
	c = a + b;
	
	printf("sum of %d + %d is  %d \n",a,b, c);
	printf("my fav number is: %d\n", 17);
	
	return 0;
}

int add(int a, int b){
	return a+b;
}

