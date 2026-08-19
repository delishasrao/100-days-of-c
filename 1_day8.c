//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main()
{
	char v;
	printf("enter a character:");
	scanf("%c",&v);
	if (v>='A' && v<='Z')
	printf("Uppercase alphabet");
	else if (v>='a' && v<='z')
	printf("Lowercase alphabet");
    else if (v>='0' && v<='9')
	printf("Digit");
    else
	printf("Special Character");
    return 0;
}