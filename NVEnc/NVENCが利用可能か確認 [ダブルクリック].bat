@echo off
set NVENCC_PATH=exe_files\NVEncC\x64\NVEncC64.exe
if "%PROCESSOR_ARCHITECTURE%" == "x86" (
    set NVENCC_PATH=exe_files\NVEncC\x86\NVEncC.exe
)

%NVENCC_PATH% --check-hw --log-level debug
if %errorlevel% == 0 (
    echo NVENC�͗��p�\�ł��B
) else (
    echo NVENC�����p�ł��܂���B
)
pause