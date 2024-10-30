#pragma once
#include<stdio.h>
#include<stdlib.h>

/*初始化蛇*/
void newSanke(void);

/*蛇 爬行*/
void snakeMove(void);

/*
 能否吃到苹果
 返回值：0 不能    1能
*/
int enabledEatApple(void);

/*蛇 长个*/
void snakeGrow(void);

/*
 能否吃到自己
 返回值：0 不能    1能
*/
int enabledEatSelf(void);

/*
 能否 出界
 返回值：0 不能    1能
*/
int enabledOut(void);