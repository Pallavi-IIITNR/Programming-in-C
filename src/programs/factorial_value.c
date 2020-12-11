#include<stdio.h>
int main()
{ int num ,fact=1,n;

  printf("enter the number \n");
  scanf("%d",&num);

  n=num;


  while(num!=0)
  {
    fact=fact*num;
    num =num-1;
    printf("%d\n");
  }

  printf("the factorial value for %d is %d\n",n,fact);
  return 0;

}
