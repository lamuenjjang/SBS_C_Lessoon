#include <stdio.h>

int main()
{
#pragma region ����
	// �����͸� ������ �� �ִ� �޸� ������ �����ϴ� ���Դϴ�.

#pragma region �ڷ���
	// �����͸� �����ϱ� ���� �������� ���¸� �����ִ� ���Դϴ�.

	char alphabet = 'A';
	int integer = 100;
	float decimal = 15.6f;

	// �ڷ����� ������ �ڷ������� ũ�Ⱑ ������ ������, �ڷ�����
	// ũ��� ����Ʈ ������ �̷���� �ְ�, �ڷ����� ��� �ڷ�����
	// ���� ������ �� �ִ� ���� ������ ������ �����˴ϴ�.
#pragma endregion

#pragma region ���� ������
	// ����ϱ� ���� �ڷ����� ������ ��������� �������ִ� ���Դϴ�.

	// %c : ���ڸ� ����ϱ� ���� ���� ������
	printf("alphabet ������ �� : %c\n", alphabet);
	// %d : ������ ����ϱ� ���� ���� ������
	printf("integer ������ �� : %d\n", integer);
	// %f : �Ǽ��� ����ϱ� ���� ���� ������
	printf("decimal ������ �� : %f\n", decimal);


#pragma endregion

#pragma endregion

}