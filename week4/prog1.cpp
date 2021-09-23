#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int count_comp = 0;  // Store number of comparisions.

int merge(int arr[], int temp_arr[], int low, int mid, int high);
int mergeSortUtil(int arr[], int temp_arr[], int low, int high);

int mergeSort(int arr[], int n) {
    int temp_arr[n];
    return mergeSortUtil(arr, temp_arr, 0, n - 1);
}

int mergeSortUtil(int arr[], int temp_arr[], int low, int high) {
    int mid, count_inv = 0;
    if (high > low) {
        mid = low + (high - low) / 2;
        count_inv += mergeSortUtil(arr, temp_arr, low, mid);
        count_inv += mergeSortUtil(arr, temp_arr, mid + 1, high);

        count_inv += merge(arr, temp_arr, low, mid + 1, high);
    }
    return count_inv;
}

int merge(int arr[], int temp_arr[], int low, int mid, int high) {
    int i, j, k;
    i = k = low;
    j = mid;
    int count_inv = 0;

    while ((i <= mid - 1) and (j <= high)) {
        if (arr[i] <= arr[j])
            temp_arr[k++] = arr[i++];
        else {
            temp_arr[k++] = arr[j++];
            count_inv += (mid - i);
        }
        count_comp++;
    }

    while ((i <= mid - 1))
        temp_arr[k++] = arr[i++];

    while (j <= high)
        temp_arr[k++] = arr[j++];

    for (int i = low; i <= high; i++) {
        arr[i] = temp_arr[i];
    }
    return count_inv;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        // Solving every tescase here.
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        count_comp = 0;
        int inversions = mergeSort(arr, n);
        printArray(arr, n);
        cout << "Comparisions:: " << count_comp << endl;
        cout << "Inversions:: " << inversions << endl;
    }
    return 0;
}