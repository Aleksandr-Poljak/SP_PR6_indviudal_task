#include "wndProcFuncs.h"
#include "resource.h"
#include "SP_PR6_indviudal_task.h"


void wndProc_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct)
{

}

void wndProc_OnDestroy(HWND hwnd)
{
    PostQuitMessage(0);
}

void wndProc_OnPaint(HWND hwnd)
{
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hwnd, &ps);
    Rectangle(hdc, frameRect.left, frameRect.top, frameRect.right, frameRect.bottom);

    TCHAR coordinates[100];
    wsprintf(coordinates, TEXT("Upper left corner coordinates: X = %d Y = %d"), frameRect.left, frameRect.top);
    SetTextColor(hdc, RGB(0, 128, 128)); // (50% зелёный + 50% синий)
    TextOut(hdc, 10, 500, coordinates, lstrlen(coordinates));

    EndPaint(hwnd, &ps);
}

void wndProc_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{

    switch (id)
    {
    case IDM_EXIT:
        DestroyWindow(hwnd);
        break;
    default:       
        MessageBox(hwnd, TEXT("Неизвестная команда"), TEXT("Ошибка"), MB_OK);
        break;
    }
}

void wndProc_OnKeyDown(HWND hwnd, UINT vk, BOOL fDown, int cRepeat, UINT flags)
{
    switch (vk)
    {
    case VK_ESCAPE:
        DestroyWindow(hwnd);
        break;       
    case VK_H: // Перемещение рамки влево на 7 пикс.
        frameRect.left -= 7;
        frameRect.right -= 7;
        break;     
    case VK_J: // Перемещение рамки вправо на 7 пикс.
        frameRect.left += 7;
        frameRect.right += 7;
        break;     
    case VK_K: // Перемещение рамки вверх на 7 пикс.
        frameRect.top -= 7;
        frameRect.bottom -= 7;
        break;     
    case VK_L: // Перемещение рамки вниз на 7 пикс.
        frameRect.top += 7;
        frameRect.bottom += 7;
        break;
    case VK_F2:
        drawMouseMode = TRUE;
        break;
    case VK_F3:
        drawMouseMode = FALSE;
        break;
    default:
        break;
    }
    InvalidateRect(hwnd, NULL, TRUE);
}

void wndProc_OnMouseMove(HWND hwnd, int x, int y, UINT keyFlags)
{
    static int moveCount = 0;
    if (drawMouseMode && LBMouseDown && x >= frameRect.left && x <= frameRect.right && y >= frameRect.top && y <= frameRect.bottom)
    {
        moveCount++;
        if (moveCount % 4 == 0)
        {
            HDC hdc = GetDC(hwnd);
            DrawTriangle(hdc, x, y, 10, RGB(0, 128, 128));
            ReleaseDC(hwnd, hdc);
        }
    }
   
}


void wndProc_OnLButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags)
{
    LBMouseDown = TRUE;
}

void wndProc_OnLButtonUp(HWND hwnd, int x, int y, UINT keyFlags)
{
    LBMouseDown = FALSE;
}