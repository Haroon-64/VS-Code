#include <iostream>
#include <list>
#include <vector>
#include <cstdlib> // for rand()

using namespace std;

// Define a type for the hash table (a vector of lists of integers)
using HashTable = vector<list<int>>;

// Function to create and initialize a hash table with a given number of buckets
HashTable createHashTable(int buckets) {
    return HashTable(buckets);
}

// Function to insert an element into the hash table
void insert(HashTable& table, int d) {
    // Simple hash function is just modulo number of buckets
    int bucket = d % table.size();
    
    // Insert into the hash table bucket
    table[bucket].push_back(d);
}

// Function to print the state of the hash table
void print(const HashTable& table) {
    for (size_t i = 0; i < table.size(); i++) {
        cout << "| Bucket " << i << " | ";
        for (const auto& j : table[i]) {
            cout << "-> | " << j << " | ";
        }
        cout << endl;
    }
}

int main() {
    // Create a hash table with 8 buckets
    HashTable ht = createHashTable(8);

    // Set the random number seed
    srand(2);

    // Insert 20 random integers
    for (int i = 0; i < 20; i++) {
        insert(ht, rand() % 100);
    }

    // Print the state of the hash table
    print(ht);

    return 0;
}