#include<stdio.h>
#include<math.h>
int main()
{
  int arr[10000];
  int c=0;
  int i,j,n=0;
  for(j=2;;j++)
    for(i=1;;i++)
    {
      if(i==2&&pow(i,j)>10000)
      {
        printf("j:%d,n:%d\n",j,10000-n);
        return 1;
      }
      if(pow(i,j)>10000) break;
      else
      {
        int k;
        for(k=0;k<c;k++)
          if(arr[k]==pow(i,j))
            break;
        if(k<c) continue;
        arr[c++]=pow(i,j);
        n++;
      }
    }
  return 0;
}
