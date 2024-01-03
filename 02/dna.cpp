#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dnaSequence;
    cin >> dnaSequence;

    int maxLength = 1;

    int currentLength = 1;
    for (int i = 1; i < dnaSequence.length(); ++i)
    {
        if (dnaSequence[i] == dnaSequence[i - 1])
        {
            currentLength++;
        }
        else
        {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    maxLength = max(maxLength, currentLength);

    cout << maxLength << endl;

    return 0;
}
