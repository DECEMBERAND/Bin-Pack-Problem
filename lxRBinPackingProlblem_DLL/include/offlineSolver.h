#ifndef OFFLINESOLVERHWB_H
#define OFFLINESOLVERHWB_H

#include "IOfflineSolver.h"

class DLL_API offlineSolver :public IOfflineSolver
{
public:
	// ����������Ϣ
	void setParam(const PackParam& m_PackParam) override;

	//�������ⵥԪ
	void addPackUnit(const PackUnit& m_unit) override;

	// �������ж���
	void loadCurrentStack(const std::vector<PackUnit>& m_PackUnits) override;

    result BPP_Solver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam) override/* { return false; }*/;

};

#endif // !OFFLINESOLVERHWB_H