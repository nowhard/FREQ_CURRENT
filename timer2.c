#include "timer2.h"
//-------------------------------------------------------
void Timer2_Initialize(void) //using 0// ������������� ������� 2-�������� ������� ��� �����������
{
    ET2 = 1;
	T2CON=0x00;
   	TL2 = 0xFF;
	TH2 = 0xE7;
	RCAP2L = 0xFF;
    RCAP2H = 0xE7; //1024Hz
	TR2=1;
	return;
}
//-------------------------------------------------------
