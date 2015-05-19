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
#pragma comment(lib, "Qt5Networkd.lib")

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

int g_bHasSse2 = false;	//!!!

tm * __cdecl gmtime_r(const time_t *timer, tm *result) {
	__time64_t t64 = *timer;
	if (!_gmtime64_s(result, &t64))
		return result;
	return 0;
}

}

void __cdecl usleep(int useconds) {
	Sleep((std::max)(1, useconds/1000));
}

