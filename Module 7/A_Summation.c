#include<stdio.h>
int main(){
    // int N;
    // scanf("%d", &N);
    // long long int arr[N];
    // long long int sum = 0;
    // for(int i = 0; i<=N-1; i++){
    //     scanf("%d", &arr[i]);
    // }
    // for(int i = 0; i<=N-1; i++){
    //     // printf("%d", abs(sum +=arr[i]));
    //     // printf("%d", sum += arr[i]);
    //     sum += arr[i];
    // }
    // printf("%lld", abs(sum));

    int n; 
    scanf("%d", &n);
    long long int a[n];
    for(int i = 0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    long long int sum = 0;
    for(int i = 0; i<n; i++){
        sum += a[i];
    }
    if(sum < 0){
        sum *= -1;
    }
    printf("%lld", sum);
    return 0;
}              