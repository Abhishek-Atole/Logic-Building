@echo off
REM Create directories if they don't exist
if not exist src mkdir src
if not exist docs mkdir docs

REM Move all .c files from Pratice Code to src
if exist "Pratice Code" (
    move "Pratice Code\*.c" src\ 2>nul
    rmdir /s /q "Pratice Code"
)

REM Move all .c files from root to src
move "*.c" src\ 2>nul

REM Move all .md files from root to docs (except README.md)
for %%f in (*.md) do (
    if /I not "%%f"=="README.md" move "%%f" docs\
)

REM Remove all .exe files from root
del /q *.exe 2>nul

REM Remove all ELF binaries (Linux compiled files) from root
for %%f in (program*) do (
    if not "%%~xf"==".c" if not "%%~xf"==".exe" del /q "%%f"
)

echo Repository organized successfully!
pause