#pragma once
#include<stdio.h>
#include<stdlib.h>

/*��ʼ����*/
void newSanke(void);

/*�� ����*/
void snakeMove(void);

/*
 �ܷ�Ե�ƻ��
 ����ֵ��0 ����    1��
*/
int enabledEatApple(void);

/*�� ����*/
void snakeGrow(void);

/*
 �ܷ�Ե��Լ�
 ����ֵ��0 ����    1��
*/
int enabledEatSelf(void);

/*
 �ܷ� ����
 ����ֵ��0 ����    1��
*/
int enabledOut(void);