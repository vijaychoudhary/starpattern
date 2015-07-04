#include<stdio.h>
#include<math.h>

int main() {
    int i,j,N,k;
    printf("Print the Numbers of Row:\n");
    scanf("%d",&N);
     char A[N][N];
    for (i = 0, j = N - 1 ; j >= 0 ; i++, j--)
    {
        if(i==0 || (i%2)==0)
        {
            for(k = i ; k < j; k++)
                A[i][k]='0';
            for(k = i ; k < j; k++)
                A[k][j]='0';
            for(k = j ; k > i; k--)
                A[j][k]='0';
            for(k = j ; k > i; k--)
                A[k][i]='0';
            }
            else
            {
               for(k = i ; k < j; k++)
                A[i][k]='*';
            for(k = i ; k < j; k++)
                A[k][j]='*';
            for(k = j ; k > i; k--)
                A[j][k]='*';
            for(k = j ; k > i; k--)
                A[k][i]='*';  
            }
    }
    if (N%2)
       A[N/2][N/2]='0';
       printf("\n\n Output is:\n\n\n");
    for (i=0;i<N;i++) {
        for (j=0;j<N;j++)
        printf("%c ",A[i][j]);
            
        printf("\n");
    }
}