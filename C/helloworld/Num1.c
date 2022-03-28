#include<stdio.h>


int main()
{
    int number;
    printf("�Ҽ����� �Ǻ��� ���� �Է��ϼ��� : ");
    scanf("%d", &number);

    // 1 ~ 25���� ���� �Է�
    if (number == 1 || number ==2){
        printf("%d�� �Ҽ��Դϴ�. \n", number);
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
        printf("%d�� �Ҽ��Դϴ�. \n", number);
        return 0;
    }

    int primePrintCount = 0;
    printf("\n%d�� ������ ���� %d���� ���ڸ� �����ϴ�. \n\n[", number, primeCount);
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