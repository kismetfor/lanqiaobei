#include <stdio.h>

#define MAX_N 10
int come_time[MAX_N];
int wait_time[MAX_N];
int land_time[MAX_N];
int used[MAX_N];
int n;
int have_anwser;
int current_time; //当前时间

void dfs(int x, int current_time){
    if(have_anwser){
        return;
    }
    if(x == n){
        have_anwser = 1;
        return;
    }
    for (int i=0; i<n; i++) {
        if(!used[i] && current_time<=come_time[i]+wait_time[i]){
            used[i] = 1;
            dfs(x+1, (current_time>come_time[i]?current_time:come_time[i])+land_time[i]);
            if(have_anwser){return;}
            used[i] = 0;
        }
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i=0; i<n; i++) { //获取输入
            scanf("%d %d %d", &come_time[i], &wait_time[i], &land_time[i]);
        }
        //初始化
        have_anwser = 0;
        current_time = 0;
        for (int i=0; i<n; i++) {
            used[i] = 0;
        }
        dfs(0, 0);
        if(have_anwser){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
