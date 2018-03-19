#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int* np;
	int n = 0;
	np = &n;
	int i;	//loop index

	//0 in LSbyte, 1 in next least signifigant byte etc
	for (i=0; i<sizeof(int); i++) {
		n += (i*pow(2, 8*(i)));
	}	
	
	//isolate bytes and print from fist memory address to second etc
	//litte endian counts upward, big endian downward
	for (i=0; i<sizeof(int); i++) {
		printf("%d\n", *((char*)np + i));
	}
	
	//first memory address LSB or MSB?
	if ( *((char*)np + 0) == 0 ) 
		printf("little endian\n");
	else 
		printf("big endian\n");

}
