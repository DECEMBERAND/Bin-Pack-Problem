#include "Bin.h"

Bin::Bin(PackBin& packbin):length(packbin.binLWH[0]), width(packbin.binLWH[1]), height(packbin.binLWH[2]), 
                           weight(packbin.weight), binBottomCenterPt(packbin.binBottomCenterPt)
{

}
