#include "timer2.h"
//-------------------------------------------------------
void Timer2_Initialize(void) //using 0// ������������� ������� 2-�������� ������� ��� �����������
{
    ET2 = 1;
	T2CON=0x00;
   	TL2 = 0x73;//0xFF;
	TH2 = 0xF5;//0xE7;
	RCAP2L = 0x73;//0xFF;
    RCAP2H = 0xF5;//4096 Hz(11.0592)//0xE7; //1024Hz
	TR2=1;
	return;
}
//-------------------------------------------------------
