#include <iostream>
using namespace std;
int main()
{
    float n1, n2, sum, avg;
    cout << "Enter two numbers:";
    cin >> n1;
    cin >> n2;
    sum=n1+n2;
    avg=sum/2;
    cout << "Average of the two numbers = " << avg << "\n";
    return 0;
}