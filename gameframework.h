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
/*游戏界面绘制*/
void gamePaint();
/*游戏初始化绘制*/
void gameInit();
/*游戏定时处理*/
void gameInterval();
/*游戏键盘按下*/
void gameKeypress(int key);
/*游戏鼠标按下*/
void gameMouseDown(int mouseX, int mouseY);
/*游戏鼠标右键按下*/
void gameMouseRightDown(int mouseX, int mouseY);
/*游戏鼠标抬起*/
void gameMouseUp(int mouseX, int mouseY);
/*游戏鼠标移动*/
void gameMousemove(int mouseX, int mouseY);

/*
含透明的图的绘制
x为要载入图片的X坐标，y为Y坐标
*/
void drawImage(int  picture_x, int picture_y, IMAGE* picture);
/*调整图片透明度
  角度转弧度：PI/180*角度
  弧度转角度：180/PI*弧度
*/
void drawImageAlpha(int x0, int y0, IMAGE* img, double f);
/*两个矩形碰撞检测
即两个矩形是否相交。
 x1, y1, w1， h1是第一个矩形的xy宽高的四个参数
 x2, y2, w2， h2是第二个矩形的xy宽高的四个参数
 返回0代表不相交 返回1代表相交
*/
int testHit(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2);


/*设置100即每隔100毫秒刷新以下界面绘图。*/
extern int interval  ;//TODO: 1 设置定时器时间间隔（单位毫秒）
// TODO: 1 设置窗口: 宽度 高度
extern int screenWidth  ;
extern int screenHeight  ;
extern int stop  ;//是否停止游戏
//-----------------------------------//
extern int times  ;

 