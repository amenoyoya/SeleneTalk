@call C:\App\vc2010\vcvars.bat

%compile% /D"_WIN32" /D"CURL_STATICLIB" /D"USE_ZLIB=1" /D"HAVE_ZLIB_H=1" /D"HAVE_LIBZ=1" /D"USE_SSLEAY=1" /D"USE_OPENSSL=1" /D"HAVE_CRYPTO_CLEANUP_ALL_EX_DATA=1" /D"HAVE_OPENSSL_ENGINE_H=1" /D"OPENSSL_NO_KRB5=1" /wd4005 /wd4309 *.c
@pause

%create_dll% /OUT:"lcurl.dll" /NOLOGO *.obj libcurl_a.lib lua51.lib
@pause

@del *.obj
