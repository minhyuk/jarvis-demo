@echo off
set PATH=C:\gcc\5.3.0\32bit\bin;%PATH%
gcc -c bad_case.c
gcc -c test.c
gcc -o test.exe bad_case.o test.o