/*
 * Solution.h
 *
 *  Created on: 2019年4月27日
 *      Author: Zuokp
 */

#ifndef SOLUTION_H_
#define SOLUTION_H_
#include <iostream>
#include <vector>

class Solution
{
public:
	Solution();
	std::vector<int> twoSum(std::vector<int>& nums, int target);
	virtual ~Solution();
};

#endif /* SOLUTION_H_ */
