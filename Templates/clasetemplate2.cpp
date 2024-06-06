#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T, int length>
class Array {
public:
    T array[length];

    void fill(T value) {
        for (int i = 0; i < length; i++) {
            array[i] = value;
        }
    }

    T& at(int index) {
        return array[index];
    }

    template<typename U, int len>
    friend ostream& operator<<(ostream& os, const Array<U, len>& arr);
};

template<typename U, int len>
ostream& operator<<(ostream& os, const Array<U, len>& arr) {
    os << "[";
    for (int i = 0; i < len; i++) {
        os << arr.array[i] << ", ";
    }
    os << "]";
    return os;
}

int main() {
    Array<float, 6> floatArr;
    floatArr.fill(4.6);
    cout << "floatArr[4] = " << floatArr.at(4) << endl;
    //cout << floatArr << endl;

    Array<string, 7> strArr;
    strArr.fill("abc");
    strArr.at(2) = "123";

    // for (int i = 0; i < 7; i++) {
    //     cout << "strArr[" << i << "] = " << strArr.at(i) << endl;
    // }
    cout << "strArr" << strArr << endl;

    return 0;
}
