/*
 * TestWfdb.c
 *
 *  Created on: 2016年1月30日
 *      Author: Administrator
 */
#include "wfdb.h"

int main(void) {
	puts("TestWfdb works");

	WFDB_Anninfo ar;
	ar.name = "atr";
	ar.stat = WFDB_READ;

	annopen("D:\\我的公司\\data\\100",&ar,0);
}
