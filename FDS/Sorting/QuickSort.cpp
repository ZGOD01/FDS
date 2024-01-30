#include <bits/stdc++.h>
using namespace std;

int Lomuto(int arr[], int l, int h)
{
    //l: Index of the leftmost element in the current subarray.
    //h: Index of the rightmost element in the current subarray.
    //p : Is the piovt in the array     
    int p = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}
void qsort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = Lomuto(arr, l, h);
        qsort(arr, l, p - 1);
        qsort(arr, p + 1, h);
    }
}

int main()
{
    int arr[] = {32, 12, 78, 11, 1, 9, 0};
    qsort(arr, 0, 7);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}