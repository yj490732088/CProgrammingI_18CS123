#include<iostream>
#include<cmath>

using namespace std;

void Input(int a[], int n) {
    for (int i = 0; i < n; i++)cin >> a[i];
}

void Output(int *a, int n) {
    for (int i = 0; i < n; i++)cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[10] = {0};
    Input(a, 10);
    Output(a, 10);
    int b[20];
    Input(b, 20);
    int c[5];
    Input(c, 5);
    return 0;
}
