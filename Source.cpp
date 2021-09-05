#include <iostream>
#include <string>
using namespace std;
class Pet{
	string name;
	int age;
	double weight;
public:
	Pet(string n, int a, double w ) : name(n), age(a), weight(w) {}
	string getName() const { return name; }
	int getAge() const { return age; }
	double getWeight() const { return weight; }
};

class Dog : public Pet{
public:
	Dog(string n, int a, double w) : Pet(n, a, w) {}
};

class Cat : public Pet {
public:
	Cat(string n, int a, double w) : Pet(n, a, w) {}
};

class Parrot : public Pet {
public:
	Parrot(string n, int a, double w) : Pet(n, a, w) {}
};
int main(){
	setlocale(LC_ALL, "rus");
	Dog dog("������", 3, 18);
	cout << "��� �������: " << dog.getName() << "\t�������: " << dog.getAge() << "\t���: " << dog.getWeight() << endl;
	Cat cat("�����", 2, 2);
	cout << "��� �������: " << cat.getName() << "\t�������: " << cat.getAge() << "\t���: " << cat.getWeight() << endl;
	Parrot parrot("����", 1, 0.3);
	cout << "��� �������: " << parrot.getName() << "\t�������: " << parrot.getAge() << "\t���: " << parrot.getWeight() << endl;
}