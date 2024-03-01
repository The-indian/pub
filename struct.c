#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

struct students{
    int sno;
    char name[30];
    int marks1;
    int marks2;
    int marks3;
};

int main()
{
    int avgm[4];
    struct students S[4];-
    printf("Enter data of student : ");
    for (size_t i = 0; i < 4; i++)
    {
        printf("\nEnter serial no. : ");
        scanf("%d",&S[i].sno);
        getchar();

        printf("\nEnter serial name : ");
        gets(S[i].name);
        
        
        printf("\nEnter marks of first subject : ");
        scanf("%d",&S[i].marks1);
        getchar();
        
        printf("\nEnter marks of second subject : ");
        scanf("%d",&S[i].marks2);
        getchar();
        
        printf("\nEnter marks of third subject : ");
        scanf("%d",&S[i].marks3);
        getchar();

        avgm[i]=(S[i].marks1+S[i].marks2+S[i].marks3)/3;
    }
    printf("\n\n\n\n");
    for (size_t j = 0; j < 4; j++)
    {
        printf("\nSerial no. : %d",S[0].sno);
        printf("\nname : %s",S[0].name);
        printf("\nAverage marks : %d",avgm[0]);
        printf("\n\n");
    }
    
    return 0;
}
