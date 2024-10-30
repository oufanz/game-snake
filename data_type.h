#pragma once
typedef	struct snake_node {
	int hang;
	int lie;
	snake_node* prev;
	snake_node* next;
	snake_node() :hang(0), lie(0), prev(nullptr), next(nullptr) {};
}SNAKE_NODE;

typedef	struct snake {
	int fangxiang;//0:вС,1ио,2ср,3об;
	int length;
	snake_node* header;
	snake_node* ender;
	snake() :length(0), header(nullptr), ender(nullptr) {};
}SNAKE;

typedef struct apple {
	int hang;
	int lie;
}APPLE;