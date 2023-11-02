/**
  ******************************************************************************
  * @file       typedef.h
  * @author     LinxZWQ
  * @version    V1.0.0
  * @date       2023-10-17
  * @brief      �ṹ�嶨��
  * @details


  * @copyright  Copyright (c) 2017-2025 �����������������ܿƼ����޹�˾
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
    EM_CONTAINER, //������ǽ��
    EM_BIN        // ���ܿ�
};

/**
* @brief    ������϶���, ������������������Ϣ
* @details  Ĭ�Ͼ���
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
    Eigen::Vector3d Position; //��ŵ�λ��
    bool Rotation;// �Ƿ���ת
};



/**
* @brief    ���ռ䶨��, ��������������̿ռ�
* @details  Ĭ�Ͼ���,
            size xyz �ֱ��Ӧ ����� L W H,
            centerΪ��������, ����ϵx y z���� size x y zͬ��
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
* @brief    �����Ҫ�õ��Ĳ���
* @details  
            size xyz �ֱ��Ӧ ����� L W H,
            centerΪ��������, ����ϵx y z���� size x y zͬ��
*/

struct PackParam
{
    Vector4d margin_distance_mm; // �����ܱ���������
    int sku_distance_mm; // ���ϼ��
    ApplicationType applicationtype; // ������
};


struct result
{
    bool success; // �Ƿ�ɹ�
    PackUnit packUnit;
};


#endif // !TYPEDEF_H

