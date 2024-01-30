#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return 1;
        
    }
    return 0;
}

int main()
{

    int n;
    cout << "Enter the element :";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element which is to find :";
    cin >> key;

    cout << linearSearch(arr, n, key);
    return 0;
}