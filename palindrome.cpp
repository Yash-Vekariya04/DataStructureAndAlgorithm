#include <iostream>
using namespace std;

int main()
{
    // To check wheather the given string is a palindrome or not.
    string str;
    cout << " Enter the string : ";
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[str.length() - (1 + i)])
        // if(str[0] == str[-1])
        {
            count += 1;
        }
        else
        {
            cout << " The given string is not a palindrome." << endl;
            return 0;
        }
    }
    if (count == str.length())
    {
        cout << " The given string is a palindrome." << endl;
    }
}