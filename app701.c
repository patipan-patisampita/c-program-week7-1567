#include <stdio.h>
void main()
{
    int score;
    printf("Please enter score:");
    scanf("%d",&score);
    if (score >= 80 && score<=100)
        printf("Grade A:%d\n", score);
    else if (score >= 70 && score <= 79)
        printf("Grade B:%d\n", score);
    else if (score >= 60 && score <= 69)
        printf("Grade C:%d\n", score);
    else if (score >= 50 && score <= 59)
        printf("Grade D:%d\n", score);
    else if (score >= 0 && score <= 49)
        printf("Grade F:%d\n", score);
    else
        printf("ERROR\n");
    printf("Finish");
}
