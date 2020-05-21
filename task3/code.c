#include <stdio.h>
#include <stdlib.h>

int add(int *num1, int *num2){
	return *num1+*num2;
}
void main(void){
	 int num1,num2;
	 printf("Enter number 1: ");
	 scanf("%d",&num1);                                                         
	 printf("\nEnter number 2: ");
	 scanf("%d",&num2);
	 printf("\n Addition of both number is %d",add(&num1,&num2));
	                                                          
}