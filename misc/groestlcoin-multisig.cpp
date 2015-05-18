#pragma comment(lib, "ole32")
#pragma comment(lib, "shell32")
#pragma comment(lib, "user32")

#ifdef _DEBUG
#	pragma comment(lib, "libboost_regex-vc140-mt-sgd-1_58.lib")
#	pragma comment(lib, "libboost_system-vc140-mt-sgd-1_58.lib")
#	pragma comment(lib, "libboost_serialization-vc140-mt-sgd-1_58.lib")
#	pragma comment(lib, "libboost_thread-vc140-mt-sgd-1_58.lib")
#	pragma comment(lib, "libboost_filesystem-vc140-mt-sgd-1_58.lib")
#endif


#pragma comment(lib, "openssl")
#pragma comment(lib, "sqlite3")


#pragma comment(lib, "qtmaind.lib")
#pragma comment(lib, "qtharfbuzzngd.lib")
#pragma comment(lib, "Qt5Cored.lib")
#pragma comment(lib, "Qt5Widgetsd.lib")
#pragma comment(lib, "Qt5PlatformSupportd.lib")
#pragma comment(lib, "Qt5Guid.lib")

#include <windows.h>

#undef WinMain

extern "C" {

int WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_ HINSTANCE hPrevInstance,
	_In_ LPSTR     lpCmdLine,
	_In_ int       nCmdShow
	);

int WINAPI wWinMain(
	_In_ HINSTANCE hInstance,
	_In_ HINSTANCE hPrevInstance,
	_In_ LPWSTR     lpCmdLine,
	_In_ int       nCmdShow
	) {

	return WinMain(hInstance, hPrevInstance, 0, nCmdShow);


}

}