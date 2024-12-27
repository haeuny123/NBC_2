#include <iostream>

using namespace std;

class Animal
{
public:
	Animal() {}
	virtual void makeSound() {};
};

class Dog : public Animal
{
public:
	Dog(string word) :m_word(word) {}
	void makeSound()
	{
		cout << "Dog" << " " << m_word << endl;
	}
private:
	string m_word;
};

class Cat : public Animal
{
public:
	Cat(string word) :m_word(word) {}
	void makeSound()
	{
		cout << "Cat" << " " << m_word << endl;
	}
private:
	string m_word;
};

class Cow : public Animal
{
public:
	Cow(string word) :m_word(word) {}
	void makeSound()
	{
		cout << "Cow" << " " << m_word << endl;
	}
private:
	string m_word;
};

void print(Animal* animal)
{
	animal->makeSound();
}

int main()
{
	Dog dog("港港");
	Cat cat("具克");
	Cow cow("澜概");

	Animal arr[3] = {dog, cat, cow};
	Animal* ptr = arr;

	for (int i = 0; i < 3; ++i)
		print(ptr);

	return 0;
}