#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());  
    sort(nums1.begin(), nums1.end());  

    size_t size = nums1.size();  

    if (size % 2 == 1) {
        return nums1[size / 2];  
    } 
    return (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0; 
}

int main() {
    vector<int> nums1 = {1, 3, 5};
    vector<int> nums2 = {2, 4, 6};

    double median = findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    return 0;
}
