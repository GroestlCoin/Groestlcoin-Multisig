#include <hash.h>
#include <CoinQ_coinparams.h>



#pragma comment(lib, "openssl")
#pragma comment(lib, "sqlite3")

#ifdef _MSC_VER

#	include <windows.h>

#	undef WinMain

void __cdecl usleep(int useconds) {
	Sleep((std::max)(1, useconds/1000));
}

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

} // "C"

#include <QtPlugin>

Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)

#	pragma comment(lib, "ole32")
#	pragma comment(lib, "shell32")
#	pragma comment(lib, "user32")
#	pragma comment(lib, "Imm32")
#	pragma comment(lib, "Winmm")

#	ifdef _DEBUG
#		pragma comment(lib, "libboost_regex-vc140-mt-sgd-1_58.lib")
#		pragma comment(lib, "libboost_system-vc140-mt-sgd-1_58.lib")
#		pragma comment(lib, "libboost_serialization-vc140-mt-sgd-1_58.lib")
#		pragma comment(lib, "libboost_thread-vc140-mt-sgd-1_58.lib")
#		pragma comment(lib, "libboost_filesystem-vc140-mt-sgd-1_58.lib")

#		pragma comment(lib, "qtmaind.lib")
#		pragma comment(lib, "qwindowsd.lib")
#		pragma comment(lib, "qtharfbuzzngd.lib")
#		pragma comment(lib, "Qt5Cored.lib")
#		pragma comment(lib, "Qt5Widgetsd.lib")
#		pragma comment(lib, "Qt5PlatformSupportd.lib")
#		pragma comment(lib, "Qt5Guid.lib")
#		pragma comment(lib, "Qt5Networkd.lib")
#	else
#		pragma comment(lib, "libboost_regex-vc140-mt-s-1_58.lib")
#		pragma comment(lib, "libboost_system-vc140-mt-s-1_58.lib")
#		pragma comment(lib, "libboost_serialization-vc140-mt-s-1_58.lib")
#		pragma comment(lib, "libboost_thread-vc140-mt-s-1_58.lib")
#		pragma comment(lib, "libboost_filesystem-vc140-mt-s-1_58.lib")

#		pragma comment(lib, "qtmain.lib")
#		pragma comment(lib, "qwindows.lib")
#		pragma comment(lib, "qtharfbuzzng.lib")
#		pragma comment(lib, "Qt5Core.lib")
#		pragma comment(lib, "Qt5Widgets.lib")
#		pragma comment(lib, "Qt5PlatformSupport.lib")
#		pragma comment(lib, "Qt5Gui.lib")
#		pragma comment(lib, "Qt5Network.lib")
#	endif
#endif


