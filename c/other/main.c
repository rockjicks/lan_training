#include<stdio.h>
#define swap(t,a,b) (t)=(a);(a)=(b);(b)=(t)
int main()
{
  printf("sizeof(unsigned)%luKiB\n",sizeof(unsigned));
  printf("sizeof(int)%luKiB\n",sizeof(int));
  printf("sizeof(short)%luKiB\n",sizeof(short));
  printf("sizeof(long)%luKiB\n",sizeof(long));
  short a=1,b=2;
  short t;
  swap(t,a,b);
  printf("a:%d\tb:%d\n",a,b);
  char sort[]="2,3,4,5,1,9,8,7,0";
  qsort(sort,0,10);
  printf("the seq:%s\n",sort);
  return 0;
}
