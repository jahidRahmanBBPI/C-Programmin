#include<stdio.h>
int main(){
    int x = 10;
    int a[] = {10, 20, 30, 400}; // declare and initialize.
    int b[5] = {0}; //(Fixed size array) To set all the value 0;
    for(int i = 0; i<4; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
