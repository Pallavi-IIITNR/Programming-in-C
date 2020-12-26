/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    

    int d,m,f,i,c;
    
    printf("distance between two cities in km\n");
    scanf("%d",&d);
    
    m=d*1000;
    f=3281*d;
    i=39370*d;
    c=d*100000;
    printf("distance between two cities in meters:%d\n",m);
    printf("distance between two cities in feets:%d\n",f);       
    printf("distance between two cities in inches:%d\n",i);
    printf("distance between two cities in centimeters:%d",c);
    return 0;
}
