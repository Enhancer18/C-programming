#include <stdio.h>

int main()
{
    double h,u,g=9.8;
    printf("enter u value:  \n",u);
    scanf("%lf",&u);
    h=(double)u*u/(2*g);
    printf("max height= %lf\n",h);

    return 0;
}

