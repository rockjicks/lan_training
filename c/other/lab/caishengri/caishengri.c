#include<stdio.h>
#include<math.h>
int f()
{
  int i,j=6,k;
  for(i=1900;i<2012;i++)
    for(k=1;k<=31;k++)
    {
      int n=i*pow(10,4)+j*pow(10,2)+k;
      if(n%6036==0)
        return n;
    }
  return -1;
}
int main()
{
  printf("bir:%d\n",f());
  return 1;
}
