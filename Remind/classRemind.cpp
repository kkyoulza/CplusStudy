#include <iostream>

using namespace std;

class Circle {

	int radius;

public:
	Circle();
	Circle(int r);
	int GetRadius() { return this->radius; }; // 리턴할 변수 종류를 써야 한다.
	void WriteCircleArea() { cout << 3.14 * radius * radius<<endl; };
	~Circle(); // 소멸자
};

Circle::Circle() {
	(*this).radius = 1; // 이것은 this 자체가 자신의 클래스의 주소를 나타내는 것이기에 ->로 해 주어야 하는게 맞다.
	// this->radius = 1;
}

Circle::Circle(int r) {

	this->radius = r;
}

Circle::~Circle() {
	cout << "반지름 "<<radius<<" 소멸!" <<endl;
}

int main() {

	Circle cir1;
	Circle cir2(5);

	cout<<cir1.GetRadius()<<endl;
	cir1.WriteCircleArea();
	cout << cir2.GetRadius()<<endl;
	cir2.WriteCircleArea();

}




/*
클래스에서 public:, private:, protected: 로 묶어서 선언할 수 있다.

뒤에 세미콜론을 붙여 주어야 하고, 선언하면서 내용을 안에 넣을 수도 있고, 밖에서 "클래스::함수 이름"을 통하여 세부 내용을 설정할 수도 있다. (Namespace를 사용!)

그리고 생성자도 2종류를 만들어 주었다.

아무 것도 넣지 않으면 반지름의 길이가 1로 설정되고, 반지름의 길이를 매개변수로 넣어주게 되면 반영되면서 객체가 생성된다.

그리고 this는 객체의 주소를 나타내기에 .으로 접근하지 못하며 ->로 접근할 수 있음을 볼 수 있다.

or *this를 통하여 객체 자체에 접근!

그리고 소멸자(~Circle())도 하나 만들었다. 소멸자로 소멸되는 순서는 생성된 반대 순서이다.


*/
