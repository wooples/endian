#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int* np;
	int n = 0;
	np = &n;
	int i;	//loop index

	for (i=0; i<sizeof(int); i++) {
		n += (i*pow(2, 8*(i)));
	}	

	for (i=0; i<sizeof(int); i++) {
		printf("%d\n", *((char*)np + i));
	}

	if ( *((char*)np + 0) == 0 ) 
		printf("little endian\n");
	else 
		printf("big endian\n");

}
