#include <bits/stdc++.h>
using namespace std;
void Ssort(vector<int>& nums){
    for(int i=0;i<nums.size()-1;i++){
        int minIndex=i;
        for(int j=i+1;j<nums.size()-1;j++){
            if(nums[j]<nums[minIndex]){
                minIndex=j;
            }
        }
        swap(nums[minIndex],nums[i]);
    }
}
void Bsort(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        int j=0;
        bool swapped=false;
        while(j!=nums.size()-i-1){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped=true;
            }
            j++;
        }
        if(swapped==false){
            break;
        }
    }
}
int main(){
    vector<int>v={1,2,4,3,6,5,4,6};
    Bsort(v);
    for(auto &i:v){
        cout<<i;
    }
}