#define STOP 0
#define ALIVE 2
#define DEAD -1
#include <iostream>
using namespace std;
#include <unistd.h>
#include <stdio.h>
#define CLEAR() printf("\033c")
#define MOVEUP(x) printf("\033[%dA", (x))
#define MOVEDOWN(x) printf("\033[%dB", (x))
#define MOVELEFT(y) printf("\033[%dD", (y))
#define MOVERIGHT(y) printf("\033[%dC",(y))
#define MOVETO(x,y) printf("\033[%d;%dH", (y), (x))
#define RESET_CURSOR() printf("\033[H")
#define HIDE_CURSOR() printf("\033[?25l")
#define SHOW_CURSOR() printf("\033[?25h")
typedef struct location{
  int x;
  int y;
}Loc,*LinkLoc;
class FramePane
{
  private:
    int heigth;
    int width;
    Loc startLoc;
  public:
    FramePane()
    {
      this->heigth=0;
      this->width=0;
      this->startLoc.x=0;
      this->startLoc.y=0;
    }
    FramePane(int heigth,int width,Loc startLoc)
    {
      this->heigth=heigth;
      this->width=width;
      this->startLoc.x=startLoc.x;
      this->startLoc.y=startLoc.y;
    }
    ~FramePane();
    virtual void drawFrame(FramePane &drawthis)
    {
      int i,j;
      MOVETO(drawthis.startLoc.x,drawthis.startLoc.y);
      for(j=drawthis.startLoc.x;j<drawthis.startLoc.x+drawthis.heigth;j++)
      {
        cout<<'*';
        MOVERIGHT(1);
        if(j==drawthis.startLoc.x||j==drawthis.startLoc.x+drawthis.heigth-1)
        {
          for(i=drawthis.startLoc.y;i<drawthis.startLoc.y+drawthis.width-1;i++)
          {
          cout<<'*';
          MOVERIGHT(1);
          }
        }
        else
        {
          MOVETO(drawthis.startLoc.x+2*(drawthis.width-1),j);
          cout<<'*';
        }
        MOVETO(drawthis.startLoc.x,j+1);
      }
    }
};
class ScorePane:public FramePane
{
  private:
    long long score;
  public:
    long long calScore(ScorePane &now_Score);
    void showScore(ScorePane &now_Score);
    ScorePane();
    ScorePane(int score);
    ~ScorePane();
};
class Barrier:public FramePane
{
  private:
  public:
};
class Snake:public ScorePane,public FramePane,public Barrier
{
  private:
    Loc now_loc;
    int status;
    int lentgh;
    char head;
    char body;
  public:
    void move(Snake &aSnake);
    void death(Snake &aSnake);
    Snake();
    Snake(FramePane thisFrame,char head,char body,int lentgh=3,int status=STOP);
    ~Snake();
};
