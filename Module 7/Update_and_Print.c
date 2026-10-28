#include<stdio.h>
int main(){
    int N, pos, val;
    scanf("%d", &N);
    int arr[N];
    for(int i =0; i<N; i++){
        scanf("%d", &arr[i]);
    } 
    scanf("%d %d", &pos, &val);
    arr[pos] = val;
    for(int i = N-1; i>= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}