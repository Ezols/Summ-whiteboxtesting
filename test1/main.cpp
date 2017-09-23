#include <iostream>
#include <fstream>

using namespace std;

int summ(int n);


int main()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;

	int userInput = n;
	int result = summ(n);


	ofstream myFile("tests.txt");
	if (myFile.is_open())
 	{

		myFile << "Result: " << result << endl;
		myFile << "userInput: " << userInput;
		
		myFile.close();
	}
	else cout << "Unable to open file";

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

			cout << "Sum = " << sum << endl;
		}
	return sum;
}