#include<stdio.h>
int main(){
    int N,n;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i<=N-1; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &n);
    int f = 1;
    for(int i =0; i<=N-1; i++){
        // printf("%d", arr[i]);
        if(arr[i] == n){
            printf("%d", i);
            f = 0;
            break;
        } 
        
    }if(f){
        printf("%s", "-1");
    }
    return 0;
}