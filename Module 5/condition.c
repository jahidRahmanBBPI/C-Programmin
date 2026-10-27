// #include<stdio.h>
// int main(){
//     char str[10];
//     scanf("%s", str);
//     int firstDigit = str[0] - '0';
//     printf("%d", firstDigit);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char str[10];
//     scanf("%s", str);
//     int firstDigit = str[0] -'0';
//     // printf("%d", firstDigit);
//     if(firstDigit % 2 == 0){
//         printf("EVEN");
//     }else{
//         printf("ODD");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char cha;
//     scanf("%c", &cha);
//     // printf("%d", cha);
//     if(cha >= 'A' && cha <= 'Z'){
//         printf("%c", cha+32);
//     }else{
//         printf("%c", cha-32);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char X;
//     scanf("%c", &X);
//     // printf("%c", X);
//     if(X <= 'Z' && X >= 'A'){
//         printf("ALPHA\nIS CAPITAL");
//     }
//     if(X <= 'z' && X >= 'a'){
//         printf("ALPHA\nIS SMALL");
//     }
//     if(X <= '9' && X >= '0'){
//         printf("IS DIGIT");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int A, B, C;
//     scanf("%d %d %d", &A, &B, &C);
//     if(A <= B && A <= C){
//         printf("%d ", A);
//     }else if(B <= A && B <= C){
//         printf("%d ", B);
//     }else{
//         printf("%d ", C);
//     }

//     if(A >= B && A >= C){
//         printf("%d", A);
//     }else if(B >= A && B >= C){
//         printf("%d", B);
//     }else{
//         printf("%d", C);
//     }

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int X, Y;
//     scanf("%d %d", &X, &Y);
//     long long int mul = (long long int)X * Y;
//     printf("%d + %d = %d\n", X, Y, X + Y);
//     printf("%d * %d = %lld\n", X, Y, mul);
//     printf("%d - %d = %d", X, Y, X - Y);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     long long int A, B, C, D;
//     scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
//     long long int X = (A*B) - (C*D);
//     printf("Difference = %lld", X);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d", &N);
//     for(int i =1; i <= N; i++){
//         // printf("%d\n",i);
//         if(i % 2 == 0){
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// Given N numbers. Count how many of these values are even, odd, positive and negative.
#include<stdio.h>
int main(){
    int N, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &N);
    int num[N];
    for(int i = 1; i <= N; i++){
        scanf("%d", &num[i-1]);
    }
    
    for (int i = 0; i < N; i++){
    
        if(num[i] % 2 == 0){
            even++;
        }  
    }
    
    for (int i = 0; i < N; i++){
    
        if(num[i] % 2 != 0){
            odd++;
        }
        
    }

    // printf("\nPositive Numbers are: ");
    for (int i = 0; i < N; i++){
    
        if(num[i] > 0){
            pos++;
        }
        
    }

    for (int i = 0; i < N; i++){
    
        if(num[i] < 0){
            neg++;
        }
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    
    return 0;
}

