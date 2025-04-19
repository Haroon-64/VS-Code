#include <iostream>
#include <cmath>
#include <random>

// Function to calculate (base^exp) % mod using fast exponentiation
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) // If exp is odd, multiply base with result
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Extended Euclidean Algorithm to find modular inverse
long long modInverse(long long e, long long phi) {
    long long a = e, b = phi, x0 = 1, x1 = 0;
    while (b) {
        long long q = a / b;
        std::swap(a, b);
        b %= a;
        std::swap(x0, x1);
        x1 -= q * x0;
    }
    return (x0 + phi) % phi;
}

// RSA Key Generation
void generateRSAKeys(long long &n, long long &e, long long &d) {
    long long p = 61, q = 53;  // Small prime numbers (use larger ones in real applications)
    n = p * q;
    long long phi = (p - 1) * (q - 1);
    e = 65537;  // Common public exponent
    d = modInverse(e, phi);
}

// RSA Encryption
long long encryptRSA(long long message, long long e, long long n) {
    return modExp(message, e, n);
}

// RSA Decryption
long long decryptRSA(long long ciphertext, long long d, long long n) {
    return modExp(ciphertext, d, n);
}

// Diffie-Hellman Key Exchange
void diffieHellman() {
    long long p = 23, g = 5;  // Public prime and generator
    long long a = 6, b = 15;  // Secret keys (should be random)

    // Compute public keys
    long long A = modExp(g, a, p);
    long long B = modExp(g, b, p);

    // Compute shared secret
    long long secretA = modExp(B, a, p);
    long long secretB = modExp(A, b, p);

    std::cout << "Diffie-Hellman:\n";
    std::cout << "Shared Secret (Alice): " << secretA << "\n";
    std::cout << "Shared Secret (Bob): " << secretB << "\n";
}

// Main function to test RSA & Diffie-Hellman
int main() {
    // RSA
    long long n, e, d;
    generateRSAKeys(n, e, d);

    long long message = 42;
    long long encrypted = encryptRSA(message, e, n);
    long long decrypted = decryptRSA(encrypted, d, n);

    std::cout << "RSA:\n";
    std::cout << "Original Message: " << message << "\n";
    std::cout << "Encrypted: " << encrypted << "\n";
    std::cout << "Decrypted: " << decrypted << "\n\n";

    // Diffie-Hellman
    diffieHellman();

    return 0;
}
