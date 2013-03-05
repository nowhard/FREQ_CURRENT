#ifndef DAC_H
#define DAC_H
#include <ADuC845.h>
#include "preferences.h"
#include "eeprom/eeprom.h"
//------------------------------------------------------------
#define REF_VOLTAGE 2.5
#define DAC_MAX_CURRENT 15 //������������ ��� �� ������ 15 ��
//------------------------------------------------------------
void DAC_Init(void);//������������� ���
void DAC_Start(void);
void DAC_Set_Value(unsigned int val); //���������� ���������� �� ���
//void DAC_Set_Current(float current);	//��������� ����
//void Store_DAC_Settings(float voltage);//���������� ���������� ��� � ����
//float Restore_DAC_Settings(void); //������������ �������� ���������� �� ��� �� ����
//------------------------------------------------------------


#endif