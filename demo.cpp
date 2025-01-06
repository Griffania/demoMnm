#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    cout << "Nhap gia tri N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        sum += i; // Cộng dồn các số từ 1 đến N
    }

    cout << "Tong cac so tu 1 den " << N << " la: " << sum << endl;

    return 0;
}