#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 7 == 0 || to_string(i).find('7') != string::npos) {
            continue;  // 跳过
        }
        cout << i << endl;
    }
    return 0;
}
