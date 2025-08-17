#include <iostream>
#include <string>

using namespace std;

int main() {
    int a[3] = {1,2,3};
    // 内存不安全的代码
    printf("%d\n", a[10]);
    printf("%d\n", a[0]);

    cout << "Hello World\n";
    cout << "Input: ";
    string data;
    getline(cin, data);
    cout << "Output: " << data << "\n\n";

    return 0;
}