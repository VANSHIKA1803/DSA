#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char ch[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(ch[s]) != toLowerCase(ch[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// Function for finding length
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "Enter your name :" << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is " << name << endl;

    int len = getLength(name);
    cout << "Length : " << len << endl;

    cout << "Palindrome or not :" << checkPalindrome(name, len) << endl;

    cout << "Character " << toLowerCase('d') << endl;
    cout << "Character " << toLowerCase('F') << endl;

    return 0;
}