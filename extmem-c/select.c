#include <stdlib.h>
#include <stdio.h>
#include "extmem.h"

 main(int argc, char **argv)
{
    Buffer buf;
    unsigned char *blk;
    if (!initBuffer(520, 64, &buf))//�½�������
    {
        perror("Buffer Initialization Failed!\n");
        return -1;
    }
    printf("1");
}
