/*
 * main.cpp
 *
 *  Created on: 2019年4月27日
 *      Author: Zuokp
 */

#include "Solution.h"

int main(int argc, char *argv[])
{
	int szData[] = {2, 7, 11, 15};

	const int target = 9;
	size_t size = sizeof(szData) / sizeof(szData[0]);
	std::vector<int> vecNum(szData, szData + size);
	std::vector<int> vecRet;

	Solution sn;
	vecRet = sn.twoSum(vecNum, target);

	std::cout << "[" << vecRet[0] << ", " << vecRet[1] << "] " << std::endl;
	return 0;
}

