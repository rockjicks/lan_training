#include<stdio.h>
int main()
{
  FILE *fp;
  char ch;
  int cnt1=0,cnt2=0,cnt3=0;
  if((fp=fopen("a.txt","r"))==NULL)
  {
  printf("shit!\n");
  return -1;
  }
  while(!feof(fp))
  {
  switch(ch=fgetc(fp))
  {
    case ' ':cnt1++;break;
    case '\n':cnt2++;break;
    case 'a':cnt3++;break;
    defaults:break;
  }
  }
  printf("cnt1:%d,cnt2:%d,cnt3:%d\n",cnt1,cnt2,cnt3);
  return 0;
}
