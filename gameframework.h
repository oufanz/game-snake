#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <easyx.h>
#include <time.h>
#include <conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<graphics.h>
/*��Ϸ�������*/
void gamePaint();
/*��Ϸ��ʼ������*/
void gameInit();
/*��Ϸ��ʱ����*/
void gameInterval();
/*��Ϸ���̰���*/
void gameKeypress(int key);
/*��Ϸ��갴��*/
void gameMouseDown(int mouseX, int mouseY);
/*��Ϸ����Ҽ�����*/
void gameMouseRightDown(int mouseX, int mouseY);
/*��Ϸ���̧��*/
void gameMouseUp(int mouseX, int mouseY);
/*��Ϸ����ƶ�*/
void gameMousemove(int mouseX, int mouseY);

/*
��͸����ͼ�Ļ���
xΪҪ����ͼƬ��X���꣬yΪY����
*/
void drawImage(int  picture_x, int picture_y, IMAGE* picture);
/*����ͼƬ͸����
  �Ƕ�ת���ȣ�PI/180*�Ƕ�
  ����ת�Ƕȣ�180/PI*����
*/
void drawImageAlpha(int x0, int y0, IMAGE* img, double f);
/*����������ײ���
�����������Ƿ��ཻ��
 x1, y1, w1�� h1�ǵ�һ�����ε�xy��ߵ��ĸ�����
 x2, y2, w2�� h2�ǵڶ������ε�xy��ߵ��ĸ�����
 ����0�����ཻ ����1�����ཻ
*/
int testHit(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2);


/*����100��ÿ��100����ˢ�����½����ͼ��*/
extern int interval  ;//TODO: 1 ���ö�ʱ��ʱ��������λ���룩
// TODO: 1 ���ô���: ��� �߶�
extern int screenWidth  ;
extern int screenHeight  ;
extern int stop  ;//�Ƿ�ֹͣ��Ϸ
//-----------------------------------//
extern int times  ;

 