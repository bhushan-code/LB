/*IP        : row = 4 col =4

*  b   c  d
a  *   c  d
a  b   *  d
a  b   c  *

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    char ch = 'a';
    int i = 0, j = 0;


    if(iRow != iCol)                        //filter
    {
        printf("Invalid input\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
    
        for(j = 1, ch = 'a' ; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
            }
            ch++;
        }
        printf("\n");

    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row : ");
    scanf("%d",&iValue1);

    printf("Enter number of coloms: ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}




/*

j->
     1     2     3     4
     1     2     3     4
+------+------+------+------+   
| 1,1  | 1,2  | 1,3  | 1,4  |   1 1
+------+------+------+------+   
| 2,1  | 2,2  | 2,3  | 2,4  |   2 2
+------+------+------+------+
| 3,1  | 3,2  | 3,3  | 3,4  |   3 3
+------+------+------+------+        ^
| 4,1  | 4,2  | 4,3  | 4,4  |   4  4 |
+------+------+------+------+        i

*/