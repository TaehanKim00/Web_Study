#include <stdio.h>
short main() {
    short start_num, end_num, count, j, n_count, l; //변수 설정
    printf("두 개의 양의 정수 A, B를 입력하세요 : \n");
    scanf("%hd\n" "%hd", &start_num, &end_num); //변수 입력
	//입력 오류 확인
	if(start_num < 1 || end_num <1 || start_num>end_num){
		printf("잘못된 입력입니다.");
		return 0;
    }
	//입력 오류가 없을 시에 코드 진행
	else {
		for (short i = start_num; i <= end_num; i++) { //start_num ~ end_num 까지 for문을 돌려줌
			j = i;
			l = i;
			count = 0; //count변수는 숫자에서 3, 6, 9 가 몇 개 들어있는지 세는 변수. for문 돌때마다 초기화
			n_count = 0; //n_count변수는 숫자의 자릿수를 세는 변수. for문 돌때마다 초기화
			while (j > 0) { //각 자리수에 3, 6, 9가 있는지 확인. 있을 때마다 count변수 1씩 늘림.
				if (j % 10 == 3 || j % 10 == 6 || j % 10 == 9)   count++;
				j = j / 10;
				n_count++;
				}
			if (count > 0) { // count>0 이면 3, 6, 9가 하나라도 들어있는 것이고, 개수에 따라 박수를 치는 횟수 지정.
				for (short i = 0; i < count; i++) {
					printf("짝!");
					}
				printf(" ");
				}
			else { //3, 6, 9가 들어있지 않을 경우 그 숫자 출력
				short numArray[n_count]; //배열 활용을 위해 자릿수만큼의 배열 선언
				for(short i=0;i<n_count;i++){ //자릿수를 쪼개어 배열에 넣음.
					numArray[i] = l%10;
					l/=10;
				}
				for(short i=n_count-1; i>-1;i--){//배열에서 출력
					printf("%hd", numArray[i]);
				}
				printf(" ");
			}
		}
	} 
}