#include <iostream>
using namespace std;

void nhapgiatriN(int n){
    cout << "nhap gia tri cho so nguyen n cua ban : ";
    cin>>n;
}

int main() {
    int N, sum = 0;

    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "Tong cac so tu 1 den " << N << " la: " << sum << endl;

    return 0;
}