
#include <iostream>

class Animal
{
public:
	virtual void Voice()
	{
		std::cout << "Text Animal\n";
	}
};

class Dog : public Animal
{
public: 
	void Voice() override
	{
		std::cout << "Woof!\n";
	}
};

class Cat : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Meow!\n";
	}
};

class Cow : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Moo!\n";
	}
};

int main()
{
	const int sizeArray = 3;
	Animal* ptrArray[sizeArray] = { { new Dog() }, { new Cat() }, { new Cow() } };

	for (int i = 0; i < sizeArray; i++)
	{
		ptrArray[i]->Voice();
	}
}

