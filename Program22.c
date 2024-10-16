/*timetable of exam 
8 = 9:30
9 = 10:30
10 = 11:30*/


#include<stdio.h>

void DisplayTimetable(int iSTD)
{
    switch(iSTD)
    {
         case 8:
            printf("Your exam is at 9:30AM\n");
            break;

        case 9:
            printf("Your exam is at 10:30AM\n");
            break;

        case 10:
            printf("Your exam is at 11:30AM\n");
            break;

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