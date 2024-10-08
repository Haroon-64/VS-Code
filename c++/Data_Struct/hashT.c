#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Define a structure for the hash table
struct HashTable {
    int buckets;
    struct Node** table;
};

// Function to create and initialize a hash table with a given number of buckets
struct HashTable* createHashTable(int buckets) {
    struct HashTable* table = (struct HashTable*)malloc(sizeof(struct HashTable));
    if (!table) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    table->buckets = buckets;
    table->table = (struct Node**)malloc(buckets * sizeof(struct Node*));
    if (!table->table) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < buckets; i++) {
        table->table[i] = NULL;
    }
    return table;
}

// Function to insert an element into the hash table
void insert(struct HashTable* table, int data) {
    // Simple hash function is just modulo number of buckets
    int bucket = data % table->buckets;
    
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;

    // Insert the node into the hash table bucket
    if (table->table[bucket] == NULL) {
        table->table[bucket] = newNode;
    } else {
        // Insert at the beginning of the linked list (no collision resolution)
        newNode->next = table->table[bucket];
        table->table[bucket] = newNode;
    }
}

// Function to print the state of the hash table
void print(const struct HashTable* table) {
    for (int i = 0; i < table->buckets; i++) {
        printf("| Bucket %d | ", i);
        struct Node* current = table->table[i];
        while (current != NULL) {
            printf("-> | %d | ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

// Function to free the memory used by the hash table
void destroyHashTable(struct HashTable* table) {
    for (int i = 0; i < table->buckets; i++) {
        struct Node* current = table->table[i];
        while (current != NULL) {
            struct Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(table->table);
    free(table);
}

int main() {
    // Create a hash table with 8 buckets
    struct HashTable* ht = createHashTable(8);

    // Seed the random number generator
    srand(time(NULL));

    // Insert 20 random integers
    for (int i = 0; i < 20; i++) {
        int randomValue = rand() % 100;
        insert(ht, randomValue);
    }

    // Print the state of the hash table
    print(ht);

    // Free the memory used by the hash table
    destroyHashTable(ht);

    return 0;
}