
#include <iostream>
#include <time.h>

int main()
{
	const int arraySize = 8;

	int array[arraySize][arraySize] = {};

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
			array[i][j] = i + j;
	}

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
			std::cout << array[i][j];

		std::cout << "\n";
	}

	std::cout << "\n\n";

	struct tm buf;
	time_t t = time(NULL);
	
	localtime_s(&buf, &t);

	int index = buf.tm_mday % 2;
	int sum = 0;

	for (int j = 0; j < arraySize; j++)
		sum += array[index][j];

	std::cout << "Summ " << index << " string: " << sum;

}

