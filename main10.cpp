#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a{1, 0, 0, 1, 0, 1, 1, 1, 0, 0};
    int start = 0;
    int end = a.size() - 1;
  int i=0;

    while(i!=end) {
        if (a[i] == 0) {
            swap(a[start], a[i]);
            start++;
          i++;
        }
        else {
            swap(a[end], a[i]);
            end--;
          i++;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}
