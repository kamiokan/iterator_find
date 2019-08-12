#include <iostream>
#include <vector>

using namespace std;

template<class Iterator, class T>
Iterator my_find(Iterator first, Iterator last, T value) {
    while (first != last) {
        if (*first == value) {
            return first;
        }
        ++first;
    }
    return first;
}

int main() {
    // コンテナから値3を検索する
    vector<int> v = {1, 2, 3, 4, 5};
    decltype(v)::iterator it = my_find(v.begin(), v.end(), 3);
    if (it != v.end()) {
        cout << *it << endl;
    } else {
        cout << "not found!" << endl;
    }
}
