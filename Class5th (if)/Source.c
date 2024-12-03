#include <stdio.h>

#pragma region 전처리기
// 프로그램이 컴파일 되기 이전에 프로그램에 대한
// 사전 처리하는 과정 입니다.

// 전처리기는 컴파일러가 아닌 선행 처리기에 의해서
// 처리되는 문장이기 때문에 명령문 끝에	";"를 사용하지 않습니다.
#pragma endregion


int main()
{
#pragma region 실수를 저장하는 법

#pragma region 고정 소수점
	// 소수점의 위치를 고정하여 소수점의 위치를
	// 나타내는 방법입니다.

	// 고정 소수점은 정수부와 소수부의 크기가 작으므로
	// 표현할 수 있는 범위가 한정되어 있습니다.


#pragma endregion

#pragma region 부동 소수점
	// 소수점의 위치를 고정하지 않고 소수점의 위치를
	// 나타내는 방법입니다.

	// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는
	// 표현하지 않습니다.
#pragma endregion

#pragma region 실수형태의 (10)진수를 (2)진수로 변환하는 과정
	// 10진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한
	// 다음 곱한 결과의 정수부분을 위에서 아래로 순서대로
	// 정렬합니다.

	float packet = 3.125f;
	float pi = 3.14159265f;

	printf("packet 변수의 값 : %f\n", packet);
	printf("pi 변수의 값 : %.8f\n", pi);

	// 표준 출력 함수로 소수를 출력할 때 4 byte 크기의
	// 실수형 자료형은 소수점 이하 6자리까지만 표기하며,
	// 8 byte 크기의 실수형 자료형은 소수점	이하 15자리까지만 표기됩니다.

#pragma endregion

#pragma endregion

#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라
	// 동작이 수행하도록 실행하는 명령문입니다.

#pragma region 관계연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를
	// 0 또는 1이라는 값으로 나타내는 연산자입니다.

	int data1 = 10 > 5;
	int data2 = 10 < 5;
	int data3 = 10 >= 5;
	int data4 = 10 <= 5;
	int data5 = 10 == 5;
	int data6 = 10 != 5;

	printf("data1의 값 : %d\n", data1);
	printf("data2의 값 : %d\n", data2);
	printf("data3의 값 : %d\n", data3);
	printf("data4의 값 : %d\n", data4);
	printf("data5의 값 : %d\n", data5);
	printf("data6의 값 : %d\n", data6);

	// 관계 연산자는 조건이 맞을 때 1이라는 값으로 변환되며,
	// 조건이 틀릴 때는 0이라는 값으로 반환합니다.

#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면
	// 실행되는 명령입니다.

	int health = 0;
	if (health <= 0)
	{
		printf("GameObject Destroy\n");
	}
#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이
	// 맞다면 실행되는 명령문입니다.

	char grade = 'B';

	if (grade == 'A') {
		printf("100점 ~ 91점입니다.\n");
	}
	else if (grade == 'B') {
		printf("90점 ~ 81점입니다.\n");
	}

	// else if문은 여러개를 생성하는 것이 가능하며,
	// if문이 존재하지 않으면 사용할 수 없습니다.
#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.

	int value = 0;

	// if (value > 0) {
	// 	printf("value의 값은 양수입니다.\n");
	// }
	// else if (value < 0)
	// {
	// 	printf("value의 값은 음수입니다.\n");
	// }
	// else
	// {
	// 	printf("value의 값은 음수도 아니고 양수도 아닙니다.\n");
	// }

	// if문에 연결된 모든 조건문의 조건이 맞을때
	// 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	int scene = 1;

	switch (scene)
	{
		// switch 문은 해당 조건이 완료되었을때, break
		// 문이 없으면 나머지 밑에있는 case문까지 계속
		// 실행시키다가 종료합니다.
	case 1: printf("마을");
		break;
	case 2: printf("던전");
		break;
	default: printf("이동 불가 지역");
		break;
	}

	// switch문의 경우 조건에 해당하는 값에 따라 조건의
	// 위치로 이동합니다.
#pragma endregion

#pragma region 논리연산자

#pragma region AND 연산자
	int level = 99;
	int exp = 10000;

	if (level >= 99 && exp >= 5000)
	{
		printf("전직을 할 수 있습니다.\n");
	}
#pragma endregion

#pragma region OR 연산자
	int Gold = 100;
	int Silver = 500;

	if (Gold >= 100 || Silver >= 1000)
	{
		printf("아이템을 구매할 수 있습니다.\n");
	}
#pragma endregion

#pragma region NOT연산자
	int Quest_ClearState = 0;

	if (!Quest_ClearState) {
		printf("Quest Clear");
	}

#pragma endregion


#pragma endregion


#pragma endregion

}