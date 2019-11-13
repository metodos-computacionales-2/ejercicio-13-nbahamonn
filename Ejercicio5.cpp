#include <iostream>
#include <cmath>
int main(int argc, char **argv)
{
    int N=atoi(argv[1]); //casting to int
    double array[N];
    for(int i =0;i<=N;i++)
    {
        array[i]=i;
    }
    return 0;
}

//Al usar el comando c++ -fsanitize=address Ejercicio5.cpp, este se complila y el error lo muestra de esta forma:
/*ASAN:DEADLYSIGNAL
=================================================================
==64==ERROR: AddressSanitizer: SEGV on unknown address 0x000000000000 (pc 0x7fb0e01e81b0 bp 0x000000000000 sp 0x7ffd47228ce0 T0)
==64==The signal is caused by a READ memory access.
==64==Hint: address points to the zero page.
    #0 0x7fb0e01e81af  (/lib/x86_64-linux-gnu/libc.so.6+0x451af)
    #1 0x7fb0e095f8f7  (/usr/lib/x86_64-linux-gnu/libasan.so.4+0x428f7)
    #2 0x55fc9a05fd19 in main (/home/jovyan/ejercicio-13-nbahamonn/a.out+0xd19)
    #3 0x7fb0e01c4b96 in __libc_start_main (/lib/x86_64-linux-gnu/libc.so.6+0x21b96)
    #4 0x55fc9a05fbd9 in _start (/home/jovyan/ejercicio-13-nbahamonn/a.out+0xbd9)

AddressSanitizer can not provide additional info.
SUMMARY: AddressSanitizer: SEGV (/lib/x86_64-linux-gnu/libc.so.6+0x451af)
==64==ABORTING*/ 