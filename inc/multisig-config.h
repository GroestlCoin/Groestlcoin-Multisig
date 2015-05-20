#pragma once

#pragma warning(disable: 4068 4101 4244 4267 4290 4308 4800 4996)


#define _WIN32_WINNT 0x0601

#define _CRT_SECURE_NO_WARNINGS

#define QT_STATIC

#define LIBODB_STATIC_LIB
#define LIBODB_SQLITE_STATIC_LIB

#define DATABASE_SQLITE

#define BOOST_ALL_NO_LIB
#define BOOST_FILESYSTEM_NO_LIB

#define BOOST_ASIO_ERROR_CATEGORY_NOEXCEPT noexcept(true)

#define NOMINMAX

#define __STATIC static


// for qrencode only
#define MAJOR_VERSION 3
#define MINOR_VERSION 4
#define MICRO_VERSION 3
#define VERSION "3.4.3"

#define GRS_CFG_GROESTLCOIN 1



