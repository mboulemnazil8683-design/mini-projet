#include <stdio.h>
#include <stdlib.h>

int main(){
    int x ;0
    int y ;
    int **T;
    printf("nombre d'étudiants:");
    scanf("%d",&x)
    printf("nombre de matières:");
    scanf("%d",&y);
    
    T= (int**)malloc(x*sizeof(int*))
    for (int i= 0 ; i<x ;i++)
    {
        t[i]=(int*)malloc(y*sizeof(int))}
    
    for (int i= 0 ; i<x ;i++)
    {
        for (int j= 0 ; j<x ; j++)
        {
            printf("note [%d][%d] :",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    for ( int i= 0 ; i<x ; i++)
    {
        for (int i= 0 ;i<x;i++)
        {
            printf("%d",T[i][j]);
        
        }
        printf("\n")

    }
    for (int i = 0;i<x;i++)
    {
        free (T[i]);
    }
    free (T)
    

    }

