#include <vector>
#include <string>
#include <iostream>

using namespace std

class Solution 
{
public:
    vector<int> separateDigits(vector<int>& nums) 
    {
      vector<int> solutionVector;
      vector<int> temporary;
      for(int num : nums)
      {
        temporary.clear();
        while(num > 0)
        {
          temporary.push_back(num%10);
          num =/ 10;
        }
        for(size_t j = temporary.size(); j > 0; j--)
        {
          solutionVector.push_back(temporary[j-1]);
        }
      }
      return solutionVector;

    }
};
