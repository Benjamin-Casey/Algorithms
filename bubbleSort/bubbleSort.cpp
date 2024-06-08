#include <iostream>

// Bubble sort:
// Starting from the beginning of the list compare every adjacent pair.
// Swap their position if they are not in the right order (the latter one is smaller than the former one). 
// After each iteration, one less element (the last one) is needed to be compared until there are no more elements left to be compared.

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << " " << arr[i];

    std::cout << '\n';
}

void bubble_sort(int arr[], int size)
{
    for (int i = 1; i < size - 1; i++) {
        for (int j = 0; j < size - i; j++)
        {
             // Compare two elements
            if (arr[j] < arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
            }
            print_array(arr, size);
        }
    }
}

int main() 
{
    int arr[] = {1, 5, 3, 4, 7, 2};
    int array_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Sorting array: ";
    print_array(arr, array_size);

    bubble_sort(arr, array_size);

    std::cout << "After sorting: ";
    print_array(arr, array_size);

    return 0;
}
