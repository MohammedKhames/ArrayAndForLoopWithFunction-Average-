
#include <iostream>
#include<string>
using namespace std;

void readNumbers(int Arr1[100], int& Length)
{
	cout << "How many Numbers do you want to Enter ? 1 to 100 \n";
	cin >> Length;
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Please Enter number " << i + 1 << endl;
		cin >> Arr1[i];

	}

}

void PrintNumbers(int Arr1[100], int Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << " Number [ " << i + 1 << " ] : " << Arr1[i] << endl;

	}
}

int SumNumbers(int Arr1[100], int Length)
{

	int sum = 0;
	for (int i = 0; i <= Length - 1; i++)
	{
		sum += Arr1[i];

	}
	return sum;
}


int main()
{
	int Arr1[100];
	int Length = 0;
	readNumbers(Arr1, Length);
	PrintNumbers(Arr1, Length);
	cout << "*******************\n";
	cout << " sum = " << SumNumbers(Arr1, Length) << endl;
	cout << " Average = " << SumNumbers(Arr1, Length) / Length;





	return 0;
}

