/*
  * �ļ��� 	    : P_Lib.h��Personal Library��
  * �ļ�˵��		�����ļ���Ҫ�ǽ��к����������궨�塢�ṹ�嶨�壬����Personal_Library.cʹ��
*/

#ifndef P_LIB_H
#define P_LIB_H

#ifdef __cplusplus
extern "C" {
#endif

/*****************************������ͷ�ļ�****************************************/
#include "stm32l4xx_hal.h"//���ݱ���ͷ�ļ�
#include "usart.h"//����ͷ�ļ�

/*****************************������������****************************************/
#define HUART  huart1 //�ض����ӡ����

/*****************************������λ�õĴ�ӡ************************************/
#define DBG_PRINTF(fmt, args...)  \
do\
{\
    printf("<<File:%s  Line:%d  Function:%s>> ", __FILE__, __LINE__, __FUNCTION__);\
    printf(fmt, ##args);\
}while(0)


/*****************************�����������ݱ���************************************/
typedef int32_t  s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef const int32_t sc32;  /*!< Read Only */
typedef const int16_t sc16;  /*!< Read Only */
typedef const int8_t sc8;   /*!< Read Only */

typedef __IO int32_t  vs32;
typedef __IO int16_t  vs16;
typedef __IO int8_t   vs8;

typedef __I int32_t vsc32;  /*!< Read Only */
typedef __I int16_t vsc16;  /*!< Read Only */
typedef __I int8_t vsc8;   /*!< Read Only */

typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32;  /*!< Read Only */
typedef const uint16_t uc16;  /*!< Read Only */
typedef const uint8_t uc8;   /*!< Read Only */

typedef __IO uint32_t  vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t  vu8;

typedef __I uint32_t vuc32;  /*!< Read Only */
typedef __I uint16_t vuc16;  /*!< Read Only */
typedef __I uint8_t vuc8;   /*!< Read Only */


#ifdef __cplusplus
}
#endif

#endif
