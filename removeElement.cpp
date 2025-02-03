    #include<iostream>
    #include<vector>
    #include<math.h>
    using namespace std;
    

int removeElement(vector<int>& nums, int val) {
    int index = 0;

    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[index] = nums[i];
            index++;
        }
    }

    nums.resize(index);  // Resize only once after iteration

    // Print the modified vector
    for (const int& value : nums) {
        cout << value << " ";
    }
    cout << endl;

    return index;  // Return the new size of the array
}
    int main(){
        vector<int>nums = {2,3,2,5,9,8};
        removeElement(nums,2);
        return 0;
    }
