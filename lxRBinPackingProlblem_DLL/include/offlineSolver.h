#ifndef OFFLINESOLVERHWB_H
#define OFFLINESOLVERHWB_H

#include "IOfflineSolver.h"

class DLL_API offlineSolver :public IOfflineSolver
{
public:
	// 设置来料信息
	void setParam(const PackParam& m_PackParam) override;

	//添加已码垛单元
	void addPackUnit(const PackUnit& m_unit) override;

	// 加载现有垛型
	void loadCurrentStack(const std::vector<PackUnit>& m_PackUnits) override;

    result BPP_Solver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam) override/* { return false; }*/;

};

#endif // !OFFLINESOLVERHWB_H