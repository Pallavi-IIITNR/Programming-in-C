#include<stdio.h>


int main()  
{
   float sub1,sub2,sub3 ,sub4,sub5,arg;
   float per;
   
   
   printf("marks obtained by students in subjects\n");
   scanf("%f %f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
   
   
   arg=sub1+sub2+sub3+sub4+sub5;
   per=arg/500*100;
   
   printf("aggregate marks obtained by students:%f\n",arg);
   printf("percentage marks obtained by students:%f\n",per);
    
    
    
    
    
    
    
    
     
    
    
    
    
    
    
    
    return 0;
}