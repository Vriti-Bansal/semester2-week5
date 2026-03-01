/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Vriti Bansal
 * ID: 201914016
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%s",hex)

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	while(hex[i] !='\0'){
		        if(hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';

        else if(hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 'A' + 10;

        else if(hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 'a' + 10;

        else{
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }

        decimal = decimal * 16 + value;
        i++;
    
	}
	printf("decimal:%ld\n", decimal);
	
	return 0;
}