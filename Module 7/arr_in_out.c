#include<stdio.h>
int main(){
    int a[3];
    // scanf("%d %d %d", &a[0], &a[1], &a[2]);
    // printf("%d %d %d", a[0], a[1], a[2]);
    
    for(int i = 0; i <= 2; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i <= 2; i++){
        printf("%d", a[i]);

    }
    
    return 0;
}