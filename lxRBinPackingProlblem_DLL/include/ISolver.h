/**
  ******************************************************************************
  * @file       ISolver.h
  * @author     LinxZWQ
  * @version    V1.0.0
  * @date       2023-10-17
  * @brief      �����㷨�ӿ���
  * @details    


  * @copyright  Copyright (c) 2017-2025 �����������������ܿƼ����޹�˾
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
*/
#ifndef ISOLVER_H
#define ISOLVER_H

#ifdef _DLL_EXPORTS
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif

#include "typedef.h"

class DLL_API ISolver
{
public:
	    // ����������Ϣ
	    virtual void setParam(const PackParam& m_PackParam) = 0;

		//�������ⵥԪ
		virtual void addPackUnit(const PackUnit& m_unit) = 0;

	    // �������ж���
	    virtual void loadCurrentStack(const std::vector<PackUnit>& m_PackUnits) = 0;

	    // �����
	    virtual Result BPP_Solver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam) = 0;

		// ��ȡ��������״̬
		bool getRunningState() { return mbStop; }

protected:
	bool mbStop; //ֹͣ�㷨��־λ
	PackParam msPackParam;   // �����Ҫ�õ��Ĳ���
	PackBin msPackBin;  // ������̽ṹ��
	Unit msUnit; // ������Ϣ�ṹ��
	std::vector<Unit> skuList;
	std::vector<PackUnit> packedList;
};

#endif // !ISOLVER_H

