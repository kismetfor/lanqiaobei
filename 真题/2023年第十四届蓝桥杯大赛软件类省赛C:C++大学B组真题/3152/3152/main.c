#include <stdio.h>
#include <math.h>

typedef struct{
    int data;
    int begin;
    int end;
} jielong;

int mini_delete = 9999;
int N;
int deleted[100];
int weishu(int num){
    int ret = 0;
    while (num>10) {
        ret++;
        num /= 10;
    }
    return ret;
}

int is_jielong(jielong* arr){
    int i = 0;
    for (i=0; i<N-1; i++) {
        if(!deleted[i] && arr[i].end != arr[i+1].begin){
            return i;
        }
    }
    return -1;
}

void dfs(jielong* a, int n, int delete_count){ //这里用n表示深度
    if(is_jielong(a) == -1){
        if(delete_count<mini_delete){
            mini_delete = delete_count;
        }
        return;
    }
    if(n == N-1){
        return;
    }
    for (int i=0; i<n; i++) {
        deleted[i] = 1;
        delete_count++;
        if(is_jielong(a) == -1){
            if(delete_count<mini_delete){
                mini_delete = delete_count;
            }
            return;
        }
        dfs(a, n+1, delete_count);
        deleted[i] = 0;
    }
}

int main(int argc, const char * argv[]) {
    //处理输入
    scanf("%d", &N);
    jielong arr[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i].data);
        arr[i].end = arr[i].data%10;
        int a = pow(10, weishu(arr[i].data));
        arr[i].begin = arr[i].data/a;
    }
    dfs(arr, 0, 0);
    printf("%d\n", mini_delete);
    return 0;
}
