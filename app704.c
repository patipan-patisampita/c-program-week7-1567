#include <stdio.h>
void main()
{
    char grade;
    printf("Please enter Grade A,B,C,D:"); //A,B,C,D
    scanf("%c", &grade);
    switch (grade){
    case 'A':
        printf("80-100 Grade %c\n", grade);
        break;
    case 'B':
        printf("70-79 Grade %c\n", grade);
        break;
    case 'C':
        printf("60-69 Grade %c\n", grade);
        break;
    case 'D':
        printf("50-59 Grade %c\n", grade);
        break;
    default:
        printf("0-49 Grade F or error = %c\n", grade);
    }
}
