#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }

}
int main()
{
    int iFre = 0;
    printf("Enter the Frequency : \n");
    scanf("%d",&iFre);


    Display(iFre);

    return 0;
}