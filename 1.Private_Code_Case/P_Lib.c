/*
  ******************************************************************************
  * �ļ��� 	    : P_Lib.c(��Personal Library��)
  * �ļ�˵��		�����ļ���Ҫ�洢һЩ���˳��õ�C���Ժ���������
  * ����          : 2022.1.4
  * ��ǰ�汾		��V0.1
  * ����			�������
  ******************************************************************************
  �汾��¼��
  -------------------------------------------------------
  �汾��			       ����   			
	����
  -------------------------------------------------------
  V0.1 				�״δ����ļ�				  2022.1.4
  
*/
#ifndef P_LIB_C
#define P_LIB_C

/*****************************������ͷ�ļ�***********************************/
#include <stdio.h> // �Ǵ�����ı�׼��������ĺ�����Ҳ�������������ʱҪ�������ͷ�ļ�
#include <string.h>// ���ַ�����������һ�㳣�õİ���������strlen�����ַ������ȣ���strcmp�� �Ƚ�2���ַ����Ƿ�һ������strcpy���ַ���������������
#include <stdlib.h>// ������̬�ڴ������������ɣ��뻷����ͨ�ţ����������������������ת��
#include <math.h>  // ������һ�麯�������㳣������ѧ�����ת����
#include <P_Lib.h>

/*****************************���ڴ�ӡ����************************************/
int fputc(int ch, FILE *f) // define printf , by redefine the fputc() in  stdio.h
{
	HAL_UART_Transmit(&HUART, (uint8_t*)&ch, 1, 0xFFFF); 
	return ch;
}

/*****************************ð�����򷨡�ȥ��ͷȡƽ��************************************/
// bubble sort
#define FILTER_NUM  100 //�ɼ������ݸ���
#define DISCARD_DATA_NUM 10 //���������ݸ���=DISCARD_DATA_NUM*2

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
