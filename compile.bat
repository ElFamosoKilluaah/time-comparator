@echo off
mkdir bin
gcc -Wall -Wformat -Wfatal-errors -Wincompatible-pointer-types *.c -o "bin\program.exe"