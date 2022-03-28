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
            printf("원하는 자리 수 입력 : ");
            scanf("%d", &number);
        }
        else{
            printf("수를 확인 후 다시 입력 : ");
            scanf("%d", &number);
        }


        //if num is 0, break
        if(number == 0){
            printf("종료합니다.");
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