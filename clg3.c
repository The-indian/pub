#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
int main()
{
    int mr1,mr2,mc1,mc2,e;
    
    printf("Enter the no. of rows for first matrix A : ");
    scanf("%d",&mr1);
    getchar();
    printf("Enter the no. of columns for first matrix A : ");
    scanf("%d",&mc1);
    getchar();
    printf("Enter the no. of rows for Second matrix B : ");
    scanf("%d",&mr2);
    getchar();
    printf("Enter the no. of columns for Second matrix B : ");
    scanf("%d",&mc2);
    getchar();
    int m1[mr1][mc1];
    int m2[mr2][mc2];
    int m3[mr1][mc2];
    if (mc1==mr2)
    {
        printf("Enter elements of first matrix A :\n");
        for (int i = 0; i < mr1; i++)
        {
            for (int j = 0; j < mc1; j++)
            {
                printf("Enter [%d],[%d] Element  : ",i+1,j+1);
                scanf("%d",&e);
                m1[i][j]=e;
            }
            
        }
        printf("Enter elements of second matrix B :\n");
        for (int i = 0; i < mr2; i++)
        {
            for (int j = 0; j < mc2; j++)
            {
                printf("Enter [%d],[%d] Element  : ",i+1,j+1);
                scanf("%d",&e);
                m2[i][j]=e;
            }
            
        }
        printf("The first matrix A is : \n");
        for (int i = 0; i < mr1; i++)
        {
            printf("|");
            for (int j = 0; j < mc1; j++)
            {
                printf(" %d",m1[i][j]);
            }
            printf("|\n");
            
        }
        printf("The second matrix B is : \n");
        for (int i = 0; i < mr2; i++)
        {
            printf("|");
            for (int j = 0; j < mc2; j++)
            {
                printf(" %d",m2[i][j]);
            }
            printf("|\n");
            
        }
        for (int i = 0; i < mr2; i++)
        {
            
            for (int j = 0; j < mc2; j++)
            {
                m3[i][j]=0;
            }
            
        }

        for (int i = 0; i < mr1; i++)
        {
            for (int j = 0; j < mc2; j++)
            {
                int k=0;
                while (k<mc2)
                {

                    /* code */
                    m3[i][j]=m3[i][j]+(m1[i][k]*m2[i][k]);
                    k++;
                }
                
                
            }
               
        }
        printf("Here is the matirx AB :\n");
        for (int i = 0; i < mr1; i++)
        {
            printf("|");
            for (int j = 0; j < mc2; j++)
            {
                printf(" %d",m3[i][j]);
            }
            printf("|\n");
            
        }



    }
    else{
        printf("Enter correct no. of rows and columns suitable for multiplication");
    }
    

    return 0;
}
