#include<stdio.h>
// int main(){
    // int i = 10;
    // do{
    //     printf("%d\n", i);
    //     i++;
    // }while(i<5);
    // return 0;
    // for(int j = 5; j<=10; j++){
    //     printf("h");
    //     j++;
    // }

    // int i = 0, j = 0;
    // for(j=1; j<=5;j++){
    //     i++;
    // }
    // printf("%d\n", j);
    // return 0;

//    int i = 1;
//    do{
//     printf("%d ", i);
//     i++;
//    }while(i<5);

// int i = -5;
// while(i<3){
//     printf("hello \n");
//     i = i + 2;
// }
// return 0;
// }
// int N;
//     scanf("%d", &N);
//     for(int i =1; i<=N; i++){
//         if(i%5 == 0){
//             printf("%d Yes\n", i);
//         }else{
//             printf("%d No\n", i);
//         }
//     }

    // int A;
    // long long int B;
    // float C;
    // char D;
    // scanf("%d", &A);
    // scanf("%lld", &B);
    // scanf("%f", &C);
    // scanf("%c", &D);
    
    // printf("%d\n", A);
    // printf("%lld\n", B);
    // printf("%0.2f\n", C);
    // printf("%c", D);

// }

// int main(){
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if(A >= B){
//         Printf("Yes");
//     }else{
//         Printf("No");
//     }
//     return 0;
// }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("%d", a);
    }else if(b>a && b>c && b>d){
        printf("%d", b);
    }else if(c>a && c>b && c>d){
        printf("%d", d);
    }else{
        printf("%d", d);
    }
    
    return 0;
}