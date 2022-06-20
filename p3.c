#include<stdio.h>

#define PI 3.111111

const double j = 1.23456789;

main()
{
	PI = 3.111111; // 에러 발생
	j = 1.23456789; // 에러 발생 
	
	printf("문자형 상수 PI의 값은 %d\n", PI);
	printf("문자형 상수 j의 값은 %d\n", j);
	
}


