#include <bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int cnt = 0;

    while(n!=0){
        int ld = n%10;
        cnt++;
        n=n/10;
    }
    return cnt;
}
int main()
{

    for (int i = 1; i <= 500; i++)
    {
        int sum = 0;
        int dup = i; //dup = 370

        int cnt = countDigit(dup);

        while (dup > 0)
        {
            int ld = dup % 10; // 1
            sum = sum + (pow(ld,cnt));
            dup = dup / 10;
        }
        if(sum==i){
          cout << "Amstrong number "<< i <<" "<< sum << endl;
        }
    }
}