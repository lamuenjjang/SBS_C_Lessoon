#include <stdio.h>
#include <stdarg.h>

void Function()
{
	printf("Function...\n");
}

void Position(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);

}

int Compare(float x, float y)
{
	if (x > y)
	{
		return 1;
	}
	else if (x == y)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void Swap(int* left, int* right)
{
	int temporary = *right;

	*right = *left;

	*left = temporary;
}

void Process(float progress)
{
	printf("Progress : %f\n", progress);

	// �ζ��� �Լ��� ������ ������ Ȯ���Ǹ�, ������
	// �� �ζ��� �Լ��� �����ϴ��� ��Ȳ�� ����
	// �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �մϴ�.
}

void Recursive(int count)
{
	if (count > 0) {
		Recursive(count - 1);
	}
	else
	{
		return;
	}
	printf("Recursive Function\n");
}

void DynamicFucntion(int count, ...)
{
	// va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� �������Դϴ�.
	va_list list;

	// va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �����մϴ�.
	va_start(list, count);

	for (int i = 0; i < count; i++)
	{
		// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �����ɴϴ�.
		printf("%d\n", va_arg(list, int));
	}
	// va_end : ���� �μ� �����Ͱ� ������ �� NULL�� �ʱ�ȭ�մϴ�.
	va_end(list);
}

int main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Function();
	// 
	// Function();
	// 
	// Function();


	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.


#pragma endregion

#pragma region �Ű�����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// Position(5, 5);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮰� ������ϴ�.

	// printf("Compare �Լ��� �� : %d\n", Compare(5.75f, 8.125f));

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű�������
	// �Բ� ������ �� ������, ���� ���� �Ű�������
	// �����Ͽ� ����� �� �ֽ��ϴ�.

#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű������� ������ ���޵Ǵ�
	// ���Դϴ�.

	// int a = 10;
	// int b = 20;
	// 
	// Swap(&a, &b);
	// 
	// 
	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);

	// �μ��� ��� �Լ��� �ִ� �Ű������� ���� ����
	// ������ �� �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ�
	// �μ��� ���� ���޹޴� �Ű������� �ڷ����� ���� ��ġ�ؾ��մϴ�.
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// Process(46.7f);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ����� �����Ƿ� ó�� �ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���������� ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	Recursive(3);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ����
	// �� �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡
	// �߻��ϰ� �˴ϴ�.
#pragma endregion

#pragma region ���� ���� �Ű� ����
	// �Ű� ������ ������ ���� ������ ��� ����
	// �������� �μ��� ���� �� �ֵ��� �����Ǿ� �ִ�
	// �Ű� �����Դϴ�.

	DynamicFucntion(3, 10, 20, 30);

#pragma endregion

}