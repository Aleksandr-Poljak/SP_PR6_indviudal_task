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