#include <stdio.h>

int main()
{
#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 설정하는 것입니다.

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

	char alphabet = 'A';
	int integer = 100;
	float decimal = 15.6f;

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 자료형의
	// 크기는 바이트 단위로 이루어져 있고, 자료형의 경우 자료형의
	// 따라 저장할 수 있는 값의 종류의 범위가 결정됩니다.
#pragma endregion

#pragma region 서식 지정자
	// 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.

	// %c : 문자를 출력하기 위한 서식 지정자
	printf("alphabet 변수의 값 : %c\n", alphabet);
	// %d : 정수를 출력하기 위한 서식 지정자
	printf("integer 변수의 값 : %d\n", integer);
	// %f : 실수를 출력하기 위한 서식 지정자
	printf("decimal 변수의 값 : %f\n", decimal);


#pragma endregion

#pragma endregion

}