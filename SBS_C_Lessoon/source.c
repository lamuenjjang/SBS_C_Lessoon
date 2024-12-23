#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Vector2
{
	int x;
	int y;
};

struct Node {
	int data;
	struct Node* next;
};

/*struct GameObject
{
	char grade;
	double atk;
	int health;
	
	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의
	// 크기가 다르게 설정될 수 있으며, 구조체 크기를 결정하는
	// 형태는 기본 자료형으로만 구성되어 있습니다.
};*/

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct GameObject gameObject;
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.name = "monster";
	// gameObject.atk = 5.5f;
	// 
	// printf("gameObject의 등급 : %c\n", gameObject.grade);
	// printf("gameObject의 체력 : %d\n", gameObject.health);
	// printf("gameObject의 공격력 : %f\n", gameObject.atk);
	


	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// struct GameObject gameObject = { 'C',30, 3.25f };
	// 
	// printf("gameObject의 크기 : %d\n", sizeof(gameObject));

	// 구조체의 크기는 구조체를 구성하는 멤버중에
	// 크기가 큰 자료형의 배수가 되도록 정렬합니다.
#pragma endregion

#pragma region 두 점사이의 거리

	// printf("100의 제곱근 : %lf\n", sqrt(100));

	// printf("10의 제곱 : %lf\n", pow(10, 2));

	// struct Vector2 Character = { 0,0 };
	// struct Vector2 Monster = { 2,2 };
	// 
	// double distance = sqrt(pow(Character.x - Monster.x, 2) + 
	// 	pow(Character.y - Monster.y, 2));
	// 
	// printf("distance의 값 : %lf  >>>>  ", distance);
	// 
	// if (distance <= 3.0f) {
	// 	printf("공격 상태");
	// }
	// else
	// {
	// 	printf("이동 상태");
	// }


#pragma endregion

#pragma region 자기 참조 구조체
	// 구조체 내부에 자기 자신의 자료형을 멤버 변수로
	// 가지고 있는 구조체입니다.

	struct Node * node1 = malloc(sizeof(struct Node));
	struct Node * node2 = malloc(sizeof(struct Node));
	struct Node * node3 = malloc(sizeof(struct Node));

	node1->data = 10;
	node2->data = 20;
	node3->data = 30;

	node1->next = &node2;
	node2->next = &node3;
	node3->next = NULL;

	struct Node* CurrentNode = node1;

	for (int i = 0; i < 3; i++)
	{
		printf("node%d의 값 : %d",i, CurrentNode->data);
		CurrentNode = CurrentNode->next;
	}








#pragma endregion


	return 0;
}