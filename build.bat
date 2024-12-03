@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\Common7\Tools\VsDevCmd.bat"
cl -c bad_case.c
cl -c test.c
cl test.obj bad_case.obj /Fetest.exe
