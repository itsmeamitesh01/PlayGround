#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " -> " << destination << endl;
        return;
    }

    // Step 1
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2
    cout << "Move disk " << n << " from " << source << " -> " << destination << endl;

    // Step 3
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
