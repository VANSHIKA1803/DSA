#include <iostream>
using namespace std;

/*    -----This becomes too bulky and lengthy so now we will make a function for this problem-----
int main()
{
    // pow(a,b)

    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "Answer is " << ans << endl;

    int c, d;
    cin >> c >> d;

    ans = 1;
    for (int i = 1; i <= d; i++)
    {
        ans = ans * c;
    }
    cout << "Answer is " << ans << endl;

    // Ese baar baar krne se code bulky ho jata hai , buggy ho jata h or readability bhi khatam ho jati hai
    // Isiliye hum functions use krenge code ko or acha bnaenge
    return 0;
}
*/

int power(int num1, int num2)
{

    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int answer = power(a, b);
    cout << "Answer is: " << answer << endl;

    int c, d;
    cin >> c >> d;

    int solution = power(c, d);
    cout << "Answer is: " << solution << endl;

    return 0;
}