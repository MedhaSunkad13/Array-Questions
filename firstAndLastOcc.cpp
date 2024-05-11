#include <vector>
#include<iostream>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1, first = -1, last = -1, mid;

    // Find first occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            first = mid;
            end = mid - 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Find last occurrence
    start = 0, end = nums.size() - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            last = mid;
            start = mid + 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    vector<int> result(2);
    result[0] = first;
    result[1] = last;

    return result;
}

int main() {
    int target, n;

    cout << "Enter the target value: "<<endl;
    cin >> target;

    cout << "Enter the size of the array: "<<endl;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = searchRange(nums, target);

    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}