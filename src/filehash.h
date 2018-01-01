﻿// ファイルハッシュ一覧
// 同梱するファイルに合わせてハッシュ値を変更すること

// ssl.pem
#define FILEHASH_SSL_PEM_SHA1			"\xB5\x0E\xE9\xDC\x25\x9D\xAC\x83\x09\xB3\x42\xA3\xB9\x7C\xF2\x1A\xAD\xA8\x27\xA6"
#if defined(_M_IX86)
// libcrypto-1_1.dll
#define FILEHASH_LIBCRYPTO_DLL_SHA1		"\x8F\xA8\x54\xD1\x27\x65\x18\xE4\x43\xA5\x5C\xAF\x65\x39\x66\xB8\x3A\x05\xE8\x0B"
// libssl-1_1.dll
#define FILEHASH_LIBSSL_DLL_SHA1		"\x42\x65\x00\x4A\xC9\xF8\xFE\x28\x49\xE2\x90\x51\x58\x2B\x57\x09\x97\xB0\x3B\xAD"
#elif defined(_M_AMD64)
// libcrypto-1_1-x64.dll
#define FILEHASH_LIBCRYPTO_DLL_SHA1		"\xAF\xD4\xCF\x21\x2B\x87\x92\x25\x6B\x6F\x8E\x49\x36\x85\xD4\xC9\x2E\xFC\x88\xC7"
// libssl-1_1-x64.dll
#define FILEHASH_LIBSSL_DLL_SHA1		"\x91\xE6\xC3\x0B\xAF\x9A\x13\x24\x12\x73\x3D\x96\x3A\xBA\xB2\xA1\x0D\x43\x44\x5E"
#endif
