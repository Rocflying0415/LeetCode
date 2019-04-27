/*
 * Solution.cpp
 *
 *  Created on: 2019年4月27日
 *      Author: Zuokp
 */

#include "Solution.h"

Solution::Solution()
{

}

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
	std::vector<int> vecRet(2, -1);

	int i, j;
	int size = static_cast<int>(nums.size());
	for (i = 0; i < size; ++i)
	{
		for (j = i + 1; j < size; ++j)
		{
			if (nums[i] + nums[j] == target)
			{
				vecRet[0] = i;
				vecRet[1] = j;
				return vecRet;
			}
		}
	}
	return vecRet;
}

Solution::~Solution()
{

}

