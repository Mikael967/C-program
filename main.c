#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int func(int a,int b, int c){
 int d = b*b-(4*a*c);
 return d;
}
int main()
{
    int a,b,c;
    printf("enter a, b, c \n");

    scanf("%d %d %d",&a,&b,&c);

    int discriminant = func(a,b,c);
    if (a !=0){
    if(discriminant>0){
        float x1,x2;
        x1= (-b+sqrt(discriminant))/2*a;
        x2= (-b-sqrt(discriminant))/2*a;
        printf("x1=%f\n x2=%f",x1,x2);
    }
    else if (discriminant==0){
        float x = (-b)/2*a;
        printf("the real root is %f",x);
    }
    else{
        printf("complex");
    }
    }
    else{
        printf("enter a number for a\n");
    }
    return 0;
}

