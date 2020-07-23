#include<stdio.h>
int main()
{
  int matrix[3][3];
  int i,j,sum=0;
  
  printf("Enter the elements of the matrix\n");
  for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  {
    scanf("%d",&matrix[i][j]);
  }
 
printf("\nHere is your desired matrix"\n);

for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  {
   printf("%d\t", matrix[i][j]);
  }
  
  while(i==j)
  {
    sum=sum+matrix[i][j];
    i++;
    j++;
  }
  printf("\nThe sum of the diagonal elements is %d,sum);
}
