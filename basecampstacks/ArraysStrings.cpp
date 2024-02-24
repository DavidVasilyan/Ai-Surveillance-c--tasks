#include <iostream>

int maximum(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int average(int arr[], int size) {
    int avg_num = 0;
    for(int i  = 0; i < size; i++) {
        avg_num += arr[i];
    }
    avg_num /= size;
    int tmp_min = 0;
    int tmp = 0;
    for(int i = 0; i < size; i++) {
        tmp_min = (arr[0] > avg_num) ? arr[0] - avg_num : avg_num - arr[0]; 
        if(tmp_min > arr[i] - avg_num) {
            tmp_min = arr[i] - avg_num;
            tmp = arr[i];
        }
    }
    return tmp;
}

int minimum(int arr[], int size) {
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int numbers[] = {1, 2, 3, 10, 50, 60, 100, 90, 30};
    int size = sizeof(numbers) / sizeof(int);

    int max = maximum(numbers, size);
    int avg = average(numbers, size);
    int min = minimum(numbers, size);

    std::cout << "Maximum = " << max << std::endl;
    std::cout << "Average = " << avg << std::endl;
    std::cout << "Minimum = " << min << std::endl;
}