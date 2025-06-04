#include <iostream>

using namespace std;
// Animal �⺻ Ŭ���� ����
// Animal Ŭ�������� makeSound()��� ���� ���� �Լ� ����
// Animal Ŭ������ ��ӹ޾Ƽ� �پ��� ���� Ŭ���� ����
// �� Ŭ�������� makeSound()�Լ��� ������
class Animal {
public:
	virtual void makeSound() = 0;
};
class Dog : public Animal {
public:
	void makeSound() {
		cout << "Woof!" << endl;
	}
};

class Cat : public Animal {
	void makeSound() {
		cout << "Meow!" << endl;
	}
};

class Cow : public Animal {
	void makeSound() {
		cout << "Moo!" << endl;
	}
};

//Animal Ÿ���� ������ �迭�� ����
//Dog, Cat, Cow �ڷ����� ������ �����ϰ� �迭�� ����
//Animal �迭�� �ݺ������� ��ȸ�ϸ鼭 �� ������ �����Ҹ� ����
int main() {
	Animal* ani[3];
	Dog D;
	Cat C;
	Cow W;

	ani[0] = &D;
	ani[1] = &C;
	ani[2] = &W;

	for (int i = 0; i < 3; ++i) {
		ani[i]->makeSound();
	}


	return 0;
}