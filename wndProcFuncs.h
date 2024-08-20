#include <windows.h>

// ����������� ��� HANDLE_MSG

/// <summary>
/// ���������� �������� ����.
/// </summary>
/// <param name="hwnd">���������� ����</param>
/// <param name="lpCreateStruct">��������� � ����������� � �������� ����</param>
void wndProc_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct);

/// <summary>
/// ���������� ��������� WM_PAINT.
/// ���������� ���������� �������
/// </summary>
/// <param name="hwnd">���������� ����</param>
void wndProc_OnPaint(HWND hwnd);

/// <summary>
/// ���������� ��������� WM_COMMAND
/// </summary>
/// <param name="hwnd">���������� ����</param>
/// <param name="id">Id �������� ��������������� �������</param>
/// <param name="hwndCtl">���������� �������� ����������</param>
/// <param name="codeNotify">��� �����������</param>
void wndProc_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);

/// <summary>
/// ���������� ��������� WM_DESTROY. �������� ����������
/// </summary>
/// <param name="hwnd">���������� ����</param>
void wndProc_OnDestroy(HWND hwnd);

/// <summary>
/// ���������� ��������� ����������
/// </summary>
void wndProc_OnKeyDown(HWND hwnd, UINT vk, BOOL fDown, int cRepeat, UINT flags);
