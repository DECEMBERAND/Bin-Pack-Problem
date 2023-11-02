/**
  ******************************************************************************
  * @file       typedef.h
  * @author     LinxZWQ
  * @version    V1.0.0
  * @date       2023-10-17
  * @brief      结构体定义
  * @details


  * @copyright  Copyright (c) 2017-2025 杭州灵西机器人智能科技有限公司
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
*/

#ifndef TYPEDEF_H
#define TYPEDEF_H

#include <string>
#include <Eigen/Eigen>

typedef Eigen::Matrix<double, 4, 1> Vector4d;
enum ApplicationType
{
    EM_CONTAINER, //四周有墙壁
    EM_BIN        // 四周空
};

/**
* @brief    码垛物料定义, 用于描述码垛的来料信息
* @details  默认矩形
*/
struct Unit
{
    int id;
    std::string name;
    Eigen::Vector3d skuLWH;
    double weight;
};
struct PackUnit
{
    Unit Unit;
    Eigen::Vector3d Position; //码放的位置
    bool Rotation;// 是否旋转
};



/**
* @brief    码垛空间定义, 用于描述码垛托盘空间
* @details  默认矩形,
            size xyz 分别对应 长宽高 L W H,
            center为底面中心, 坐标系x y z轴与 size x y z同轴
*/
struct PackBin
{
    int id;
    std::string name;
    Eigen::Vector3d binLWH;
    Eigen::Vector3d binBottomCenterPt;
    double weight;
};

/**
* @brief    码垛需要用到的参数
* @details  
            size xyz 分别对应 长宽高 L W H,
            center为底面中心, 坐标系x y z轴与 size x y z同轴
*/

struct PackParam
{
    Vector4d margin_distance_mm; // 容器周边余量距离
    int sku_distance_mm; // 物料间距
    ApplicationType applicationtype; // 码垛策略
};


struct result
{
    bool success; // 是否成功
    PackUnit packUnit;
};


#endif // !TYPEDEF_H

