#include"data_type.h"
#include"apple.h"
#include"snake.h"
SNAKE snake;
extern APPLE apple;
void newSanke(void) {
	snake.fangxiang = 0;
	snake.length = 2;
	snake.header = new SNAKE_NODE;
	snake.header->hang = 12;
	snake.header->lie = 12;
	snake.header->next = new SNAKE_NODE;
	snake.header->prev = NULL;
	snake.header->next->hang = 12;
	snake.header->next->lie = 11;
	snake.header->next->prev = snake.header;
	snake.header->next->next = NULL;
	snake.ender = snake.header->next;
}
void snakeMove(void) {
	SNAKE_NODE *cur = snake.ender;
	while (cur->prev!=nullptr) {
		cur->hang = cur->prev->hang;
		cur->lie = cur->prev->lie;
		cur = cur->prev;
	}
	cur = snake.header;
	//头
	switch (snake.fangxiang)
	{
	case 0:   // 右
		cur->lie++;
		break;
	case 1:  // 上
		cur->hang--;
		break;
	case 2:  // 左
		cur->lie--;
		break;
	case 3:  // 下
		cur->hang++;
		break;
	}
}
int enabledEatApple(void) {
	if (snake.header->hang == apple.hang
		&& snake.header->lie == apple.lie)  //吃到苹果：蛇头的坐标与苹果相同
		return 1;
	else
		return 0;
}
void snakeGrow(void) {
	SNAKE_NODE *newnode = new SNAKE_NODE;
	newnode->hang = snake.ender->hang;
	newnode->lie = snake.ender->lie;
	newnode->prev = snake.ender;
	newnode->next = NULL;
	snake.ender->next = newnode;
	snake.ender = newnode;
	snake.length++;
}
int enabledEatSelf(void)
{
	SNAKE_NODE* p = snake.header->next;
	while (p != NULL)
	{
		if (snake.header->hang == p->hang
			&& snake.header->lie == p->lie)
		{
			return 1;
		}
		else
		{
			p = p->next;
		}
	}
	return 0;
}
/*
 能否 出界
 返回值：0 不能    1能
*/
int enabledOut(void)
{
	if (snake.header->hang == 0 || snake.header->hang == 19
		|| snake.header->lie == 0 || snake.header->lie == 19)
		return 1;
	else
		return 0;
}