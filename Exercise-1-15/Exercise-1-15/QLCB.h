#pragma once
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <iostream>
#include <vector>
#include "CanBo.h"
#include "CongNhan.h"
#include "KySu.h"
#include "NhanVien.h"

using namespace std;

/*******************************************************************************
 * Class Definition
 ******************************************************************************/

class QLCB
{
private:
    vector <CanBo*> listCanBo;
public:
    /*******************************************************************************
     * @brief Phuong thuc them can bo moi vao danh sach can bo
     *
     * @param No parameters
     * @return Not return
     ******************************************************************************/
    void addCanBo();

    /*******************************************************************************
     * @brief Phuong thuc tim kiem mot can bo trong danh sach theo ten
     *
     * @param No parameters
     * @return Tra ve thong tin can bo neu tim thay hoac tra ve false neu khong tim thay
     ******************************************************************************/
    bool searchCanBo();

    /*******************************************************************************
     * @brief Phuong thuc in danh sach can bo
     *
     * @param No parameters
     * @return Not return
     ******************************************************************************/
    void printList();

    /*******************************************************************************
     * @brief Phuong thuc thoat chuong trinh
     *
     * @param No parameters
     * @return Not return
     ******************************************************************************/
    void Exit();

};
/*******************************************************************************
 * End of file
 ******************************************************************************/
