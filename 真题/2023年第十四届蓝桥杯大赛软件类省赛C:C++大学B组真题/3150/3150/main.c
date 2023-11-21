//
//  main.c
//  3150
//
//  Created by rain on 2023/10/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int a, b;
    int max = 99999999;
    int min = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        max = (a/b<max)?a/b:max;
        min = ((a/(b+1)+1)>min)?(a/(b+1)+1):min;
    }
    printf("%d %d\n", min, max);
    return 0;
}
