#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());  // Merge both vectors
    sort(nums1.begin(), nums1.end());  // Sort the merged vector

    size_t size = nums1.size();  // Use size_t instead of int

    if (size % 2 == 1) {
        return nums1[size / 2];  // No warning: size_t is used
    } 
    return (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;  // Ensure floating-point division
}

int main() {
    vector<int> nums1 = {1, 3, 5};
    vector<int> nums2 = {2, 4, 6};

    double median = findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    return 0;
}
