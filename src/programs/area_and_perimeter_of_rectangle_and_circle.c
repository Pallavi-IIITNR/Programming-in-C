#include<stdio.h>


int main()  
{
  float l,b,r,ar,ac,p,c;
  
  printf("enter the length breath radius in same order\n");
  scanf("%f%f%f",&l,&b,&r);  
    
  ar=l*b;
  ac=3.14*r*r;
  p=2*(l+b);
  c=2*3.14*r;
  
  printf("area of circle is %f and circumference of circle is %f\n",ac,c);
  printf("area of rectangle is %f and perimeter of rectangle is %f\n",ar,p);  
    
    
    
    
    
    
    
    
    
    return 0;
}