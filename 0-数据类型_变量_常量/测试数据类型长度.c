/**
 * @ breif      测试数据类型长度（B）
 * @ author     mculover666
 * @ date       2019/6/20
 * @ encoding   GBK/GB2312
 */

# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    char i1;
    short i2;
    int i3;
    long i4;

    float j1;
    double j2;

    printf("%d %d %d %d %d %d.\n", sizeof(i1), sizeof(i2), sizeof(i3), sizeof(i4), sizeof(j1), sizeof(j2));

    system("pause");

    return 0;
}
/*
    1. Mingw-w64编译,64位Windowns7/10运行结果：
    ------------------------------------
    1 2 4 4 4 8.
    ------------------------------------
    2. VC6编译，64位win7/10运行结果：
    ------------------------------------
    1 2 4 4 4 8.
    ------------------------------------
    3. VS2017编译，64位win7/10运行结果：
    ------------------------------------
    1 2 4 4 4 8.
    ------------------------------------
    4. Gcc编译，64位Ubuntu18.04运行结果：
    ------------------------------------
    1 2 4 8 4 8.
    ------------------------------------
*/
