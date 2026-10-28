#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int mn = INT_MAX;
    int mn_idx;

    for(int i = 0; i<n; i++){
        if(a[i] < mn){
            mn = a[i];
            mn_idx = i+1;
        }
    }
    printf("%d %d", mn, mn_idx);
    return 0;
}