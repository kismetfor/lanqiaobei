//
//  main.c
//  3142
//
//  Created by rain on 2023/10/18.
//

#include <stdio.h>

int LR(int L, int R){
    int s = 0;
    for (int x = L; x<=R; x++) {
        if(x%2 != 0){s++;continue;}
        else{
            if((x/2)%2 != 0){
                continue;
            }
            else{
                s++;continue;
            }
        }
    }
    return s;
}

int main(int argc, const char * argv[]) {
    int L, R;
    while (scanf("%d %d", &L, &R) == 2) {
        int s = LR(L, R);
        printf("%d\n", s);
    }
    return 0;
}
