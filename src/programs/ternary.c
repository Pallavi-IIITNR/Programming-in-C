#include<stdio.h>

int main()
{
  // Find the smallest element in the integer array

  int array[5];
  int smallest, i=0;

  printf("enter the values\n");
  for(i=0; i<5; i++)
  {
    scanf("%d", &array[i]);
  }

  smallest = array[0];

  for(i=1; i<5; i++)
  {
    // Use of Ternary Operator
    smallest = array[i]<smallest ? array[i] : smallest;
  }

  printf("The smallest value in the array is %d\n", smallest);

  return 0;
}
