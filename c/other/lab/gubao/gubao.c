#include<stdio.h>
#include<math.h>
int f(int arr[],int n)
{
  int i,b=0;
  for(i=0;i<5;i++)
  {
    arr[i]=n%10;
    n/=10;
  }
  while(i--)
    b+=arr[i]*pow(10,4-i);
  if(arr[0]!=arr[1] && arr[1]!=arr[2] && arr[2]!=arr[3] && arr[3]!=arr[4]&&arr[0]!=arr[4]&&arr[0]!=arr[3])
    return b;
  else return -1;
}
int main()
{
  int i,j;
  int arr[5];
  for(i=12345;i<100000;i++)
    for(j=1;j<10;j++)
        if(i*j<=98765&&(i*j)==f(arr,i))
        {
          printf("i:%d,j:%d\n",i,j);
          return 1;
        }
  return 0;
}
