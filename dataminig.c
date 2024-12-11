#include <stdio.h>

#define PRODUCTS 3  
#define QUARTERS 4  
#define COUNTRIES 3 

void displayDataCube(int sales[PRODUCTS][QUARTERS][COUNTRIES]) {
    printf("\nData Cube:\n");
    for (int p = 0; p < PRODUCTS; p++) {
        for (int q = 0; q < QUARTERS; q++) {
            for (int c = 0; c < COUNTRIES; c++) {
                printf("Product %d, Quarter %d, Country %d: %d\n", p + 1, q + 1, c + 1, sales[p][q][c]);
            }
        }
    }
}

int main() {
    int sales[PRODUCTS][QUARTERS][COUNTRIES];
    int productSum[PRODUCTS] = {0};
    int quarterSum[QUARTERS] = {0};
    int countrySum[COUNTRIES] = {0};
    int totalSum = 0;

    
    printf("Enter sales data for each product, quarter, and country:\n");
    for (int p = 0; p < PRODUCTS; p++) {
        for (int q = 0; q < QUARTERS; q++) {
            for (int c = 0; c < COUNTRIES; c++) {
                printf("Enter sales for Product %d, Quarter %d, Country %d: ", p + 1, q + 1, c + 1);
                scanf("%d", &sales[p][q][c]);
            }
        }
    }

    
    for (int p = 0; p < PRODUCTS; p++) {
        for (int q = 0; q < QUARTERS; q++) {
            for (int c = 0; c < COUNTRIES; c++) {
                int value = sales[p][q][c];
                productSum[p] += value;
                quarterSum[q] += value;
                countrySum[c] += value;
                totalSum += value;
            }
        }
    }

    
    displayDataCube(sales);

    
    printf("\nProduct Sums:\n");
    for (int p = 0; p < PRODUCTS; p++) {
        printf("Product %d: %d\n", p + 1, productSum[p]);
    }

    printf("\nQuarter Sums:\n");
    for (int q = 0; q < QUARTERS; q++) {
        printf("Quarter %d: %d\n", q + 1, quarterSum[q]);
    }

    printf("\nCountry Sums:\n");
    for (int c = 0; c < COUNTRIES; c++) {
        printf("Country %d: %d\n", c + 1, countrySum[c]);
    }

    printf("\nTotal Sum: %d\n", totalSum);

    return 0;
}