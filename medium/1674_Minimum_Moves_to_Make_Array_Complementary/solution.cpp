#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int end = nums.size() - 1;
        vector<int> solution(2 * limit + 1, nums.size());

        for(int beginning = 0; beginning < nums.size() / 2; beginning++)
        {
            int menor = nums[beginning];
            int mayor = nums[end];

            if(mayor < menor)
            {
                int temp = mayor;
                mayor = menor;
                menor = temp;
            }

            int exact = menor + mayor;

            solution[exact] -= 2;

            for(int j = menor + 1; j <= mayor + limit; j++)
            {
                if(j != exact)
                {
                    solution[j] -= 1;
                }
            }

            end--;
        }

        int answer = nums.size();

        for(int j = 2; j < solution.size(); j++)
        {
            if(solution[j] < answer)
            {
                answer = solution[j];
            }
        }

        return answer;
    }
};
