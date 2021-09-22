// Nathan Farrar
// 9/16/2021
// CSE 278 A

#include <iostream>
using namespace std;

void minMax(int * a, int * r) {
    for(int i = 1; i < 20; i++) {
        if (a[i-1] > a[i] && a[i+1] > a[i]) {
            r[i - 1] = i + 1;
        } else if (a[i-1] < a[i] && a[i+1] < a[i]) {
            r[i - 1] = i + 1;
        }
    } 
}

int main()
{
    int arr[20] = {12, 11, 122, 112, 222, 222, 222, 221, 76, 36, 31, 234, 256, 76, 73};
    int * a = arr;

    int result[18] = {};
    int * r = result;

    minMax(a, r);

    cout << "Indices of local minima and maxima: ";
    for(int i = 0; i < 18; i++) {
        if(result[i] != 0) {
            cout << result[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
