#include <iostream>
#include <string>

using namespace std;

// Caesar Cipher
string caesarCipher(const string& text, int shift, bool decrypt = false) {
    string result = "";
    if (decrypt) shift = -shift;  // Reverse shift for decryption

    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base + shift + 26) % 26 + base; // Ensure wraparound
        } else {
            result += c;  // Keep non-alphabet characters unchanged
        }
    }
    return result;
}

// Vigenère Cipher
string vigenereCipher(const string& text, const string& key, bool decrypt = false) {
    string result = "";
    int keyLen = key.length();

    for (size_t i = 0; i < text.length(); ++i) {
        char c = text[i];

       
        char base = isupper(c) ? 'A' : 'a';
        int shift = tolower(key[i % keyLen]) - 'a';
        if (decrypt) shift = -shift;  // Reverse shift for decryption

        result += (c - base + shift + 26) % 26 + base;
    }
    return result;
}

// Main function to test the ciphers
int main() {
    string text = "HELLO WORLD";
    int shift = 3;
    string key = "KEY";

    // Caesar Cipher
    string encryptedCaesar = caesarCipher(text, shift);
    string decryptedCaesar = caesarCipher(encryptedCaesar, shift, true);
    
    cout << "Caesar Cipher:" << endl;
    cout << "Encrypted: " << encryptedCaesar << endl;
    cout << "Decrypted: " << decryptedCaesar << endl << endl;

    // Vigenère Cipher
    string encryptedVigenere = vigenereCipher(text, key);
    string decryptedVigenere = vigenereCipher(encryptedVigenere, key, true);

    cout << "Vigenere Cipher:" << endl;
    cout << "Encrypted: " << encryptedVigenere << endl;
    cout << "Decrypted: " << decryptedVigenere << endl;

    return 0;
}
