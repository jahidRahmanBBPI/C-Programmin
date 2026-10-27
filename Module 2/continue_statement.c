#include<stdio.h>
int main(){
    for(int i = 1; i<=10; i++){
        if(i == 5){
            continue; // Skip the rest of the loop body when i is 5
            // break;
        }
        printf("%d\n", i);
    }
    return 0;
}