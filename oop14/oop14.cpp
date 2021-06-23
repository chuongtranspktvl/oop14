#include <iostream>
using namespace std;
class Animal {
public:
	virtual void sound() {
		cout << "some sound";
	}
};
class cat :public Animal {
public:
	void sound() {
		cout << "meow meow" << endl;
	}
};
class dog :public Animal {
public:
	void sound() {
		cout << "gau gau" << endl;;
	}
};
int main() {
	Animal* arr[2];
	arr[0] = new cat;
	arr[1] = new dog;
	for (int i = 0; i <2; i++) {
		arr[i]->sound();
	}








}