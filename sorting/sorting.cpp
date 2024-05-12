#include <bits/stdc++.h>
using namespace std;

void SelectionSorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int min = i;
            if (arr[j] < arr[min])
            {
                min = j;
            }

            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void BubbleSorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int swapCount = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapCount++;
            }
        }
        if (swapCount == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }

            break;
        }
    }
}

void InsertionSorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSorting(arr, n);

    return 0;
}