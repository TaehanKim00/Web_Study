#include <stdio.h>
short main() {
    short start_num, end_num, count, j, n_count, l; //���� ����
    printf("�� ���� ���� ���� A, B�� �Է��ϼ��� : \n");
    scanf("%hd\n" "%hd", &start_num, &end_num); //���� �Է�
	//�Է� ���� Ȯ��
	if(start_num < 1 || end_num <1 || start_num>end_num){
		printf("�߸��� �Է��Դϴ�.");
		return 0;
    }
	//�Է� ������ ���� �ÿ� �ڵ� ����
	else {
		for (short i = start_num; i <= end_num; i++) { //start_num ~ end_num ���� for���� ������
			j = i;
			l = i;
			count = 0; //count������ ���ڿ��� 3, 6, 9 �� �� �� ����ִ��� ���� ����. for�� �������� �ʱ�ȭ
			n_count = 0; //n_count������ ������ �ڸ����� ���� ����. for�� �������� �ʱ�ȭ
			while (j > 0) { //�� �ڸ����� 3, 6, 9�� �ִ��� Ȯ��. ���� ������ count���� 1�� �ø�.
				if (j % 10 == 3 || j % 10 == 6 || j % 10 == 9)   count++;
				j = j / 10;
				n_count++;
				}
			if (count > 0) { // count>0 �̸� 3, 6, 9�� �ϳ��� ����ִ� ���̰�, ������ ���� �ڼ��� ġ�� Ƚ�� ����.
				for (short i = 0; i < count; i++) {
					printf("¦!");
					}
				printf(" ");
				}
			else { //3, 6, 9�� ������� ���� ��� �� ���� ���
				short numArray[n_count]; //�迭 Ȱ���� ���� �ڸ�����ŭ�� �迭 ����
				for(short i=0;i<n_count;i++){ //�ڸ����� �ɰ��� �迭�� ����.
					numArray[i] = l%10;
					l/=10;
				}
				for(short i=n_count-1; i>-1;i--){//�迭���� ���
					printf("%hd", numArray[i]);
				}
				printf(" ");
			}
		}
	} 
}