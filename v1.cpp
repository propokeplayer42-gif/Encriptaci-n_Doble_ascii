#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cout << "How many numbers does the encoded phrase have?: ";
    cin >> n; // to know the size to create the vector and not waste / lack memory
    
    vector<int> code(n); // int type vector for the encoded text of size n
    vector<char> decoded(n); // char type vector for the decoded text of size n
    
    cout << "Enter the " << n << " numbers (ASCII x2): " << endl; // loop that adds entered numbers to the "code" vector
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> code[i];
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) { // loop that decodes numbers to ASCII and divides by two, adding them to the "decoded" vector
        decoded[i] = char(code[i] / 2);
    }
    
    cout << endl << "Decoded phrase: " << endl; // loop that displays the full "decoded" vector (decoded phrase)
    for (int i = 0; i < decoded.size(); i++) {
        cout << decoded[i];
    }    
    cout << endl;
}
