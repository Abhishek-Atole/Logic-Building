@echo off
REM Create necessary directories
if not exist src mkdir src
if not exist docs mkdir docs
if not exist bin mkdir bin
if not exist .github mkdir .github
if not exist .github\workflows mkdir .github\workflows
if not exist .vscode mkdir .vscode

REM Create .gitignore
echo *.exe> .gitignore
echo *.o>> .gitignore
echo *.out>> .gitignore
echo *.obj>> .gitignore
echo /bin/>> .gitignore

REM Create README.md
(
echo # Logic Building in C
echo.
echo This repository contains a series of C programs and exercises designed to teach and reinforce logic building skills in C programming.
echo.
echo ## Structure
echo.
echo - ^`src/^` - Source code for all exercises and examples.
echo - ^`docs/^` - Course notes and documentation.
echo - ^`bin/^` - Compiled binaries (not tracked in git).
echo - ^`.github/^` - GitHub Actions workflows for CI.
echo - ^`.vscode/^` - VS Code configuration.
echo.
echo ## Getting Started
echo.
echo ### Prerequisites
echo.
echo - GCC or any C compiler
echo - Make (optional, for build automation)
echo.
echo ### Build All Programs
echo.
echo ^```sh
echo make
echo ^```
echo.
echo ### Run an Example
echo.
echo ^```sh
echo ./bin/program01
echo ^```
echo.
echo ## Contributing
echo.
echo Pull requests are welcome!
echo.
echo ## License
echo.
echo [MIT](LICENSE)
) > README.md

REM Create LICENSE
(
echo MIT License
echo.
echo Copyright ^(c^) 2024
echo.
echo Permission is hereby granted, free of charge, to any person obtaining a copy
echo of this software and associated documentation files ^(the "Software"^), to deal
echo in the Software without restriction, including without limitation the rights
echo to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
echo copies of the Software, and to permit persons to whom the Software is
echo furnished to do so, subject to the following conditions:
echo.
echo The above copyright notice and this permission notice shall be included in all
echo copies or substantial portions of the Software.
echo.
echo THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
echo IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
echo FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
echo AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
echo LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
echo OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
echo SOFTWARE.
) > LICENSE

REM Create Makefile
(
echo CC=gcc
echo CFLAGS=-Wall -Wextra -std=c11
echo SRC_DIR=src
echo BIN_DIR=bin
echo.
echo SOURCES=$^(wildcard $^(SRC_DIR^)/*.c^)
echo TARGETS=$^(patsubst $^(SRC_DIR^)/%%.c,$^(BIN_DIR^)/%%,$^(SOURCES^)^)
echo.
echo all: $^(BIN_DIR^) $^(TARGETS^)
echo.
echo $^(BIN_DIR^):
echo.    mkdir -p $^(BIN_DIR^)
echo.
echo $^(BIN_DIR^)/%%: $^(SRC_DIR^)/%%.c
echo.    $^(CC^) $^(CFLAGS^) $$< -o $$@
echo.
echo clean:
echo.    rm -rf $^(BIN_DIR^)
echo.
echo .PHONY: all clean
) > Makefile

REM Create docs\README.md
(
echo # Documentation
echo.
echo This folder contains course notes, templates, and explanations for logic building in C.
echo.
echo See [01 - How to Write the code .md](01%%20-%%20How%%20to%%20Write%%20the%%20code%%20.md) for a general C program template.
) > docs\README.md

REM Create .github\workflows\c-cpp.yml
(
echo name: C/C++ CI
echo.
echo on: [push, pull_request]
echo.
echo jobs:
echo.  build:
echo.    runs-on: ubuntu-latest
echo.
echo.    steps:
echo.    - uses: actions/checkout@v2
echo.    - name: Build all C programs
echo.      run: ^|
echo.        sudo apt-get update
echo.        sudo apt-get install -y build-essential
echo.        make
) > .github\workflows\c-cpp.yml

REM Create .vscode\launch.json
(
echo {
echo.    "version": "0.2.0",
echo.    "configurations": [
echo.        {
echo.            "name": "Launch Program",
echo.            "type": "cppdbg",
echo.            "request": "launch",
echo.            "program": "^${workspaceFolder}/bin/program01",
echo.            "args": [],
echo.            "stopAtEntry": false,
echo.            "cwd": "^${workspaceFolder}",
echo.            "environment": [],
echo.            "externalConsole": true,
echo.            "MIMode": "gdb",
echo.            "setupCommands": [
echo.                {
echo.                    "description": "Enable pretty-printing for gdb",
echo.                    "text": "-enable-pretty-printing",
echo.                    "ignoreFailures": true
echo.                }
echo.            ]
echo.        }
echo.    ]
echo }
) > .vscode\launch.json

echo All professional repo files and folders have been created!
pause