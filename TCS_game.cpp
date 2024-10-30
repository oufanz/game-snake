#include"gameframework.h"
#include"apple.h"
#include"snake.h"
#include"tcs.h"
#include"data_type.h"

//TODO: 2 ȫ�ֱ�������λ�� 
IMAGE imgBG;
IMAGE imgApple;
IMAGE imgBody;
IMAGE imgHead[4];

extern SNAKE snake;
extern APPLE apple;

//TODO: 3 ��Ϸ��ʼ��λ��  
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
	 //���ƻ��λ��
	//��������
	 newApple();
	 //�߳�ʼ��
	 newSanke();
}
//TODO: 4 ��ͼ����λ��  
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
//TODO: 5 ��ʱ����λ��
void gameInterval()
{
	//todo: ����
	snakeMove();
	if (enabledEatApple()  /*todo: �ܳ�ƻ��*/)
	{
		//todo: ����
		snakeGrow();
		//todo: ����ƻ��
		newApple();
	}
	if (enabledOut()
		/*todo: �ܳ���*/)
	{
		//todo: gameover
		gameover();
	}
	if (enabledEatSelf() /*todo: ��ҧ�Լ�*/)
	{
		//todo: gameover
		gameover();
	}
}
//TODO: 6 ������̿���λ��
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

//TODO: 7 ����������λ��
void gameMouseDown(int mouseX, int mouseY)
{
	printf("����������\n");

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