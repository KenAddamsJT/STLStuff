#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool sortbysecond(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second > b.second);
}

int main()
{
    FIO;
    OJ;
    vector<int> array;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        array.push_back(x);
    }
    sort(array.begin(), array.end());
    for (auto i : array)
        cout << i << " ";

    //sort the array in descending order
    sort(array.begin(), array.end(), greater<int>());
    cout << endl;
    for (auto i : array)
        cout << i << " ";

    //sorting using conditions
    vector<pair<int, int>> map;

    int arr[] = {10, 20, 5, 40};
    int arr1[] = {30, 60, 20, 50};

    for (int i = 0; i < 4; i++)
        map.push_back({arr[i], arr1[i]});

    sort(map.begin(), map.end(), sortbysecond);

    cout << endl;
    for (auto i : map)
        cout << "{" << i.first << " ," << i.second << "} ";

    //partial sorting upto an index n can be done as follows:
    //partial_sort(v.begin(), v.begin() + n, v.end())

    //sort the nth element to it's right position, as it would be in a sorted array
    //nth_element(v.begin(), v.begin() + (n - 1), v.end())

    //heap sort can be performed by using:
    //sort_heap(v.begin(), v.end())

    //merge sort on two halves of an array can be performed using:
    //inplace_merge(v.begin(), middle, v.end())
    return 0;
}