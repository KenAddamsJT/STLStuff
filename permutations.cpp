#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

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

    //starting iterator, position which has to be brought to first index, ending iterator
    rotate(v.begin(), v.end() - 3, v.end());
    for (auto i : v)
        cout << i << " ";

    //shuffle - generates a fixed sequence ordering for a given seed
    shuffle(v.begin(), v.end(), default_random_engine(2));
    cout << endl;
    for (auto i : v)
        cout << i << " ";

    //another alternative, but shuffle is prefered
    random_shuffle(v.begin(), v.end());
    cout << endl;
    for (auto i : v)
        cout << i << " ";

    //flip the array
    reverse(v.begin(), v.end());
    cout << endl;
    for (auto i : v)
        cout << i << " ";

    vector<int> a;
    for (int i = 0; i < 5; i++)
        a.push_back(i);
    //all possible permutations, note vector must be sorted prior to doing this:
    do
    {
        cout << endl;
        for (auto i : a)
            cout << i << " ";
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}