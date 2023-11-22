//
//  main.c
//  1510: [蓝桥杯2020初赛] 蛇形填数
//
//  Created by rain on 2023/11/22.
//

#include <stdio.h>

void test1(void){
    int a[50][50] = {1};
    int i = 0;
    int j = 0;
    while (1) {
        if(j>40){
            break;
        }
        //右移
        a[i][j+1] = a[i][j] + 1;
        j++;
        
        //左下
        while (1) {
            a[i+1][j-1] = a[i][j] + 1;
            i++;j--;
            if (0==j){
                break;
            }
        }
        //下
        a[i+1][j] = a[i][j] + 1;
        i++;

        //右上
        while (1) {
            a[i-1][j+1] = a[i][j] + 1;
            j++;i--;
            if (0==i){
                break;
            }
        }
    }
    printf("%d\n", a[19][19]);
    
//    for (int i=0; i<20; i++) {
//        for (int j=0; j<20; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
}
int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
