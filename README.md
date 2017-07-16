# LLVM 4.0.0
A build script for building the 4.0.0 version of LLVM, Clang, Clang-tools, LLD, Polly, &amp; Compiler-RT

Building Clang is a bit of a pain - this repository contains a bash script to make the process easier. Make sure that you have
GNU Make 	3.79, 3.79.1 	Makefile/build processor
GCC 	>=4.8.0 	C/C++ compiler
python 	>=2.7 	Automated test suite
zlib 	>=1.2.3.4 	Compression library

and then source the provided install.sh script to build Ver 4.0.0 of LLVM, Clang, Clang-tools, LLD, Polly, &amp; Compiler-RT and place the executables in the bin directory under the build folder. You can add said bin directory to your path.
