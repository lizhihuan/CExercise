/*
 * TestWfdb.c
 *
 *  Created on: 2016��1��30��
 *      Author: Administrator
 */
#include "wfdb.h"

int main(void) {
	puts("TestWfdb works");

	WFDB_Anninfo ar;
	ar.name = "atr";
	ar.stat = WFDB_READ;

	annopen("D:\\�ҵĹ�˾\\data\\100",&ar,0);
}
