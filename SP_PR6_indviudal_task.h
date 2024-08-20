#include "resource.h"

extern RECT frameRect; // Рамка
extern bool drawMouseMode; //Режим рисования
extern bool LBMouseDown; //Левая кнопка мыши 

//Виртуальные клавиши и их числовые значениями в системе:
#define VK_H		0x48 // H (Влево)
#define VK_J		0x4A // J (Вправо)
#define VK_K		0x4B // K (Вверх)
#define VK_L		0x4C // L (Вниз)

/// <summary>
/// функция для рисования треугольника
/// </summary>
bool DrawTriangle(HDC hdc, int x, int y, int size, COLORREF color);
