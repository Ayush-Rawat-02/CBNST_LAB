#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float r1,r2;
    printf("Enter the coefficients of quadratic equation : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("The equation : %fx^2 + %fx + %f\n",a,b,c);
    int d = b*b-4*a*c;
    if(d>0){
        printf("The roots are distinct and real\n");
        r1=(-1.00*b+sqrt(d))/(2.00*a);
        r2=(-1.00*b-sqrt(d))/(2.00*a);
        printf("The roots are %f and %f\n",r1,r2);
    }
    else if(d<0){
        printf("The roots are imaginary\n");
        float tmp=sqrt(abs(d));
        float real = (-1.00*b)/(2.00*a);
        float img = tmp/(2.00*a);
        printf("The roots are %f + %fi and %f - %fi\n",real,img,real,img);
    }
    else{
        printf("The roots are real and equal\n");
        r1=(-1.00*b)/(2.00*a);
        r2=r1;
        printf("The roots are %f and %f\n",r1,r2);
    }
    return 0;
}