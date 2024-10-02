    #include<iostream>
    #include<vector>
    using namespace std;    
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=1;i<nums.size();i++){
            if(nums[0]==nums[i])
            {
                return {0,i};
            }
        }
        for(int i=1;i<=nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j--)
            {
                if(nums[i]+nums[j]==target)
                    return {i,j};
            }
        }
        return {};
    }
    
    int main(){
        vector<int> num,outp;
        int target;
        int size;
        cout<<"size";
        cin>>size;
        while(size!=0)
        {
            int x;
            cin>>x;
            num.emplace_back(x);
            size--;
        }
        cout<<"target";
        cin>>target;

        outp = twoSum(num,target);
        cout<<outp[0]<<outp[1];

    }