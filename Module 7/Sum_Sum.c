#include<stdio.h>
int main(){
    int N, sum = 0, sub = 0;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<N; i++){
        
        if(arr[i]>0){
            // printf("%d", arr[i]);
            sum += arr[i];
        }
        if(arr[i]<0){
            // printf("%d", arr[i]);
            sub += arr[i];

        }
    }
    printf("%d %d", sum, sub);
    return 0;
}