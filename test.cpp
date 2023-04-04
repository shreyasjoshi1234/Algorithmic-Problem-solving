lass Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int , int> map1;
        map<int  , int > map2;
        for(int i = 0  ; i < nums1.size() ; i++)
        {
            map1[nums1[i]]++;
        }
        for(int i = 0  ; i < nums2.size() ; i++)
        {
            map2[nums2[i]]++;
        }
        for(auto &it : map1)
        {
            if(map2.find(it.first) != map2.end())
            {
                return it.first;
            }
        }
        int max1 = *min_element(nums1.begin() , nums1.end());
        int max2 = *min_element(nums2.begin() , nums2.end());
        if(max1 < max2)
            return max1 * 10 + max2;
        return max2 * 10 + max1;
    }
};