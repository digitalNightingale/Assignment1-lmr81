#include <stdio.h>
#include "vectors.h"

int main(int argc, char *argv[]){
	vector v1,v2;

 if(argc != 7){
		printf("The correct format is testVectors x1 y1 z1 x2 y2 z2\n");
		return 1;
	}
	//initialize vectors
	v1=vector_init(atof(argv[1]),	atof(argv[2]),atof(argv[3]));
	v2=vector_init(atof(argv[4]),	atof(argv[5]),atof(argv[6]));

	//print v1 v2
	printf("The original vectors are:\n");
//<--- code goes here
	vector_print(v1);
	vector_print(v2);

	//add v1 to v2 and print out the result
	printf("The sum of vectors is:\n");
 //<--- code goes here
  	vector vectorSum = vector_add(v1, v2);
  	vector_print(vectorSum);

	//find dot product of v1 and v2 and print it out
 //<--- code goes here
  	printf("The dot product of v1 and v2 is: ");
  	printf("%.6f\n", vector_dot(v1, v2));

	//normalize v1 by v2 using the normalize method and print out v1 and v2 after normalization
	//if the length is 0 then print out an additional warning message saying that the vector was not normalized
 //<--- code goes here
  	vector *v1Pointer;
	v1Pointer = &v1;
	int vNormalizeA = vector_normalize(v1Pointer);
	if( vNormalizeA == 1){
		printf("v1 vector was not normalized\n");
	}
	vector *v2Pointer;
	v2Pointer = &v2;
	int vNormalizeB = vector_normalize(v2Pointer);
	if( vNormalizeB == 1){
		printf("v2 vector was not normalized\n");
	}
	printf("Vector 1 after normalization is:\n");
	vector_print(v1);
	printf("Vector 2 after normalization is:\n");
	vector_print(v2);
	
 	return 0;
}
