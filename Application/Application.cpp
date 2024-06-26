
#include <iostream>
#include <cmath>

class Vector
{
private:
	int x;
	int y;

public:
	Vector() : x(5), y(4)
	{}

	int GetVectorSize()
	{
		return (x * x) + (y * y);
	}

	void ShowVectorValues()
	{
		std::cout << "x: " << x << " y: " << y;
	}
};

int main()
{
	Vector vector;

	vector.ShowVectorValues();

	std::cout << "\n" << "Size: " << sqrt(vector.GetVectorSize());
}
