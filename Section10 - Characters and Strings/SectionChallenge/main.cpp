#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Substitution Cipher
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ' !?"};
    string key{"zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA_:%`"};

    string secretMessage;
    cout << "Enter your secret message:";
    getline(cin, secretMessage);

    string encryptedMessage;

    for (char c: secretMessage) {
        size_t idx = alphabet.find(c);
        char newChar = key.at(idx);
        encryptedMessage += newChar;
    }

    cout << endl;
    cout << "Your encrypted message is: " << encryptedMessage;

    string decryptedMessage;
    for (char c: encryptedMessage) {
        size_t idx = key.find(c);
        char newChar = alphabet.at(idx);
        decryptedMessage += newChar;
    }

    cout << endl;
    cout << "Now, the message decrypted: " << decryptedMessage;

    return 0;
}
