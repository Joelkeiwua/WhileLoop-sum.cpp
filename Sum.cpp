#include <iostream>

using namespace std;

int main()
{
    int num, sum;
    sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i <= 10; ++i) 
	{
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}