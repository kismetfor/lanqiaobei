#include <stdio.h>
#include <math.h>

typedef struct{
    int data;
    int begin;
    int end;
} jielong;

int mini_count = 0;
int N;

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
        if(arr[i].end != arr[i+1].begin){
            return i;
        }
    }
    return -1;
}

void delete(jielong* arr){
    
    for (int i=0; i<N; i++) {
        <#statements#>
    }
}

int main(int argc, const char * argv[]) {
    //处理输入
    scanf("%d", &N);
    jielong arr[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i].data);
        arr[i].end = arr[i].data%10;
        arr[i].begin = arr[i].data/pow(10, weishu(arr[i].data));
    }
    
    return 0;
}
