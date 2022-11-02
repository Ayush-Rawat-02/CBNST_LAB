#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows in the table : ");
    scanf("%d",&n);
    //matrix to store the valurs for first, second and following differences
    int res[n][n];
    //array x stores the value for x (input) and y stores the value for f(x) (output)
    int x[n];
    for(int i=0; i<n; i++){
        printf("Enter the value of x and f(x) for row number %d : ",i+1);
        scanf("%d%d",x+i,&res[i][0]);
    }
    //printf("Part1 complete\n");
    for(int j=1; j<n; j++){
        for(int i=0; i<n-j; i++){
            //the difference of i+1th and ith row of previous column(j-1)
            res[i][j]=res[i+1][j-1]-res[i][j-1];
        }
    }
    //printf("Part2 complete\n");
    //Displaying the forward difference table
    printf("The forward difference table for the given values is : \n");
    printf("x\ty\t");
    for(int i=1; i<n; i++){
        printf("Δ^%dy\t",i);
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d\t",x[i]);
        for(int j=0; j<n-i; j++)
            printf("%d\t",res[i][j]);
        printf("\n");
    }
    //printf("Part3 complete\n");
    return 0;
}
