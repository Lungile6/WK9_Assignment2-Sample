#include <stdio.h>
#include <string.h>

#define SIZE 20   // Number of names
#define LENGTH 50 // Maximum length of each name

typedef int (*CompareFunc)(const char*, const char*); // Function pointer type for comparison

// Comparison function for ascending order
int ascending(const char *a, const char *b) {
    return strcmp(a, b) > 0;
}

// Comparison function for descending order
int descending(const char *a, const char *b) {
    return strcmp(a, b) < 0;
}

// Bubble sort function that uses a comparison function
void bubbleSort(char arr[][LENGTH], int size, CompareFunc compare) {
    char temp[LENGTH];
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (compare(arr[j], arr[j+1])) {
                // Swap names if out of order
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main() {
    // List of names to sort
    char names[SIZE][LENGTH] = {
        "Themba Mokoena", "Lerato Khumalo", "Sipho Dlamini", "Nokuthula Ncube",
        "Tebogo Masuku", "Kagiso Moeketsi", "Mpho Lebelo", "Zanele Ndlovu",
        "Tshepo Mphahlele", "Boitumelo Tau", "Karabo Mahlangu", "Nomvula Zulu",
        "Thabang Radebe", "Reabetswe Molefe", "Puleng Motaung", "Sibusiso Nyathi",
        "Andile Mthembu", "Keabetswe Mathe", "Banele Hlophe", "Gugu Sithole"
    };

    char order[10];
    // Ask user for sorting order
    printf("Enter sorting order (asc/desc): ");
    scanf("%s", order);

    // Choose comparison function based on user input
    CompareFunc cmp = (strcmp(order, "asc") == 0) ? ascending : descending;
    bubbleSort(names, SIZE, cmp);

    // Print sorted names
    printf("\nSorted Names:\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%s\n", names[i]);
    }

    return 0;
}