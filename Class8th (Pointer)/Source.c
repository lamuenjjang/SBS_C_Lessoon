#include <stdio.h>

int main()
{
#pragma region �ּҿ�����
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	// int data = 10;
	// 
	// printf("data ������ �ּ� : %p\n", data);

	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸�
	// �� ���� �ּҸ� �ǹ��ϸ�, �޸� ������ 1byte
	// �� ũ��� ������ ǥ���մϴ�.
#pragma endregion

#pragma region scanf�Լ�
	// ǥ�� �Է� �Լ���, ���������� �����͸� �پ���
	// ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.

	// int score = 0;

	// ǥ�� �Է��Լ��� �Է��� ������ ������ ����
	// �۾����� �Ѿ �� �����ϴ�.
	// scanf_s("%d\n", &score);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.
	// printf("score ������ �� : %d\n", score);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ�
	// ���ۿ� �����͸� �����Ͽ��ٰ� �Է��ϴ� ����
	// ���� ���� ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region Star
	// for (int i = 0; i < 5; i++) {
	// 	for (int j = 0; j < i+1; j++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }
#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.

	int x = 10;

	int* pointer = &x;

	*pointer = 99;


	printf("x�� ���� �� : %d\n", x);
	printf("x�� �ּ� �� : %p\n", &x);
	printf("pointer�� ������ �� : %p\n", pointer);


	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش�
	// ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	float health = 100.0f;

	pointer = &health;

	*pointer = 15.5f;

	printf("pointer�� ������ �� : %f\n", pointer);

	// ������ ������ �����ϱ� ���� �ּҰ��� ������ ������
	// �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.

	printf("pointer ������ ũ�� : %d\n", sizeof(pointer));

	// ������ ������ ũ��� �߾�ó�� ��ġ�� �� ���� ó���� ��
	// �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ���
	// � ü���� ���� ũ�Ⱑ �����˴ϴ�.

#pragma endregion

#pragma region ����������
// �ڷ����� �������� ���� ���·� ��� �ڷ�����
// ������ �� �ִ� �������Դϴ�.

// void* p = NULL;

// char alphabet = 'A';

//	int integer = 10;

// float decimal = 5.5f;

// p = &alphabet;


// ���� �����ͷ� ������ �޸𸮿� �����Ϸ���
// ���� �����Ͱ� ����Ű�� ������ �ڷ�������
// �� ��ȯ�� ���־���մϴ�.
// *(char*)p = 'B';

// p = &integer;

// *(int*)p = 15;

// p = &decimal;

// *(float*)p = 3.25f;

// printf("alphabet ������ �� : %c\n", alphabet);
// printf("integer ������ �� : %d\n", alphabet);
// printf("decimal ������ �� : %f\n", alphabet);






#pragma endregion

#pragma region ��� ���� ������

	// int vectorX = 10;
	// int vectorY = 20;
	// 
	// const int* ptr = &vectorX;
	// 
	// printf("ptr ������ ����Ű�� �� : %d\n", *ptr);
	// *ptr = 99;
	// 
	// ptr = &vectorY;
	// 
	// printf("ptr ������ ����Ű�� �� : %d\n", *ptr);


	// ��� ���� �����͸� �����ϰ� �Ǹ� ������ ������
	// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ ��
	// ������ ������ �� �ֽ��ϴ�.



#pragma endregion

#pragma region ������ ���

	// int positionX = 5;
	// int positionY = 0;
	// 
	// int* const reference = &positionX;
	// 
	// *reference = 10;

	// reference = &positionY;

	// ������ ����� �ش� ������ ���� ������ �� ������,
	// �ٸ� �޸� �ּҸ� ������ �� �����ϴ�.

#pragma endregion

}