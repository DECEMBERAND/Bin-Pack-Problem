#include "OnlineSolver.h"
#include <iostream>

onlineSolver::onlineSolver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam)
{
	mbStop = false;
	msPackBin = m_bin;
	msUnit = m_item;
	msPackParam = m_packparam;
}

onlineSolver::~onlineSolver()
{
	mbStop = true;

}

void onlineSolver::setParam(const PackParam& m_PackParam)
{
	msPackParam = m_PackParam;
}

void onlineSolver::addPackUnit(const PackUnit& m_unit)
{

}

void onlineSolver::loadCurrentStack(const std::vector<PackUnit>& m_PackUnits)
{

}

Result onlineSolver::BPP_Solver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam)
{
	Result result;
	std::cout << "start online algorithm" << std::endl;
	return result;
}
