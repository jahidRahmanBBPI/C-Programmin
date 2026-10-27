#include<stdio.h>>
int main(){
    for(int i = 1; i <= 10; i++){
        printf("%d. I am Sorry\n", i);
    }
    printf("Odd numbers:\n");

    for(int i = 1; i <= 10; i += 2){
        printf("%d\n", i);
    }
    printf("Even numbers:\n");

    for(int i = 0; i <= 10; i += 2){
        printf("%d\n", i);
    }
    printf("Powers of 2:\n");   
    for(int i = 2; i<=64; i *= 2){
        printf("%d\n", i);
    }

    for(int i = 100; i > 0; i -= 10){
        printf("%d\n", i);
    }
    return 0;
}