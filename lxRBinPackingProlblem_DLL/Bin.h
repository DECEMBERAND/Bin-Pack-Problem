#ifndef BIN_H
#define BIN_H

#include "typedef.h"

#ifdef _DLL_EXPORTS
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif


class DLL_API Bin
{
public:
	Bin() = delete;
	Bin(PackBin& packbin);
	~Bin();

private:
	double length;
	double width;
	double height;
	double weight;
	Eigen::Vector3d binBottomCenterPt;
};
#endif // !BIN_H

