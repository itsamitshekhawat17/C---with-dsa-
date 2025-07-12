#include <iostream>
#include <vector>
#include <algorithm> // for sort and reverse
using namespace std;

int main() {
    // 1. Declare and add elements to a vector
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // 2. Print using normal for loop
    cout << "Vector using for loop: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 3. Print using auto and for-each loop
    cout << "Vector using for-each loop: ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    // 4. Using iterator to print
    cout << "Vector using iterator: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 5. Reverse print using rbegin() and rend()
    cout << "Vector in reverse: ";
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 6. Insert 99 at 2nd position (index 1)
    v.insert(v.begin() + 1, 99);
    cout << "After inserting 99 at index 1: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 7. Erase element at index 2
    v.erase(v.begin() + 2);
    cout << "After erasing element at index 2: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 8. Pop back (remove last)
    v.pop_back();
    cout << "After pop_back: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 9. Copy vector
    vector<int> v2 = v;
    cout << "Copied vector v2: ";
    for (auto x : v2) cout << x << " ";
    cout << endl;

    // 10. Swap vectors
    vector<int> a = {1, 2}, b = {3, 4};
    a.swap(b);
    cout << "After swap, a: ";
    for (auto x : a) cout << x << " ";
    cout << "and b: ";
    for (auto x : b) cout << x << " ";
    cout << endl;

    // 11. Sort and reverse
    sort(v.begin(), v.end()); // ascending
    cout << "Sorted vector: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    reverse(v.begin(), v.end()); // descending
    cout << "Reversed vector: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 12. Pairs inside vector
    vector<pair<int, string>> vp;
    vp.push_back({1, "Amit"});
    vp.push_back({2, "Singh"});
    cout << "Vector of pairs:\n";
    for (auto p : vp) {
        cout << p.first << " => " << p.second << endl;
    }

    // 13. Size, empty, capacity
    cout << "Vector size: " << v.size() << endl;
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 14. Clear vector
    v.clear();
    cout << "After clear, size = " << v.size() << endl;

    return 0;
}
