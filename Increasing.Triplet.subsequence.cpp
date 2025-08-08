#include<iostream> 
#include<vector> 
#include<climits>

using namespace std; 

class Solution{
public: 
    bool increasingTriplet(vector<int>& nums) {
      int n = nums.size(); 
      int first = INT_MAX; 
      int second = INT_MAX;
      for(int num:nums){
        if(num<first) first = num; 
        else if(num <second) second = num; 
        else return true; 
      }
      return false; 
    }
};
int main(){
  vector<int> nums = {2,1,5,0,4,6};
  Solution sol; 
  cout << boolalpha << sol.increasingTriplet(nums) <<endl; 
  return 0; 
}
