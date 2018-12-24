cd ./zlib/zlib-1.2.8
./configure
cd ../
make
mv libsltk3_zlib.a ../../lib/linux/libsltk3_zlib.a
make clean
cd ..