//
//  main.c
//  BASIC-13
//
//  Created by rain on 2023/10/3.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int a[200] = {0};
    for (int i = 0; i<n; i++) { //输入
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n-1; i++) { //排序
        for (int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i<n; i++) { //输出
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
