#include <iostream>

// Binary search
// Works on a sorted array. Compares the target to the centre of the array. 
// If they are not equal, the half in which the target cannot lie is eliminated, and the search continues on the remaining half.
// If the search ends with the remaining half being empty, the target is not in the array.

// Psuedo-code:
// Check array is not empty
// Check if target is equal to centre of the array.
// If not equal, check if it is higher or lower.
// If it's lower, take the lower half of the array and run again.
// Otherwise, take the higher half of the array and run again.

// Assuming the sorted array goes a1 < a2 < a3 < ... < an

int binarySearch(int arr[], int target) 
{
    int i = 0;
    int arrSize = sizeof(arr);
    int arrMiddle;

    while (i <= arrSize)
    {
        arrMiddle = (i + arrSize) / 2;
       if (arr[arrMiddle] < target) {
            // Get the second half of the array
            i = arrMiddle + 1;
        } else if (arr[arrMiddle] > target) {
            // Get the first half of the array
            arrSize = arrMiddle - 1;
        } else {
            // Found the target.
            return arrMiddle;
        }
    }
    // The target is not in the array.
    std::cout << "Target not in array.\n";
    return 0;
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << "Binary index: " << binarySearch(arr, 8) << '\n';

    return 0;
}
