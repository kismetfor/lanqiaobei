#include <stdio.h>
#include <math.h>

int sum1 = 2021;

int weishu(int n) {
    int ret = 1;
    while (n /= 10)
    {
        ret++;
    }return ret;
}

int bianli(int n) { //∏¯≥ˆ“ª∏ˆ ˝ ±È¿˙√ø“ªŒª
    int m = weishu(n);
    int ret = 0;
    for (int i = 0; i < m; i++)
    {
        ret = n / pow(10, m - 1 - i);
        n -= ret * pow(10, m - 1 - i);
        if (ret == 1)
        {
            sum1--;
        }
    }
    if (sum1 < 0) {
        return 0;
    }
    return 1;
}

void test(void) {
    int count = 1;
    while (bianli(count) == 1)
    {
        count++;
    }
    printf("%d\n", count-1);
}

int main() {
    test();
    return 0;
}
