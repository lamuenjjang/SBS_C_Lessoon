#include <stdio.h>

int main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	// int array[3];
	// 
	// array[0] = 10;
	// array[1] = 20;
	// array[2] = 30;

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	// ������ ������ �˴ϴ�.

	//	printf("array �迭�� ũ��� : %d\n", sizeof(array) / sizeof(int));

	// sizeof(array) ??	-> 3

	// int size = sizeof(array) / sizeof(int);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("array[%d]�� �� : %d\n", i, array[i]);
	// }

	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	// float list[] = { 1.25f, 2.75f, 3.575f,4.8525f};
	// 
	// for (int i = 0; i < 4; i++)
	// {
	// 	printf("array[%d] : %d\n", i, list[i]);
	// }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.
	
	// float* pointer = list;
	// 
	// pointer = pointer + 2;
	// 
	// *pointer = 7.875f;
	// 
	// printf("array[2] : %f\n", *pointer);
	// printf("pointer�� �� : %p\n", pointer);
	// printf("list�� �ּ� : %p\n", &list[2]);

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����ŵ�ϴ�.
#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������
	// �����Դϴ�.

	//  const char* string = "Queue";
	// 
	// printf("string ������ �� : %s\n", string);
	// 
	// string = "Stack";
	// 
	// printf("string ������ �� : %s\n", string);

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
	// ���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������ ���ڿ�
	// �� ���� ������ �� �����ϴ�.

	// char word[] = { "Darkness" };
	// char content[] = { "Github" };
	// 
	// printf("string ������ ũ�� : %d\n", sizeof(word));

	// ���ڿ��� ���鵵 �Բ� �޸� ������ ���ԵǾ� ũ�Ⱑ
	// �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ����
	// ���ڰ� �߰��˴ϴ�.

	// word[4] = '\0';
	// 
	// printf("word ������ �� : %s\n", word);

	// word = "word";

	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ�
	// ������, ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ�
	// ��ȿ�� ���ڱ����� ����մϴ�.
#pragma endregion

#pragma region ASCII �ڵ�
	// �̱� ANSI ���� ǥ��ȭ�� ���� ��ȯ�� 7 bit ��ȣ ü���Դϴ�.

	// char alphabet = 65;

	// printf("%c", alphabet);

	// for (int i = 0; i < 26; i++)
	// {
	// 	printf("%c\n", 'A'+i);
	// }

#pragma endregion

}