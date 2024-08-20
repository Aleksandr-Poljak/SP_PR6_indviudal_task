#include <windows.h>

// Обработчики для HANDLE_MSG

/// <summary>
/// Обработчик создания окна.
/// </summary>
/// <param name="hwnd">Дескриптор окна</param>
/// <param name="lpCreateStruct">Структура с информацией о создании окна</param>
void wndProc_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct);

/// <summary>
/// Обработчик сообщения WM_PAINT.
/// Обновление клиентской области
/// </summary>
/// <param name="hwnd">Дескриптор окна</param>
void wndProc_OnPaint(HWND hwnd);

/// <summary>
/// Обработчик сообщения WM_COMMAND
/// </summary>
/// <param name="hwnd">Дескриптор окна</param>
/// <param name="id">Id элемента инициировавшего событие</param>
/// <param name="hwndCtl">Дескриптор элемента управления</param>
/// <param name="codeNotify">Код уведомления</param>
void wndProc_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);

/// <summary>
/// Обработчик сообщения WM_DESTROY. Закрытие приложения
/// </summary>
/// <param name="hwnd">Дескриптор окна</param>
void wndProc_OnDestroy(HWND hwnd);

/// <summary>
/// Обработчик сообщений клавиатуры
/// </summary>
void wndProc_OnKeyDown(HWND hwnd, UINT vk, BOOL fDown, int cRepeat, UINT flags);

/// <summary>
/// Обработчик сообщений перемещения мыши
/// </summary>
void wndProc_OnMouseMove(HWND hwnd, int x, int y, UINT keyFlags);

/// <summary>
/// Обработчик сообщения нажатия левой кнопки мыши
/// </summary>
void wndProc_OnLButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags);

/// <summary>
/// Обработчик сообщения отпускания левой кнопки мыши
/// </summary>
void wndProc_OnLButtonUp(HWND hwnd, int x, int y, UINT keyFlags);
