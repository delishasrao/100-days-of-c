//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main()
{
	char v;
	printf("enter an alphabet:");
	scanf("%c",&v);
	if 
	(v=='a'||v=='e'||v=='i'||v=='o'||v=='u')
	printf("Vowel");
	else
	printf("Consonant");
    return 0;
}