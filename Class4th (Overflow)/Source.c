#include <stdio.h>

int main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������
	// �Ѿ ������ �����ϴ� �����Դϴ�.

	char character = 129; // <- -127

	printf("character ������ �� : %d\n", character);


	// �����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� ��, �����÷ο찡 �߻��ϸ� infinity��� ���� ��µ˴ϴ�.


#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ����
	// �� �Ѿ ������ �����ϴ� �����Դϴ�.

	char alphabet = -129; // <- 127

	printf("alphabet ������ �� : %d\n", alphabet);

	// ����÷ο�� ��ȣ�� ���� �ڷ��������� �Ȱ��� �߻�
	// �ϸ�, �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ���� ��µ˴ϴ�.
#pragma endregion

#pragma region ����Ʈ ������
	// ��Ʈ�� ��ġ�� ������ �Ǵ� �������� Ư���� ����ŭ
	// �̵���Ű�� �������Դϴ�.

	int x = 10;
	int y = 12;

	printf("x�� ���� 2�� �������� �̵��� ��� : %d\n", x << 2);
	printf("y�� ���� 2�� ���������� �̵��� ��� : %d\n", y >> 2);



#pragma endregion

#pragma region ��� ������

	int a = 1;
	int b = 2;
	const int c = 6;
	const int d = 3;
	// int result1 <- ���� + ����
	int result1 = a + b;
	// int result2 <- ���ͷ� ��� - ����
	int result2 = 10 - a;
	// int result3 <- �ɺ��� ��� * ���ͷ� ���
	int result3 = c * 3;
	// int result4 <- ���ͷ� ��� / ���ͷ� ���
	int result4 = 10 / 5;
	// int result5 <- �ɺ��� ��� % �ɺ��� ���
	int result5 = c % d;

	printf("result1�� �� : %d\n", result1);
	printf("result2�� �� : %d\n", result2);
	printf("result3�� �� : %d\n", result3);
	printf("result4�� �� : %d\n", result4);
	printf("result5�� �� : %d\n", result5);

#pragma endregion


#pragma region ��ȣ���� �ڷ���

	unsigned short mineral = 65535;

	unsigned int gas = -1;

	printf("mineral ������ �� : %u\n", mineral);
	printf("gas ������ �� : %u\n", gas);
	printf("gas ������ �� : %d\n", gas);



#pragma endregion

}