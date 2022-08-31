#include <stdio.h>

int main(void)
{
    short Short1=1, ShortNeg1=-1;
    int Int1=1, IntNeg=-1, IntBig=0x1234ffff;
    long Long1=1;
    long long LLong1=1;

    printf("Sizeof(short)= %d  Sizeof(int)= %d\nSizeof(long) = %d Sizeof(long long)= %d\n\n", sizeof(Short1), sizeof(Int1),
    sizeof(Long1), sizeof(LLong1));

    printf("        int        short        int        short\n");
    printf(" %+10d   %+10hd    %#010x     %#06hx\n", Int1, Int1, Int1, Int1);
    printf(" %+10d   %+10hd    %#010x     %#06hx\n", IntNeg, IntNeg, IntNeg, IntNeg);
    printf(" %+10d   %+10hd    %#010x     %#06hx\n\n", IntBig, IntBig, IntBig, IntBig);

    return 0;
}