#include<stdio.h>

#define HUNDRED_THOUSAND 100000

const int j = 200000;

main()
{
	HUNDRED_THOUSAND = 1000000; // ���� �߻�
	j = 200000; // ���� �߻� 
	
	printf("������ ��� HUNDRED_THOUSAND�� ���� %d\n", HUNDRED_THOUSAND);
	printf("������ ��� j�� ���� %d\n", j);
	
}


