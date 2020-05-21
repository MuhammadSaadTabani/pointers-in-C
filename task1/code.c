#include <stdio.h>
#include <stdlib.h>

void main(void){
	int m=300;
	float fx = 300.600006;
	char cht = 'z';
	
	int *mPtr;
	float *fxPtr;
	char *chtPtr;
	
	mPtr = &m;
	fxPtr = &fx;
	chtPtr = &cht;
	
	printf("\n------Using & operator-----\n");                                                                                                                                                                                 
	printf("\naddress of m = %p",&m);
	printf("\naddress of fx = %p",&fx);
	printf("\naddress of cht = %p",&cht);
	
	printf("\n\n----Using & and * operator------\n");  
	printf("\nvalue at address of m = %d",*(&m)); 
	printf("\nvalue at address of fx = %f",*(&fx)); 
	printf("\nvalue at address of cht = %c",*(&cht)); 
	
	printf("\n\n----Using only pointer variable-----\n");
	printf("\naddress of m = %p",mPtr);
	printf("\naddress of fx = %p",fxPtr);
	printf("\naddress of cht = %p",chtPtr);
	
	printf("\n\n----Using only pointer operator-----\n");
	printf("\nvalue at address of m = %d",*mPtr);
	printf("\nvalue at address of fx = %f",*fxPtr);
	printf("\nvalue at address of cht = %c",*chtPtr);
	                                                                              
}