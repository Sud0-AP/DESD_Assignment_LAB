// program to convert decimal to octal and binary

#include <stdio.h>
#include <math.h>
#include <string.h>

int dec_Octal(int x){
	int lenght = (log(x)/log(8.0)) + 1 ;
	int result[lenght];
	for (int i =0 ; x!=0 ; i++){
		result[(lenght-1)-i] = x%8; 
		x/=8;
	}

	for (int j =0 ; j<lenght ; j++)
		printf("%d", result[j]);
}

void dec_Binary(int x){
	int lenght = log2(x) + 1 ;
	int result[lenght];
	for (int i =0 ; x!=0 ; i++){
		result[(lenght-1)-i] = x%2; 
		x/=2;
	}

	for (int j =0 ; j<lenght ; j++)
		printf("%d", result[j]);
}

int main(){
	int num, choice;

	printf("Press (1) for Decimal(B-10) to Binary(B-2) \n Press (2) for Decimal(B-10) to Octal(B-8) : ");
	scanf("%d", &choice);

	if(!(choice == 0 || choice == 1)){
		printf("Wrong choice start over!!");
		return 0;
	}

	printf("Enter the number you want to convert:");
	scanf("%d",&num);

	dec_Binary(num);
	dec_Octal(num);
}
