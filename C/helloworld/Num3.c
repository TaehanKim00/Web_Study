#include <stdio.h>

int main(){
    int bingoNum[5][5];
    char bingoPrint[5][5];

    //Defining bingNum
    for(int row = 0; row < 5; row++){
        for(int col = 0; col < 5; col++){
            bingoNum[row][col] = 10*(row+1) + (col+1);
        }
    }

    //printing bingNum
    for(int row = 0; row < 5; row++){
        for(int col = 0; col < 5; col++){
            printf("%5.d", bingoNum[row][col]);
        }
        printf("\n\n");
    }


    while(1){

        //scan number
        int number;
        int rangecheck = 0;
        if(rangecheck == 0){
            printf("���ϴ� �ڸ� �� �Է� : ");
            scanf("%d", &number);
        }
        else{
            printf("���� Ȯ�� �� �ٽ� �Է� : ");
            scanf("%d", &number);
        }


        //if num is 0, break
        if(number == 0){
            printf("�����մϴ�.");
            break;
        }

        //range check
        for(int row = 0; row < 5; row++){
            for(int col = 0; col < 5; col++){
                if(bingoNum[row][col] == number){
                    rangecheck = 1;
                    break;
                }
            }
        }
        continue;

    }

    return 0;
}