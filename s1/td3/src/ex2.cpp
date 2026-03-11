#include <iostream>
using namespace std;

int main(){

    int num;
    int sum {0};
    int count {0};
    do {
        cin >> num;
        if (num > 0) {
            sum += num;
            count++;
        }
    } while (num > 0);
    cout << "Sum: " << sum << endl;
    if (count > 0) {
        cout << "Mean : " << sum / count << endl;
    } else {
        cout << "Mean : N/A" << endl;
    }

    return 0;
}