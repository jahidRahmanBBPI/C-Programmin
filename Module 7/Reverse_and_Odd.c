#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d",&arr[i]);
    }


    int n = N-1;
    for(int i = n; i>=0; i--){
    
        if(i%2 == 1){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
