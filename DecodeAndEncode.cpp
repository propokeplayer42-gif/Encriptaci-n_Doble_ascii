#include <iostream>
#include <vector>
#include <string> // for encoding
#include <limits>   // for numeric_limits
using namespace std;

int main() {
	
    int option;

    do { // dowhile to loop the program until 3 is entered

        do { // dowhile for error handling
            cout << "Do you wish to encode or decode? Type 1 for decode, 2 for encode, 3 to exit: " << endl;
            cin >> option;

            if (option != 1 && option != 2 && option != 3) {
                cout << "Invalid input, try again." << endl << endl;
            }
        } while (option != 1 && option != 2 && option != 3);


        cin.ignore();     // makes getline from option 2 work by clearing leftover enter characters

        if (option == 1) { // decode
            vector<int> code;
            int num;

            cout << "Enter the encoded numbers in ASCII x2. Type -1 to finish. Enter the first number: ";
        
            while (true) { 
                cin >> num;
                cout << "Enter the next number: ";
                if (num == -1)
                    break;
                code.push_back(num);
            }

            cout << endl << "Decoded phrase: " << endl; 
            for (int i = 0; i < code.size(); i++) {
                cout << char(code[i] / 2);
            }
            cout << endl;
        }
        else if (option == 2) { // encoding
            string text;
            cout << "Enter the phrase to encode: ";
            getline(cin, text); 

            vector<int> encoded(text.size());

            for (int i = 0; i < (int)text.size(); i++) {
                encoded[i] = int(text[i]) * 2;
            }

            cout << endl << "Encoded sequence (ASCII x2):" << endl;
            for (int i = 0; i < (int)encoded.size(); i++) {
                cout << encoded[i] << " ";
                
            }
            cout << endl;
        }
		cout << endl;
    } while (option != 3); // exit when 3 is typed

}
