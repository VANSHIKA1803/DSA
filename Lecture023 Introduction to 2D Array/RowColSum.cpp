#include <iostream>
using namespace std;

// Sum of all Elements Row wise
void printRowSum(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

// Sum of all Elements Column wise
void printColSum(int arr[][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

// Finding the largest Row Sum
int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}

int main()
{

    int arr[3][3];

    // Taking Input --> Row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // Printing the 2D array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // cout << "Printing Sum of elements Row wise" << endl;
    // printRowSum(arr, 3, 3);
    // cout << endl;
    // cout << "Printing Sum of elements Column wise" << endl;
    // printColSum(arr, 3, 3);
    // cout << endl;

    int ansIndex = largestRowSum(arr, 3, 3);
    cout << "Max Row is at Index " << ansIndex << endl;

    return 0;
}