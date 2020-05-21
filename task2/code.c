#include <stdio.h>
#include <stdlib.h>

void main(void){
	 int num1 = 4, num2 = 8;
	 int *np1,*np2;
	 np1 = &num1;
	 np2 = &num2;
	 if(*np1 > *np2){
	 	printf("Greater number is %d",*np1);
	 }else{
	 	printf("Greater number is %d",*np2);
	 }                                                                       
}