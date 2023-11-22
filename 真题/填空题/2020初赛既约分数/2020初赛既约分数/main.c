//
//  main.c
//  2020初赛既约分数
//
//  Created by rain on 2023/11/22.
//

#include <stdio.h>

int gcd(int a, int b){ // 小 大
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if((b)%(a)==0){return a;}
    return gcd(b%a, a);
}

void test(void){
    int count = 0;
    for (int i=1; i<=2020; i++) {
        for (int j=1; j<=2020; j++) {
            if(gcd(i, j) == 1){
                count++;
            }
        }
    }
    printf("%d\n", count);
}

int main(int argc, const char * argv[]) {
    test();
    return 0;
}
