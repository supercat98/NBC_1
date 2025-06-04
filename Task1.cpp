#include <iostream>

using namespace std;

//배열을 인자로 넘겨 받아서 배열 원소들의 합계를 반환하는 함수
int add(int* arr, int size) {
	int sum1 = 0;
	for (int i = 0; i < size; ++i)
	{
		sum1 += arr[i]; //배열에 저장된 숫자들의 합계
	}
	return sum1;
}

//배열을 인자로 넘겨 받아서 배열 원소들의 평균을 반환하는 함수
int average(int* arr, int size) {
	int sum2 = 0;
	double ever = 0;
	for (int i = 0; i < size; ++i)
	{
		sum2 += arr[i]; //배열에 저장된 숫자들의 합계
	}
	ever = sum2 / 5; //배열에 저장된 숫자들의 평균
	return ever;
}

int main() {
	int data[5]; // 2.입력 받은 숫자를 배열에 저장
	for (int i = 0; i < 5; ++i) {
		cin >> data[i]; // 1.사용자로부터 5개의 숫자를 입력 받음
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