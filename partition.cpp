#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool iseven(int x)
{
    return (x % 2 == 0);
}

int main()
{
    FIO;
    OJ;
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    vector<int> c = v;
    //to partition a container based on the given condition
    partition(v.begin(), v.end(), iseven);
    for (auto i : v)
        cout << i << " ";

    //to check if the given container is partitioned
    cout << endl
         << is_partitioned(v.begin(), v.end(), iseven);

    //to parititon and maintain relative order of elements
    cout << endl;
    stable_partition(c.begin(), c.end(), iseven);
    for (auto i : c)
        cout << i << " ";

    //parition point, gives the first element for which given condition isn't true
    auto it = partition_point(c.begin(), c.end(), iseven);
    cout << endl
         << *it;

    //store partitioned into seperate vectors
    //partition_copy(vec.begin(), vec.end(), vec1.begin(), vec2.begin(), predicated)
    return 0;
}