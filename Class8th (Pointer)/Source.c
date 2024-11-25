#include <stdio.h>

int main()
{
#pragma region 범용포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	// void* p = NULL;

	// char alphabet = 'A';

	//	int integer = 10;

	// float decimal = 5.5f;

	// p = &alphabet;


	// 범용 포인터로 변수의 메모리에 접근하려면
	// 범용 포인터가 가리키는 변수의 자료형으로
	// 형 변환을 해주어야합니다.
	// *(char*)p = 'B';

	// p = &integer;

	// *(int*)p = 15;

	// p = &decimal;

	// *(float*)p = 3.25f;

	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// printf("integer 변수의 값 : %d\n", alphabet);
	// printf("decimal 변수의 값 : %f\n", alphabet);






#pragma endregion

#pragma region 상수 지시 포인터

	// int vectorX = 10;
	// int vectorY = 20;
	// 
	// const int* ptr = &vectorX;
	// 
	// printf("ptr 변수가 가리키는 값 : %d\n", *ptr);
	// *ptr = 99;
	// 
	// ptr = &vectorY;
	// 
	// printf("ptr 변수가 가리키는 값 : %d\n", *ptr);


	// 상수 지시 포인터를 선언하게 되면 포인터 변수가
	// 가리키고 있는 주소에 존재하는 값을 변경할 수
	// 없도록 설정할 수 있습니다.



#pragma endregion

#pragma region 포인터 상수

	// int positionX = 5;
	// int positionY = 0;
	// 
	// int* const reference = &positionX;
	// 
	// *reference = 10;

	// reference = &positionY;

	// 포인터 상수는 해당 변수의 값을 변경할 수 있지만,
	// 다른 메모리 주소를 저장할 수 없습니다.

#pragma endregion


}