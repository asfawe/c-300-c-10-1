#include<stdio.h>

#define HUNDRED_THOUSAND 100000

const int j = 200000;

main()
{
	HUNDRED_THOUSAND = 1000000; // 에러 발생
	j = 200000; // 에러 발생 
	
	printf("문자형 상수 HUNDRED_THOUSAND의 값은 %d\n", HUNDRED_THOUSAND);
	printf("문자형 상수 j의 값은 %d\n", j);
	
}


