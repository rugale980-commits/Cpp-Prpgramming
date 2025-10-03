#include <stdio.h>
int main()
{
    // float istd = 0;
    int istd = 0;

    printf("Enter your Standard \n");
    scanf("%d", &istd);

    switch (istd)
    {
    case 1:
        printf("Exam at 9 Am \n");
        break;

    case 2:
        printf("Exam at 10 Am\n ");
        break;
    case 3:
        printf("Exam at 10 Am \n");
        break;

    default:
    {
        printf("Invalid Standard plz Valid Standard\n");
    }
    }
}