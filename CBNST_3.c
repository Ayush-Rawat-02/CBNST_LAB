/*
        Write a program in c to calculate the roots of a non linear equation using Regula falsi method
*/
#include<stdio.h>
#include<math.h>
float fun(int x){
    return x*log10(x) - 1.2;
}
int main(){
    float x0 , x1 , err , x2 , f0 , f1 , f2;
    int num_it = 0;
    printf("Enter the expected range of roots : ");
    scanf("%f%f" , &x0 , &x1);
    printf("Enter tolerable error : ");
    scanf("%f" , &err);
    f0 = fun(x0);
    f1 = fun(x1);
    if(f0*f1 > 0){
        printf("Root not found in the given range\n");
        return 0;
    }
    x2=x0-(x0-x1)/(f0-f1)*f0;
    f2 = fun(x2);
    //float cmp = f2>=0?f2:(-1.00*f2)
    printf("Intermediate values : \n Iteration no.\t\tx0\t\tx1\t\tx2\t\tfun(x2)\n");;
    while(fabs(f2)>err){
        if(f0*f2 < 0){
            x1=x2;
            f1=f2;
        }
        else{
            x0=x2;
            f0=f2;
        }
        num_it++;
        if(fabs(x0-x1)>=err){
            x2=x0-(x0-x1)/(f0-f1)*f0;
            printf("%d\t\t%f\t\t%f\t\t%f\t\t%f\n" , num_it , x0 , x1 , x2 , f2);
        
            f2=fun(x2);
            //cmp=f2>0?f2:(-1.00*f2);
        }
        else break;
    }
    printf("Total number of iterations : %d\n" , num_it);
    printf("Root of the equation : %f\n" , x2);
    return 0;
}