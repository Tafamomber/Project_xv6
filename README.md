# Project_xv6

# xv6 System Call: `getfilenum()` – Homework Assignment

## Overview

This project was assigned as part of a homework task to familiarize me with xv6 by adding a new system call to the kernel. The system call `getfilenum(int pid)` returns the number of open files for the process identified by the specified `pid`.

The project involves modifying the xv6 kernel, adding the system call, and testing it with a user program that opens files and checks how many are open at a given time.

## System Call Description

- **Name**: `getfilenum(int pid)`
- **Functionality**: Returns the number of files that the process identified by `pid` currently has open.
  
  If the process with the specified `pid` does not exist or if there are no open files, the system call returns `-1`.

## Files Modified

1. **`syscall.c`**: Registered the new system call in the system call table.
2. **`syscall.h`**: Added a unique system call number for `getfilenum`.
3. **`sysproc.c` or `proc.c`**: Implemented the system call logic for counting open files.
4. **`Makefile`**: Added a new user-space test program to the list of programs that are compiled.
5. **`test_getfilenum.c`**: A user-space program that opens files, calls `getfilenum()`, and prints the number of open files for the current process.

### Prerequisites

- **macOS** with developer tools (Xcode or command line tools)
- **QEMU**: The emulator used to run xv6
- **RISC-V Cross-Compiler**: The toolchain for compiling xv6 (instructions provided during class or in the [xv6 repository](https://github.com/mit-pdos/xv6-riscv)).

