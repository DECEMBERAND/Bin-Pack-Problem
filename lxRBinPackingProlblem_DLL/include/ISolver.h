/**
  ******************************************************************************
  * @file       ISolver.h
  * @author     LinxZWQ
  * @version    V1.0.0
  * @date       2023-10-17
  * @brief      混码算法接口类
  * @details    


  * @copyright  Copyright (c) 2017-2025 杭州灵西机器人智能科技有限公司
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
	    // 设置来料信息
	    virtual void setParam(const PackParam& m_PackParam) = 0;

		//添加已码垛单元
		virtual void addPackUnit(const PackUnit& m_unit) = 0;

	    // 加载现有垛型
	    virtual void loadCurrentStack(const std::vector<PackUnit>& m_PackUnits) = 0;

	    // 求解器
	    virtual Result BPP_Solver(const PackBin& m_bin, const Unit& m_item, const PackParam& m_packparam) = 0;

		// 获取程序运行状态
		bool getRunningState() { return mbStop; }

protected:
	bool mbStop; //停止算法标志位
	PackParam msPackParam;   // 码垛需要用到的参数
	PackBin msPackBin;  // 码垛托盘结构体
	Unit msUnit; // 物料信息结构体
	std::vector<Unit> skuList;
	std::vector<PackUnit> packedList;
};

#endif // !ISOLVER_H

