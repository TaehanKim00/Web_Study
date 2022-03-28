#include<stdio.h>


int main()
{
    int number;
    printf("소수인지 판별할 수를 입력하세요 : ");
    scanf("%d", &number);

    // 1 ~ 25까지 숫자 입력
    if (number == 1 || number ==2){
        printf("%d는 소수입니다. \n", number);
        return 0;
    }

    int isPrime = 0;
    int primeCount = 0;
    for (int i = 2; i < number; i++){
        if (number % i == 0){
            isPrime = 1;
            primeCount += 1;
        }
    }
    
    if(!isPrime) {
        printf("%d는 소수입니다. \n", number);
        return 0;
    }

    int primePrintCount = 0;
    printf("\n%d는 다음과 같은 %d개의 인자를 가집니다. \n\n[", number, primeCount);
    for (int i = 2; i < number; i++){
        if (number % i ==0){
            printf("%d", i);
            primePrintCount += 1;

            if (primePrintCount < primeCount) {
                printf(", ");
            }
            else{
                printf("]\n");
                return 0;
            }
        }
    }
    return 0;
}