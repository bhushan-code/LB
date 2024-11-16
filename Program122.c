// Row      : 4
// Column   : 4

/*
@   #   @   #
@   #   @   #
@   #   @   #
@   #   @   #


*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j= 0;

    for(i = 1; i <= iRow; i++)          
    {
        for(j = 1; j<=iCol; j++)        
        {   
            if(j % 2 == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}



/*
                                                
            +------+------+------+------+
            | 1,1  | 1,2  | 1,3  | 1,4  |
            +------+------+------+------+
            | 2,1  | 2,2  | 2,3  | 2,4  |
            +------+------+------+------+
            | 3,1  | 3,2  | 3,3  | 3,4  |
            +------+------+------+------+
            | 4,1  | 4,2  | 4,3  | 4,4  |
            +------+------+------+------+

*/


