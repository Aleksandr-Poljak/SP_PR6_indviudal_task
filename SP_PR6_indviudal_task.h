#include "resource.h"

extern RECT frameRect; // �����
extern bool drawMouseMode; //����� ���������
extern bool LBMouseDown; //����� ������ ���� 

//����������� ������� � �� �������� ���������� � �������:
#define VK_H		0x48 // H (�����)
#define VK_J		0x4A // J (������)
#define VK_K		0x4B // K (�����)
#define VK_L		0x4C // L (����)

/// <summary>
/// ������� ��� ��������� ������������
/// </summary>
bool DrawTriangle(HDC hdc, int x, int y, int size, COLORREF color);
