@echo off
exe_files\NVEncC\x86\NVEncC.exe --check-hw
if %errorlevel% == 0 (
    echo NVENC�͗��p�\�ł��B
) else (
    echo NVENC�����p�ł��܂���B
)
pause