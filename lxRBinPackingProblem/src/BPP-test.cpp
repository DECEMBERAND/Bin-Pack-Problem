#include "BPP-Test.h"
#include <iostream>

// ���ر�Ҫ����
PackBin Bin; Unit Item;  PackParam Packparam;

void testOfflineSolver(void)
{
	std::shared_ptr<offlineSolver> offlineSolverPtr = std::make_shared<offlineSolver>();
	//std::shared_ptr<onlineSolver> offlineSolverPtr = std::make_shared<onlineSolver>();
	//offlineSolverHWB offline;
	//onlineSolver online;
	offlineSolverPtr->BPP_Solver(Bin, Item, Packparam);
	//std::cout << "1" << std::endl;
}

void testOnlineSolver(void)
{

	
    // �������߻������ָ��
	std::shared_ptr<onlineSolver> onlineSolverPtr = std::make_shared<onlineSolver>(Bin, Item, Packparam);

	std::vector<result> results;
	// �����㷨
	while(!onlineSolverPtr->getRunningState())
	{
	   result result = onlineSolverPtr->BPP_Solver(Bin, Item, Packparam);
	   results.push_back(result);
	}

}
