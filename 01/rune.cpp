#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < k; ++i) {
        sum1 += arr[i];
    }

    for (int i = n - k; i < n; ++i) {
        sum2 += arr[i];
    }

    int max_diff = abs(sum1 - sum2);

    cout << max_diff << endl;

    return 0;
}
