
#include <iostream>
#include <cmath>

class Vector
{
private:
	int x;
	int y;

public:
	Vector() : x(0), y(0)
	{}

	Vector(int _x, int _y) : x(_x), y(_y)
	{}

	double GetVectorSize()
	{
		return sqrt((x * x) + (y * y));
	}

	void ShowVectorValues()
	{
		std::cout << "x: " << x << " y: " << y;
	}
};

int main()
{
	Vector vector(3, 5);

	vector.ShowVectorValues();

	std::cout << "\n" << "Size: " << vector.GetVectorSize();
}
