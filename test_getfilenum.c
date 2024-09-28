#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void) {
    int pid = getpid();  // Get the current process's pid
    int fd1, fd2, fd3;

    // Open a few files
    fd1 = open("file1.txt", O_CREATE | O_RDWR);
    fd2 = open("file2.txt", O_CREATE | O_RDWR);
    fd3 = open("file3.txt", O_CREATE | O_RDWR);

    // Call the new system call to get the number of open files
    int num_files = getfilenum(pid);
    printf(1, "Process %d has %d open files.\n", pid, num_files);

    // Close the files
    close(fd1);
    close(fd2);
    close(fd3);

    exit();
}
