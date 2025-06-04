#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int findShortestGoodSubarray(const vector<int>& arr) {
    int n = arr.size();
    int minLength = INT_MAX;

    for (int i = 0; i < n; ++i) {
        unordered_map<int, int> freq;
        for (int j = i; j < n; ++j) {
            freq[arr[j]]++;
            if (freq.size() > 2) break;
            if (freq.size() == 2) {
                minLength = min(minLength, j - i + 1);
            }
        }
    }

    return (minLength == INT_MAX ? -1 : minLength);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        cout << findShortestGoodSubarray(A) << endl;
    }
    return 0;
}
