 #include<bits/stdc++.h>
using namespace std;
void subAra(vector<int> &nums){
     int ts=0;
      int cmn=0;
     int cmx=0;
     int mn=INT_MAX;
     int mx=INT_MIN;

    for(int i=0;i<nums.size();i++){
           ts+=nums[i];
           cmn=min(cmn+nums[i],nums[i]);
           cmx=max(cmx+nums[i],nums[i]);
           mn = min(mn, cmn);
           mx = max(mx, cmx);

    }
    if(ts==mn){
        mn=0;
    }
    cout<<max(mx,ts-mn)<<'\n';
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<nums.size();i++){
         cin>>nums[i];
    }
    subAra(nums);

    return 0;
}

 /*#include <bits/stdc++.h>
using namespace std;

void subAra(vector<int> &nums) {
    int totalSum = 0;    // Total sum of the array
    int currentMin = 0;  // Current minimum subarray sum
    int currentMax = 0;  // Current maximum subarray sum
    int minSum = INT_MAX; // Minimum subarray sum
    int maxSum = INT_MIN; // Maximum subarray sum

    for (int i = 0; i < nums.size(); i++) {
        totalSum += nums[i]; // Calculate the total sum of the array

        // Update current min and max subarray sums
        currentMin = min(currentMin + nums[i], nums[i]);
        currentMax = max(currentMax + nums[i], nums[i]);

        // Update global min and max subarray sums
        minSum = min(minSum, currentMin);
        maxSum = max(maxSum, currentMax);
    }

    // Special case: if the entire array sum equals the minimum sum
    if (totalSum == minSum) {
        minSum = 0; // Circular subarray can't exclude all elements
    }

    // Result is the maximum of the normal max sum or circular subarray sum
    cout << max(maxSum, totalSum - minSum) << '\n';
}

int main() {
    int n; // Size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }

    subAra(nums); // Call the function to compute the result

    return 0;
}*/
