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
	Dog dog("Дружок", 3, 18);
	cout << "Имя питомца: " << dog.getName() << "\tВозраст: " << dog.getAge() << "\tВес: " << dog.getWeight() << endl;
	Cat cat("Мурка", 2, 2);
	cout << "Имя питомца: " << cat.getName() << "\tВозраст: " << cat.getAge() << "\tВес: " << cat.getWeight() << endl;
	Parrot parrot("Кеша", 1, 0.3);
	cout << "Имя питомца: " << parrot.getName() << "\tВозраст: " << parrot.getAge() << "\tВес: " << parrot.getWeight() << endl;
}