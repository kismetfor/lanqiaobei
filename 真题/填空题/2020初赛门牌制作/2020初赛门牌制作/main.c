//
//  main.c
//  2020初赛门牌制作
//
//  Created by rain on 2023/11/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count = 0;
    for (int i=1; i<=2020; i++) {
        int n = i;
        do {
            if((n-2)%10 == 0){
                count++;
            }
        } while (n /= 10);
    }
    
    printf("%d\n", count);
    return 0;
}
