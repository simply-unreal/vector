@echo off
cmake --build build

if errorlevel 1 exit /b %errorlevel%

cls
.\build\vector.exe