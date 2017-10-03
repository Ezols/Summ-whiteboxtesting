#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int summ(int n);


int main()
{
	cout << "####### This software summs up digits from 1 to n you have entered #######" << endl << endl;
	int n, value;
	cout << "Enter a positive integer: ";
	cin >> n;

	int userInput = n;
	int result = summ(n);
	string readValue;
	string readExpectedValue;

	ifstream myFile("input.txt");

		if (!myFile)
			{
				cout << "Error opening file!" << endl;
				cin.get();
				return 0;
			}

		while(myFile.good())
 			{
				cout << "Value read from file: ";
				myFile >> readValue;
				cout << readValue;
				cout << endl;

				cout << "Expected value: ";
				myFile >> readExpectedValue;
				cout << readExpectedValue;
				
			}
	myFile.close();

	cout << endl << endl;

	return 0;
}


int summ(int n)
{
	
	int sum = 0;

	if (n <= 0)
		{
			cout << "Please enter positive integer! " << endl;

		}
	else
		{
		for (int i = 1; i <= n; ++i) {
				sum += i;
			}

			cout << "Summ from 1 to "<< n << " = " << sum << endl;
		}
	return sum;
}