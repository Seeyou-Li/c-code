/*
  ******************************************************************************
  * 文件名 	    : P_Lib.c(（Personal Library）)
  * 文件说明		：此文件主要存储一些个人常用的C语言函数及代码
  * 日期          : 2022.1.4
  * 当前版本		：V0.1
  * 作者			：李浩文
  ******************************************************************************
  版本记录：
  -------------------------------------------------------
  版本号			       内容   			
	日期
  -------------------------------------------------------
  V0.1 				首次创建文件				  2022.1.4
  
*/
#ifndef P_LIB_C
#define P_LIB_C

/*****************************包含的头文件***********************************/
#include <stdio.h> // 是带缓冲的标准输入输出的函数，也就是在输入输出时要调用这个头文件
#include <string.h>// 是字符串处理函数，一般常用的包括函数：strlen（求字符串长度）、strcmp（ 比较2个字符串是否一样）、strcpy（字符串拷贝操作）等
#include <stdlib.h>// 包括动态内存管理，随机数生成，与环境的通信，整数算术，搜索，排序和转换
#include <math.h>  // 声明了一组函数来计算常见的数学运算和转换：
#include <P_Lib.h>

/*****************************串口打印函数************************************/
int fputc(int ch, FILE *f) // define printf , by redefine the fputc() in  stdio.h
{
	HAL_UART_Transmit(&HUART, (uint8_t*)&ch, 1, 0xFFFF); 
	return ch;
}

/*****************************冒泡排序法、去两头取平均************************************/
// bubble sort
#define FILTER_NUM  100 //采集的数据个数
#define DISCARD_DATA_NUM 10 //丢弃的数据个数=DISCARD_DATA_NUM*2

int i,j,sum,tran=0;
int array[FILTER_NUM] = {0};
for(i=0; i<FILTER_NUM-1; i++)
{
	for(j=0; j<FILTER_NUM-1-i; j++)
	{
		if(array[j] > array[j+1])
		{
			tran= array[j];
			array[j] = array[j+1];
			array[j+1] = tran;
		}
	}
}
// 
for(i=DISCARD_DATA_NUM; i<FILTER_NUM-DISCARD_DATA_NUM; i++)
{
	sum += array[i];
}
return sum/(FILTER_NUM-2*DISCARD_DATA_NUM);

#endif
