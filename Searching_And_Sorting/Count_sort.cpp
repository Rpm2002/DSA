/*

Ninja is studying sorting algorithms. He has studied all comparison-based sorting algorithms and now decided to learn sorting algorithms that do not require comparisons.
He was learning counting sort, but he is facing some problems. Can you help Ninja implement the counting sort?
For example:
You are given ‘ARR’ = {-2, 1, 2, -1, 0}. The sorted array will be {-2, -1, 0, 1, 2}.

*/

// ********************************* CODE ************************************

/*

#include <bits/stdc++.h> 
vector<int> sort(int n, vector<int> &arr)
{
    int maxElement = *max_element(arr.begin(), arr.end());
    int minElement = *min_element(arr.begin(), arr.end());
    int range = maxElement - minElement + 1;

    vector<int> count(range), output(arr.size());

    for (int i = 0; i < arr.size(); i++)
        count[arr[i] - minElement]++;

    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--) 
    {
        output[count[arr[i] - minElement] - 1] = arr[i];
        count[arr[i] - minElement]--;
    }

    return output;

    // Youtube : https://youtu.be/imqr13aIBAY?feature=shared
    // Youtube : https://youtu.be/IeFE9lDLmRw?feature=shared

    //    *************************** Approach *************************
    
    // Find the range of the input array:

    // To handle negative numbers, we first find the minimum and maximum elements in the array. We calculate the range of elements as range = maxElement - minElement + 1, where maxElement is the maximum element in the array and minElement is the minimum element.
    // Count the occurrences of each element:

    // We create a count array of size equal to the range calculated above. This count array will store the count of each element in the input array. We shift the indices of the count array by minElement to make sure all elements in the input array are within the range of the count array.
    // We iterate through the input array and increment the count of each element at its corresponding index in the count array.
    // Modify the count array:

    // We modify the count array such that each element at index i now contains the number of elements less than or equal to i in the input array. This step helps in determining the correct position of each element in the output array.
    // Build the sorted array:

    // We iterate through the input array in reverse order. For each element arr[i], we find its correct position in the output array using the count array and place it there. We decrement the count of arr[i] in the count array to handle duplicate elements correctly.
    // Update the input array with the sorted elements:

    // After sorting, we update the input array with the elements of the output array, which now contains the sorted elements.
    // Output the sorted array:

    // Finally, we output the sorted array.
    
}

*/