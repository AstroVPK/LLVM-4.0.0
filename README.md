# LLVM 4.0.0
A build script for building the 4.0.0 version of LLVM, Clang, Clang-tools, LLD, Polly, libc++, libc++ ABI, &amp; Compiler-RT

Building Clang is a bit of a pain - this repository contains a bash script to make the process easier. Make sure that you have
1. GNU Make 	3.79, 3.79.1 	Makefile/build processor
2. GCC 	>=4.8.0 	C/C++ compiler
3. python 	>=2.7 	Automated test suite
4. zlib 	>=1.2.3.4 	Compression library

and then do `source ./install.sh` script to build Ver 4.0.0 of LLVM, Clang, Clang-tools, LLD, Polly, libc++, libc++ ABI &amp; Compiler-RT and place the executables in the bin directory under the build folder. You can then run `make install` in the `build` directory to install the various bits and pieces to the correct system folders.
