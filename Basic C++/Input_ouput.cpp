#include <iostream>
using namespace std;

int main()
{
    cout << "Hello Sir !" << endl;
    cout << "I am Vanshita." << endl;

    int x;
    cin >> x;
    cout << "Value of x is: " << x + 5;

    // String data type or getline

    string s1; // string is used to take only one word
    string s2;

    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;

    string s3;
    getline(cin,s3);

    cout << s3;

    return 0;
}