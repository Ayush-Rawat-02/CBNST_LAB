/*
Write a c program to find the roots of a non-linear equation by using bisection method

*/

#include<stdio.h>
float fun(float x){
    return x*x -x-1;
}
int main(){
    float r1 , r2 , err , mid;
    int num_it=0;
    printf("Enter the expected range : ");
    scanf("%f%f",&r1,&r2);
    printf("Enter tolerable error :  ");
    scanf("%f",&err);
    if(fun(r1) * fun(r2) >=0)
    {
        printf("Root not found in the given range\n");
        return 0;
    }
    while(r2-r1>=err){
        num_it++;
        mid = (r1+r2)/2.00;
        float tmp = fun(mid);
        if(tmp==0.00){
            return 0;
        }
        else if(tmp*fun(r1)<0)
            r2 = mid;
        else
            r1 = mid;
        printf("Intermediate root : %f\n" , mid);
    }
    printf("Total number of iterations : %d\n" , num_it);
    printf("Root of the equataion : %f\n" , mid);
    return 0;
}