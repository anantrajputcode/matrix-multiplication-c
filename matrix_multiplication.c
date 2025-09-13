#include <stdio.h>
int main()
{
    unsigned int r1, c1, r2, c2;
    printf("ENTER THE NUMBER OF ROWS OF MATRIX A:-\n");       //Taking input for the dimensions of matrix A and B and using unsigned int to make sure dimension of matrix are not negative.
    scanf("%u", &r1);
    printf("\nENTER THE NUMBER OF COLUMN OF MATRIX A:-\n");
    scanf("%u", &c1);
    printf("\nENTER THE NUMBER OF ROWS IN MATRIX B:-\n");
    scanf("%u", &r2);
    printf("\nENTER THE NUMBER OF COLUMN IN MATRIX B:-\n");
    scanf("%u", &c2);
    if (r1 == 0 || c1 == 0 || r2 == 0 || c2 == 0)            //Checking rows and column are not equal to zero.
    {
        printf("\nROWS AND COLUMNS MUST BE GREATER THAN ZERO.\n");
    }
    else if (c1 != r2)
    {
        printf("\nSORRY! THE MULTIPLICATION OF THE MATRIX IS NOT POSSIBLE.");
    }
    else
    {
        int arr1[r1][c1],arr2[r2][c2],arr3[r1][c2], i, j, k;
        printf("\nENTER THE ELEMENTS OF MATRIX A:-\n");
        
        //Input Matrix A
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\nENTER THE ELEMENTS OF MATRIX B:-\n");
        
        //Input Matrix B
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("\nTHE RESULT OF MULTIPLICATION OF MATRIX A AND MATRIX B IS:-\n");
        for (i = 0; i < r1; i++)
        {   
            
            for (j = 0; j < c2; j++)                     //resultant matrix
            {
                arr3[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");

        }
    }
    return 0;
}