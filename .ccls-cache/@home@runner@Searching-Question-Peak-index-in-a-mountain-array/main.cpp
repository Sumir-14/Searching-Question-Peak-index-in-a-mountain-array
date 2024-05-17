#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// findpeakelement() function takes an integer vector and returns the index of the peak element
int findpeakelement(vector<int> arr)
{
  //Initialize start and end indices
  int s = 0;
  int e = arr.size() - 1;

  // Loop until start and end indices meet
  while (s < e) {
    // Calculate the middle index
    int mid = s + (e - s) / 2;

    // If the middle element is smaller than the next element, peak is on the right side
    if (arr[mid] < arr[mid + 1]) {
      s = mid + 1;
    } else {
      // Otherwise, peak is on the left side
      e = mid;
    }
  }

  // Return the start index as it holds the peak element
  return s;
}

// Main function
int main() {
  // Sample mountain array
  vector<int> arr = {0, 10, 3, 2};

  // Calling findpeakelement() to find the peak element index
  int peak_element_index = findpeakelement(arr);

  // Print the peak element and its index
  cout << "Peak element is " << arr[peak_element_index] << endl;
  cout << "Index of peak element is " << peak_element_index;

  return 0;
}