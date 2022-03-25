#include<stdio.h>
#include<math.h>
int main()
{
  float a[10],sum,mean,var,sd;
  float *p;
  int i,n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter %d numbers:",n);
  p=a;
  for(i=0;i<n;i++)
  {
    scanf("%f",p);
    p++;
  }
  mean=sum/(float)n;
  p=a;
  for(i=0;i<n;i++)
  {
    var=var+pow((*p-mean),2);
    p++;
  }
  var=var/(float)n;
  sd=sqrt(var);
  printf("Mean=%f\n",mean);
  printf("Sum=%f\n",sum);
  printf("Standard deviation=%f\n",sd);
  return 0;
}