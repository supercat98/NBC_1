#include <iostream>

using namespace std;

//�迭�� ���ڷ� �Ѱ� �޾Ƽ� �迭 ���ҵ��� �հ踦 ��ȯ�ϴ� �Լ�
int add(int* arr, int size) {
	int sum1 = 0;
	for (int i = 0; i < size; ++i)
	{
		sum1 += arr[i]; //�迭�� ����� ���ڵ��� �հ�
	}
	return sum1;
}

//�迭�� ���ڷ� �Ѱ� �޾Ƽ� �迭 ���ҵ��� ����� ��ȯ�ϴ� �Լ�
int average(int* arr, int size) {
	int sum2 = 0;
	double ever = 0;
	for (int i = 0; i < size; ++i)
	{
		sum2 += arr[i]; //�迭�� ����� ���ڵ��� �հ�
	}
	ever = sum2 / 5; //�迭�� ����� ���ڵ��� ���
	return ever;
}

int main() {
	int data[5]; // 2.�Է� ���� ���ڸ� �迭�� ����
	for (int i = 0; i < 5; ++i) {
		cin >> data[i]; // 1.����ڷκ��� 5���� ���ڸ� �Է� ����
	}

	int sum0 = 0;
	for (int i = 0; i < 5; ++i) {
		sum0 += data[i];
	}
	double ever0 = sum0 / 5;
	cout << sum0 << endl;
	cout << ever0 << endl;

	add(data, 5);
	average(data, 5);
	cout << add(data, 5) << endl;
	cout << average(data, 5) << endl;

	return 0;
}