/*
 * main.c
 *
 *  Created on: 2013-12-30
 *      Author: wen
 */

#include <stdio.h>
#define myId 35		// �ҵ�ѧ��

int main() {
	int i, j;
	int array[4][3] = { { myId, 34, 65 }, { 11, myId, 78 }, { 25, 90, myId }, {
			34, 41, 89 } };	// �г�ʼ����ά����
	// �����ά����
	for (i = 0; i != 4; i++) {

		for (j = 0; j != 3; j++) {
			printf("%d ", array[i][j]);

		}
	}

	if (i % 3 == 0) {
		printf("\n");

	}

	//����Сֵ
	int minList[4];
	for (i = 0; i != 4; i++) {
		minList[i] = array[i][0];
		for (j = 0; j != 3; j++) {
			if (minList[i] > array[i][j]) {
				minList[i] = array[i][j];
			}
		}
	}

	// �����Сֵ
	for (i = 0; i != 4; i++) {
		printf("%d ", minList[i]);
	}
	printf("\n");

	return 0;
}

