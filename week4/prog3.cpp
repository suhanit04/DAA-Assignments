#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int index = low;
    for (int i = low; i <= high; i++) {
        if (arr[i] <= pivot) {
            swap(&arr[index], &arr[i]);
            index++;
        }
    }
    swap(&arr[index], &arr[high]);
    return index;
}

int findKthSmallest(int *arr, int low, int high, int k) {
    if (k > 0 and k <= (high - low + 1)) {
        int partIndex = partition(arr, low, high);
        if (partIndex - low == k - 1)
            return arr[partIndex];
        if (partIndex - low > k - 1)
            return findKthSmallest(arr, low, partIndex - 1, k);
        return findKthSmallest(arr, partIndex + 1, high, k - partIndex + low - 1);
    }
    // Handling a case where k is more than size of array.
    return INT_MAX;
}

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        cout << findKthSmallest(arr, 0, n - 1, k) << endl;
    }
    return 0;
}