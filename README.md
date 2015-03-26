# Cprogramming
Learning C

gcc --help
  -E                       Preprocess only; do not compile, assemble or link
  -S                       Compile only; do not assemble or link
  -c                       Compile and assemble, but do not link
  -o <file>                Place the output into <file>
  

gcc -o Program_EXE_name HelloWorld.c
./Program_EXE_name 

//Compile and assemble two programs and create object files then link both.
gcc -c -o CheckPrime.o CheckPrime.c
gcc -c -o Test.o Test.c
gcc  -o MyProg Test.o CheckPrime.o

 gcc -Wall -W -Werror main.c -o HelloWorldC
 The options -Wall -W and -Werror instruct the compiler to check for warnings.
  ./HelloWorldC
