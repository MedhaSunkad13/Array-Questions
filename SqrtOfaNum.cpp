#include <iostream>
using namespace std;

 long long int floorSqrt(long long int x) 
    {
        // int ans = 0; 
        // ans = floor(sqrt(x));
        // return ans;

        if(x==0 || x==1)
        {
            return x;
        }
        int ans, start=1, end = x, mid;

        while(start <= end)
        {
            mid = start + (end - start) / 2;

            if(mid == x/mid){
                ans = mid;
                break;
                // return mid;
            }

            else if(mid < x/mid){
                ans = mid;
                start = mid + 1;
            }

            else
                end = mid - 1;
        }
        return ans;
    }