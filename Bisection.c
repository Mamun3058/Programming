#include<stdio.h>
#include<math.h>

float func(double x)
{
    return (pow(x,3)-x-11);
}

int main()
{
    double a,b;
    int iteration,i;
    printf("Root finding of function x^3-x-11 using bisection method.\n\n");
    printf("Enter the first approximation of the root:\n");
    scanf("%lf",&a);

    printf("Enter the second approximation of the root:\n");
    scanf("%lf",&b);

    printf("Enter the iteration you want to perform :\n");
    scanf("%d",&iteration);
    i=1;
    double a1=a;
    double b1=b;
    double root,f1,f2,f3;
    if(func(a1)==0)
        root=a1;
    else if(func(b1)==0)
        root=b1;
    else
    {
        while(i<iteration)
        {
            root=(a1+b1)/2;

            f1=func(a1);
            f2=func(root);
            f3=func(b1);
            if(f2==0)
            {
                root=f2;
                break;
            }
            printf("The root after %d iteration is %lf\n\n",i,root);
            printf("The Function Value is %lf\n\n",f2);
            if(f1*f2<0)
                b1=root;
            else if(f2*f3<0)
                a1=root;
            i++;
        }
    }
    printf("The approximation of the root is %lf",root);
    return 0;
}
