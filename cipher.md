```c++
#include <iostream>
#define DIM 43

using namespace std;

string Encryption(int textsize, int *textmat, const int *keymatrix, string alphabetLOW) {
    for (int i = 0; i < textsize; ++i) {
        textmat[i] = (textmat[i] + keymatrix[i]) % DIM;
    }
    string textEncr;
    for (int i = 0; i < textsize; ++i) {
        textEncr += alphabetLOW[textmat[i]];
    }
    return textEncr;
}

string Decryption(int textsize, int *textmatrix, const int *keymat, string alphabetLOW) {
    for (int i = 0; i < textsize; ++i) {
        textmatrix[i] = (textmatrix[i] - keymat[i]) % DIM;
        if (textmatrix[i] < 0) {
            textmatrix[i] += DIM;
        }
    }
    string textDecr;
    for (int i = 0; i < textsize; ++i) {
        textDecr += alphabetLOW[textmatrix[i]];
    }
    return textDecr;
}

int main() {
    cout << "Insert your text to 36th string of code.\n";
    string alphabetHIGH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ .,?!0123456789';";
    string alphabetLOW = "abcdefghijklmnopqrstuvwxyz .,?!0123456789';";

    string text = "This post has been updated, because you still care about the moons.";

    string key = text;
    string temp;
    int textsize = static_cast<int>(text.size());
    int keysize;
    bool check = false;
    cout << "Text length: " << textsize;
    do {
        cout << "\nType a keyword (keyword must contain 1 symbol): ";
        cin >> temp;
        keysize = static_cast<int>(temp.size());
        if (keysize != 1) {
            cout << "Keyword must contain 1 symbol!\n";
        }
        for (int i = 0; i < keysize; ++i) {
            check = false;
            for (int j = 0; j < DIM; ++j) {
                if (temp[i] == alphabetLOW[j]) {
                    check = true;
                    break;
                } else {
                    if (temp[i] == alphabetHIGH[j]) {
                        check = true;
                        break;
                    }
                }
            }
        }
        if (!check) {
            cout << "Keyword must contain only alphabetical symbols!\n";
        }
    } while ((keysize != 1) || !check);
    string temp2 = temp;
    temp2 = key[0];
    key[0] = temp[0];

    for (int k = 1; k < textsize; ++k) {
        key[k] = text[k + 1];
    }

    cout << "Keyword is: " << key;

    int textmatrix[textsize];
    int keymatrix[textsize];
    for (int i = 0; i < textsize; ++i) {
        for (int j = 0; j < DIM; ++j) {
            if (text[i] == alphabetLOW[j]) {
                textmatrix[i] = j;
                break;
            } else {
                if (text[i] == alphabetHIGH[j]) {
                    textmatrix[i] = j;
                    break;
                } else {
                    textmatrix[i] = DIM;
                }
            }
        }
    }
    for (int i = 0; i < textsize; ++i) {
        for (int j = 0; j < DIM; ++j) {
            if (key[i] == alphabetLOW[j]) {
                keymatrix[i] = j;
                break;
            } else {
                if (key[i] == alphabetHIGH[j]) {
                    keymatrix[i] = j;
                    break;
                } else {
                    keymatrix[i] = DIM;
                }
            }
        }
    }
    string encrypted = Encryption(textsize, textmatrix, keymatrix, alphabetLOW);
    cout << "\nEncrypted text: " << encrypted << "\n\n";
    string decrypted = Decryption(textsize, textmatrix, keymatrix, alphabetLOW);
    cout << "Decrypted text: " << decrypted << "\n\n";
    cout << "Original text:  " << text;
    return 0;
}
```