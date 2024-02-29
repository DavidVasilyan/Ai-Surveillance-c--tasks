#include <iostream>

void bubblesort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void SelectionSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        std::swap(arr[i], arr[minIndex]);

    }
}


int main() {
    int choice;
    int arr[] = {5, 4, 3, 10 ,200, 20, 50};
    int size = sizeof(arr) / sizeof(int);
    std::cout << "Enter 1 for bubble sort, 2 for selection sort" << std::endl;
    do
    {
        std::cin >> choice;
    } while (choice != 1 && choice != 2);
    
    if (choice == 1){
        bubblesort(arr, size);
    }
    else {SelectionSort(arr, size);}

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}