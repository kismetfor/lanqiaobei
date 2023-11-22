//
//  main.c
//  1514: [蓝桥杯2020初赛] 约数个数
//
//  Created by rain on 2023/11/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long n = 1200000;
    long long ret = 0;
    //偶数 就有10/2个页数
    for (long long i = 1; i<=n; i++) {
        if(n%i == 0){
            ret++;
        }
    }
    printf("%lld\n", ret);
    return 0;
}
