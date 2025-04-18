## Key Features
* The transistor's channel length (l) is set to 180nm (or 180e-9 meters).
* User input for width (w) and automatic calculation of other parameters.
* Clipboard copy feature (Windows-specific) and automatic cleanup temp

## Prerequisites
* Windows 10 system
> Press Windows key + R (win + R), and type winver to check
* Download the LLVM-MinGW
> Press Windows key + R (win + R), and type cmd to key the command below
```bash
gcc -v
```
> If download is done will be like
```bash
clang version 19.1.2 (https://github.com/llvm/llvm-project.git ...)
Target: x86_64-w64-windows-gnu
Thread model: posix
InstalledDir: ...
```

## How to Use
* Download
> You can [download](https://github.com/TsaiMingChan/cmos/blob/main/main.c) the latest installable version of main.c for Windows
* Compile and link the file by cmd 
```bash
gcc main.c
```
* Double click the a.exe. Type the width in um and press enter, and the parameters are in your clipboard
