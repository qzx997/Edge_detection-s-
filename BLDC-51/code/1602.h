#include "reg51.h"
#define uchar unsigned char
#define uint  unsigned int




sbit E=P2^7;		//1602ʹ������	  ����
sbit RW=P2^6;		//1602��д����	
sbit RS=P2^5;		//1602����/����ѡ������

//sbit E=P2^5;		//1602ʹ������
//sbit RW=P2^6;		//1602��д����	
//sbit RS=P2^7;		//1602����/����ѡ������

//unsigned char code hanzi[][8]={{0x04,0x0f,0x12,0x0f,0x0a,0x1f,0x02,0x02},{0x0f,0x09,0x0f,0x09,0x0f,0x09,0x13,0x11},{0x1f,0x11,0x11,0x1f,0x11,0x11,0x1f,0x00}};

void delay(uchar x);

void L1602_Write_char(uchar hang,uchar lie,char sign);

void L1602_init(void);

void L1602_Write_string(uchar hang,uchar lie,uchar *p);

void L1602_Write_Com(uchar del);