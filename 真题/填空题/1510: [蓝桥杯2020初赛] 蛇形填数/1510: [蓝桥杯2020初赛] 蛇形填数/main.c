//
//  main.c
//  1510: [蓝桥杯2020初赛] 蛇形填数
//
//  Created by rain on 2023/11/22.
//

#include <stdio.h>

void test(void){
    int a[20][20];
    a[0][0] = 1;
    int i = 0;
    int j = 0;
    while (1) {
        if(i==19 && j==19){
            break;
        }
        //右移
        while (1) {
            a[i][j+1] = a[i][j] + 1;
            j++;
            if (0==i && j%2 == 0){
                break;
            }
        }
        //左下
        while (1) {
            a[i+1][j-1] = a[i][j] + 1;
            i++;j--;
            if (0==i && j%2 == 1){
                break;
            }
        }
        //下
        while (1) {
            a[i+1][j] = a[i][j] + 1;
            i++;
            if (0==j && i%2 == 1){
                break;
            }
        }
        //右上
        while (1) {
            a[i+1][j-1] = a[i][j] + 1;
            j++;i--;
            if (0==j && j%2 == 0){
                break;
            }
        }
    }
    printf("%d\n", a[19][19]);
}

void test1(void){
    int a[20][20];
    a[0][0] = 1;
    int i = 0;
    int j = 0;
    while (1) {
        if(i==2 && j==2){
            break;
        }
        //右移
        while (1) {
            a[i][j+1] = a[i][j] + 1;
            j++;
            if (0==i && j%2 == 0){
                break;
            }
        }
        //左下
        while (1) {
            a[i+1][j-1] = a[i][j] + 1;
            i++;j--;
            if (0==i && j%2 == 1){
                break;
            }
        }
        //下
        while (1) {
            a[i+1][j] = a[i][j] + 1;
            i++;
            if (0==j && i%2 == 1){
                break;
            }
        }
        //右上
        while (1) {
            a[i+1][j-1] = a[i][j] + 1;
            j++;i--;
            if (0==j && j%2 == 0){
                break;
            }
        }
    }
    printf("%d\n", a[2][2]);
}
int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
