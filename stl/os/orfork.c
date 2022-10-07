#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
 int main()
 {
    if(fork() || fork())
    {
        fork();
    }
    printf("hello\n");
 }