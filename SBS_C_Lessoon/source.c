#include <stdio.h>
#include <math.h>

struct Vector2
{
	int x;
	int y;
};

/*struct GameObject
{
	char grade;
	double atk;
	int health;
	
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸���
	// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ�
	// ���´� �⺻ �ڷ������θ� �����Ǿ� �ֽ��ϴ�.
};*/

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct GameObject gameObject;
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.name = "monster";
	// gameObject.atk = 5.5f;
	// 
	// printf("gameObject�� ��� : %c\n", gameObject.grade);
	// printf("gameObject�� ü�� : %d\n", gameObject.health);
	// printf("gameObject�� ���ݷ� : %f\n", gameObject.atk);
	


	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �ѹ���
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ�
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject gameObject = { 'C',30, 3.25f };
	// 
	// printf("gameObject�� ũ�� : %d\n", sizeof(gameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ����߿�
	// ũ�Ⱑ ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region �� �������� �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100));

	// printf("10�� ���� : %lf\n", pow(10, 2));

	struct Vector2 Character = { 0,0 };
	struct Vector2 Monster = { 2,2 };

	double distance = sqrt(pow(Character.x - Monster.x, 2) + 
		pow(Character.y - Monster.y, 2));

	printf("distance�� �� : %lf  >>>>  ", distance);

	if (distance <= 3.0f) {
		printf("���� ����");
	}
	else
	{
		printf("�̵� ����");
	}


#pragma endregion

	return 0;
}