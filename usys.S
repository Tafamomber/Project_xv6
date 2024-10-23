#define SYS_getfilenum 24  // or the next available syscall number

.globl getfilenum
getfilenum:
    li a7, SYS_getfilenum  // syscall number
    ecall
    ret
