#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int people, maxWeight;

    cin >> people >> maxWeight;

    int weights[people];

    for (int i = 0; i < people; i++)
    {
        cin >> weights[i];
    }

    sort(weights, weights + people);

    int boatCount = 0, left = 0, right = people - 1;

    while (left <= right)
    {
        if (weights[left] + weights[right] <= maxWeight)
        {
            left++;
        }
        right--;
        boatCount++;
    }

    cout << boatCount;

    return 0;
}