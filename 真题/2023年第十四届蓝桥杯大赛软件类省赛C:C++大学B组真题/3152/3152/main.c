#include <stdio.h>

#define MAX_N 100005

int max(int a, int b) {
    return a > b ? a : b;
}

int minDeletionsToMakeChain(int A[], int N) {
    int dp[MAX_N];
    int i, j, maxChainLength = 1;

    for (i = 0; i < N; i++) {
        dp[i] = 1;
    }

    for (i = 1; i < N; i++) {
        for (j = 0; j < i; j++) {
            if (A[i] / 10 == A[j] % 10) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maxChainLength = max(maxChainLength, dp[i]);
    }

    return N - maxChainLength;
}

int main() {
    int N, A[MAX_N], i;

    // 读取输入
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // 计算答案并输出
    int result = minDeletionsToMakeChain(A, N);
    printf("%d\n", result);

    return 0;
}
