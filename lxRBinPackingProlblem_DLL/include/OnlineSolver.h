#ifndef ONLINESOLVERHWB_H
#define ONLINESOLVERHWB_H

#include "IOnlineSolver.h"

class DLL_API onlineSolver :public IOnlineSolver
{
public:
	onlineSolver() = delete;
	onlineSolver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam);
	~onlineSolver();

	// ����������Ϣ
	void setParam(const PackParam& m_PackParam) override;

	//�������ⵥԪ
	void addPackUnit(const PackUnit& m_unit) override;

	// �������ж���
	void loadCurrentStack(const std::vector<PackUnit>& m_PackUnits) override;

	Result BPP_Solver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam) override;


};

#endif // !ONLINESOLVERHWB_H
