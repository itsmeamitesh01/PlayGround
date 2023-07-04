//
// Created by Lenovo on 21-06-2023.
//
#include<bits/stdc++.h>
using namespace std;

long long bs(vector<int>& nums, vector<int>&cost, int mid){
    long long cst = 0;
    for(int i = 0; i < nums.size(); i++){
        cst += abs(nums[i]-mid)*cost[i];
    }
    return cst;
}

int main(){
    ios_base :: sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
    int n; cin >> n;
    vector<int> nums(n),cost(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }
    long long i = *min_element(nums.begin(),nums.end());
    long long j = *max_element(nums.begin(),nums.end());;
    long long ind = 0;
    while(i <= j)
    {
        long long mid = i+(j-i)/2;
        if (bs(nums, cost, mid) < bs(nums, cost, mid + 1)) {
            ind = mid, j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }
    long long sol =  bs(nums,cost,ind);
    cout << sol << endl;
}