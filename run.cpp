#include <iostream>
#include <vector>
#include <string>

using namespace std;

// #include<algorithm> std::find()と同等の機能
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

    // ももクロから佐々木彩夏を検索する
    vector<string> momokuro = {"百田夏菜子", "玉井詩織", "佐々木彩夏", "高城れに"};
    decltype(momokuro)::iterator it2 = my_find(momokuro.begin(), momokuro.end(), "佐々木彩夏");
    if (it2 != momokuro.end()) {
        cout << *it2 << endl;
    } else {
        cout << "not found!" << endl;
    }
}
