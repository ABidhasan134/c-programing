#include<stdio.h>
int main()

{
    int count,n;
       float p=3.1416, r,a;
        printf("How many cricle do you want=");
        scanf("%d",&n);
    for(count=1;count<=n;count++)
    {
    printf("Enter the redous=");
    scanf("%f",&r);
    a=p*r*r;
    printf("The area of circle=%f\n",a);
    }

    return 0;
}
