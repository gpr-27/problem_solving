// https://leetcode.com/problems/contains-duplicate/description/

#include<bits/stdc++.h>
using namespace std;
// approach 1 - brute force using sort ( T O(nlogn) )

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i=0;i<nums.size()-1;i++) {
            if (nums[i]==nums[i+1]) {
                return true;
            }
        }
        return false;
    }
};

// explanation:
// where we find the dulicates by sorting it and the using for loop



// approach 2 - using map (T O(nlogn), using extra space)

// class Solution {
// public:
//     bool containsDuplicate(std::vector<int>& nums) {
//         std::map<int, int> frequencymap;
//         for (int i = 0; i < nums.size(); i++) {
//             if (frequencymap.find(nums[i]) != frequencymap.end()) {
//                 return true;
//             } else {
//                 frequencymap[nums[i]] = 1;
//             }
//         }
//         return false;
//     }
// };

// explanation:
// where we use map like key value vair and if it aleredy there in map then it returns true


// approach 3 - using unordered map (T O(n), using extra space)

// class Solution {
// public:
//     bool containsDuplicate(std::vector<int>& nums) {
//         std::unordered_map<int, int> frequencymap;
        
//         // Build frequency map
//         for (int num : nums) {
//             frequencymap[num]++; // Increment count for the current number
//         }
        
//         // Check for any value > 1
//         for (auto& entry : frequencymap) {
//             if (entry.second > 1) {
//                 return true;
//             }
//         }
        
//         return false;
//     }
// };

// explanation:
// where we use map like key value vair and build a frequency map and if greater that 1 then it returns true


// approach 4 - using set (T O(nlogn), using extra space)

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         set<int> s;
//         for(int i: nums)
//         {
//             s.insert(i);
//         }
//         return s.size()!=nums.size();
//     }
// };

// explanation:
// where we pass all in set and compare the size of set with vector nums


// approach 5 - using unordered set (T O(n), using extra space)

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> s;
//         for (int i : nums) {
//             // If the element is already in the set, it's a duplicate
//             if (s.find(i) != s.end()) {
//                 return true;
//             }
//             s.insert(i); // Add the element to the set
//         }
//         return false; // No duplicates found
//     }
// };

// explanation:
// where we pass all in set and chech parallely if it is already in the set


// approach 6 - using hash table (T O(n), using extra space)

// struct hash_entry {
//     int val;
//     bool is_set;
// };

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         const int sz = nums.size();
//         vector<hash_entry> hash_table(sz);
//         for (auto n : nums) {
//             int key = (n % sz + sz + 123154865) % sz;
//             while (hash_table[key].is_set) {
//                 if (hash_table[key].val == n) return true;
//                 else key = (key + 1) % sz;
//             }
//             hash_table[key] = {n, true};
//         }

//         return false;
//     }
// }; 

// explanation:






