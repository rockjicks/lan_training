#include<stdio.h>
#include<time.h>
int check(int i,int j,int k,int h,int g,int f,int d,int c,int a)
{
  int x,flag;
  int n1=0,n2=0,n3=0,n4=0;
  int num1[2]={i,j},num2[2]={k,h},num3[2]={g,f},num4[3]={d,c,a};
  int arr[]={i,j,k,h,g,f,d,c,a};
  int c1,c2,c3,c4,c5,c6,c7,c8,c9;
  c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
  int q;
  for(q=0;q<9;q++)
    switch(arr[q])
    {
      case 1:c1++;break;
      case 2:c2++;break;
      case 3:c3++;break;
      case 4:c4++;break;
      case 5:c5++;break;
      case 6:c6++;break;
      case 7:c7++;break;
      case 8:c8++;break;
      case 9:c9++;break;
      defaults:break;
    }
  if(c1*c2*c3*c4*c5*c6*c7*c8*c9!=1)
    return -1;
  for(x=0,flag=10;x<2;x++)
  {
    n1+=num1[x]*flag;
    n2+=num2[x]*flag;
    n3+=num3[x]*flag;
    flag/=10;
  }
  for(x=0,flag=100;x<3;x++)
  {
    n4+=num4[x]*flag;
    flag/=10;
  }
  if(n1*n2==n3*n4)
    return 1;
  else
    return 0;
}
void get()
{
  int i,j,k,h,g,f,d,c,a;
  for(i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {

      for(k=1;k<10;k++)
      {

        for(h=1;h<10;h++)
        {

          for(g=1;g<10;g++)
          {
            for(f=1;f<10;f++)
            {

              for(d=1;d<10;d++)
              {

                for(c=1;c<10;c++)
                {

                  for(a=1;a<10;a++)
                    if(check(i,j,k,h,g,f,d,c,a)>0)
                      printf("%d%d*%d%d=%d%d*%d%d%d\n",i,j,k,h,g,f,d,c,a);
                }
              }
            }
          }
        }
      }
    }
  }
}
int main()
{
  long time0=time(NULL);
  get();
  long time1=time(NULL);
  printf("\ntime:%lds\n",time1-time0);
  return 1;
}
