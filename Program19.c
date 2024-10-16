#include<stdio.h>

void DisplayTimetable(int iSTD)
{
    if(iSTD == 8)
    {
        printf("Your exam is at 9:30AM\n");
    }
    else if(iSTD == 9)
    {
        printf("Your exam is at 10:30AM\n");
    }
    else if(iSTD == 10)
    {
        printf("Your exam is at 11:30AM\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your standard :\n");
    scanf("%D",&iValue);

    DisplayTimetable(iValue);

    return 0;

}