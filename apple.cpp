#include "data_type.h"
#include"apple.h" 
#include<stdlib.h>
/*����ƻ��*/
APPLE apple;
 void newApple(void)
{
	apple.hang = rand() % 14 + 3; //3~16
	apple.lie = rand() % 14 + 3;
}
