 #include <iostream>
 #include <vector>
 using namespace std;
 
 int searchInsertK(vector<int>Arr, int N, int k)
    {
        //Using Linear Search,
        // for(int i=0; i<nums.size(); i++)
        // {
        //     if(nums[i] == target)
        //     {
        //         return i;
        //     }
        //     else if(nums[i] > target){
        //           return i;
        //     }
        // }
        // return nums.size();

        //Using Binary Search,

        int start = 0, end = N - 1, mid, ans = N; //ans = Arr.size(), mid;

        while(start <= end){
            mid = start + (end - start) / 2.0;

          if(Arr[mid] == k){
            //ans = mid;
            return mid;
            //break;
        }
        else if(Arr[mid] < k){
            start = mid + 1;
        }
        else{
            ans = mid;
            end = mid - 1;
        }
    }
     return ans;   
    
    }

int main()
{
    vector<int> Arr(100); // Assuming maximum size of 100
    int k, N;

    cout << "Enter the size of the array: " << endl;
    cin >> N;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    cout << "Enter the target value: " << endl;
    cin >> k;

    cout << searchInsertK(Arr, N, k) << endl;

    return 0;
}
