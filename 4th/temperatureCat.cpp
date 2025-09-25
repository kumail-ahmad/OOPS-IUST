#include <iostream>
using namespace std;

int main() {
    int t, hot = 0, pleasant = 0, cold = 0;

    while(cin >> t) {
        if(t >= 85) { cout << "Hot\n"; hot++; }
        else if(t >= 60) { cout << "Pleasant\n"; pleasant++; }
        else { cout << "Cold\n"; cold++; }
    }

    cout << hot << " " << pleasant << " " << cold;
    return 0;
}
