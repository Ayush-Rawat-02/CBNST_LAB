#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    float x[n], y[n];
    for(int i=0; i<n; i++){
        printf("Enter the key and value for observation no. %d : ", i);
        scanf("%f%f", &x[i], &y[i]);
    }
    int toFind;
    printf("Enter the point to find value at : ");
    scanf("%d", &toFind);
    float ans=0;
    for(int i=0; i<n; i++)
    {
        float cur=x[i], toAdd=1;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            toAdd*= (toFind-x[j])/(float)(cur-x[j]);
        }
        ans+=(toAdd*y[i]);
    }
    printf("The value at point x = %d is : %f\n", toFind ,ans);
    return 0;
}
