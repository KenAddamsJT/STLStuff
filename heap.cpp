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
    vector<int> heap;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        heap.push_back(x);
    }
    // to convert given array of numbers to a max heap
    make_heap(heap.begin(), heap.end());
    for (auto i : heap)
        cout << i << " ";
    heap.push_back(4);
    //percolate up
    push_heap(heap.begin(), heap.end());
    cout << endl;
    for (auto i : heap)
        cout << i << " ";
    //swap last and first element, and then percolate down
    //warning: doesn't remove last element
    pop_heap(heap.begin(), heap.end());
    cout << endl;
    for (auto i : heap)
        cout << i << " ";

    return 0;
}