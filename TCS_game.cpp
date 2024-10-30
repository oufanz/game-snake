#include"gameframework.h"
#include"apple.h"
#include"snake.h"
#include"tcs.h"
#include"data_type.h"

//TODO: 2 全局变量声明位置 
IMAGE imgBG;
IMAGE imgApple;
IMAGE imgBody;
IMAGE imgHead[4];

extern SNAKE snake;
extern APPLE apple;

//TODO: 3 游戏初始化位置  
void gameInit()
{
	 loadimage(&imgBG, L".\\she\\bg.bmp");
	 loadimage(&imgApple, L".\\she\\apple.bmp");
	 loadimage(&imgBody, L".\\she\\body.bmp");

	
	 TCHAR str[100];
	 for (int t=0; t<4; t++) {
		 _stprintf(str, L".\\she\\head%d.bmp", t);
		 loadimage(&imgHead[t], str);
	 }
	 //随机苹果位置
	//函数调用
	 newApple();
	 //蛇初始化
	 newSanke();
}
//TODO: 4 绘图处理位置  
void gamePaint()
{
	putimage(0, 0, &imgBG);
	
	putimage(apple.lie * 30, apple.hang * 30, &imgApple);
	
	SNAKE_NODE* p = snake.header;
	putimage(p->lie * 30, p->hang * 30, &imgHead[1]);
	p = p->next;
	while(p != NULL)
	{	
		putimage(p->lie * 30, p->hang * 30, &imgBody);
		p = p->next;
	}
}
//TODO: 5 定时处理位置
void gameInterval()
{
	//todo: 爬行
	snakeMove();
	if (enabledEatApple()  /*todo: 能吃苹果*/)
	{
		//todo: 长个
		snakeGrow();
		//todo: 出新苹果
		newApple();
	}
	if (enabledOut()
		/*todo: 能出界*/)
	{
		//todo: gameover
		gameover();
	}
	if (enabledEatSelf() /*todo: 能咬自己*/)
	{
		//todo: gameover
		gameover();
	}
}
//TODO: 6 处理键盘控制位置
void gameKeypress(int key)
{
	switch (key)
	{
	case VK_LEFT:
		{
			if (snake.fangxiang != 0)
			{
				snake.fangxiang = 2;
			}
		}
		break;
	case VK_RIGHT:
		{
			if (snake.fangxiang != 2)
			{
				snake.fangxiang = 0;
			}
		}
		break;
	case VK_UP:
		{
			if (snake.fangxiang != 3)
			{
				snake.fangxiang = 1;
			}
		}
		break;
	case VK_DOWN:
		{
			if (snake.fangxiang != 1)
			{
				snake.fangxiang = 3;
			}
		}
		break;
	}
}

//TODO: 7 处理鼠标控制位置
void gameMouseDown(int mouseX, int mouseY)
{
	printf("按下鼠标左键\n");

}
void gameMouseUp(int mouseX, int mouseY)
{

}
void gameMousemove(int mouseX, int mouseY)
{

}

void gameMouseRightDown(int mouseX, int mouseY)
{

}

void gameover(void)
{
	stop = 1;
}