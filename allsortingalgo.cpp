// Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main();
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0); ios::sync_with_stdio(false); _main();
}
typedef long long ll;
//---------------------------------------------------------------------------------------------------
//mergesort
void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

//recursive-bubblesort
void recbubblesort(int arr[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    recbubblesort(arr, n - 1);
}

//recursive-insertionsort
void recinsertionsort(int arr[], int i, int n)
{
    if (i == n)
        return;
    for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        swap(arr[j - 1], arr[j]);
    recinsertionsort(arr, i + 1, n);
}

//quicksort
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
            i++;
        while (arr[j] > pivot && j > low)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
void solve()
{
    int arr[] = {1, 5, 2, 9, 43, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    //selectionsort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int mini = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[mini])
    //             mini = j;
    //     }
    //     int temp = arr[i];
    //     arr[i] = arr[mini];
    //     arr[mini] = temp;
    // }

    //bubblesort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //             swap(arr[j], arr[j + 1]);
    //     }
    // }

    //insertionsort
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
    //         swap(arr[j - 1], arr[j]);
    //     }
    // }

    //mergesort
    // mergesort(arr, 0, n - 1);

    //recursive-bubblwsort
    // recbubblesort(arr, n);

    //recursive-insertionsort
    // recinsertionsort(arr, 0, n);

    //quicksort
    quicksort(arr, 0, n - 1);
    rep(i, 0, n)
    cout << arr[i] << " ";
    cout << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}