#include <wtypes.h>
#include "SP_PR6_indviudal_task.h"

bool DrawTriangle(HDC hdc, int x, int y, int size, COLORREF color)
{
    POINT vertices[3];
    vertices[0].x = x;
    vertices[0].y = y - size;  

    vertices[1].x = x - size;
    vertices[1].y = y + size;

    vertices[2].x = x + size;
    vertices[2].y = y + size;

    HBRUSH hBrush = CreateSolidBrush(color);
    SelectObject(hdc, hBrush);
    Polygon(hdc, vertices, 3);
    DeleteObject(hBrush);

    return TRUE;
}