#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    vector<int> result;

    for (int x = b; x >= a; --x)
    {
        if (gcd(x, sumOfDigits(x)) != 1)
        {
            result.push_back(x);
        }
    }

    sort(result.begin(), result.end());

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
