
#include <iostream>

void PrintNumbersInConsole(int MaxNumber, bool IsOdd);

int MaxNumber = 9;

int main()
{
    PrintNumbersInConsole(MaxNumber, false);
    PrintNumbersInConsole(MaxNumber, true);
}

void PrintNumbersInConsole(int MaxNumber, bool IsOdd)
{
    std::cout << "\n\n";

    for (int i = 0; i < MaxNumber; i++)
    {
        if (!IsOdd)
        {
            if (!(i % 2))
            {
                std::cout << i << "\n";
            }
        }
        else
        {
            if (i % 2)
            {
                std::cout << i << "\n";
            }
        }
    }
}