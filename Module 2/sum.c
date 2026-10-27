#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum += i;
    }
    printf("%d \n", sum);


    for(int i =1; i<=10; i++){
        if(i%2==0){
            printf("%d - Even\n", i);
        }else{
            printf("%d - Odd\n", i);
        }
    }
    return 0;
}