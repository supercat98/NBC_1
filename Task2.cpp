#include <iostream>

using namespace std;
// Animal 기본 클래스 정의
// Animal 클래스에는 makeSound()라는 순수 가상 함수 포함
// Animal 클래스를 상속받아서 다양한 동물 클래스 생성
// 각 클래스에서 makeSound()함수를 재정의
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

//Animal 타입의 포인터 배열을 선언
//Dog, Cat, Cow 자료형의 변수를 선언하고 배열에 저장
//Animal 배열을 반복문으로 순회하면서 각 동물의 울음소리 내기
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