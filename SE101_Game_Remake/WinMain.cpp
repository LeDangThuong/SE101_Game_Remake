#include <Windows.h>
#include<tchar.h>

HINSTANCE hInst; //tham số này định danh thể hiện của chương trình
HWND wndHandle;

int width = 640;
int height = 480;

// forward declarations
bool InitWindow(HINSTANCE hInstance, int width, int height);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
