#pragma once


#include <iostream>
#include "stdafx.h"
#include "CApplication0.h"
#include "CWorkbooks0.h"
#include "CWorkbook0.h"
#include "CWorksheets0.h"
#include "CWorksheet0.h"
#include "CSheets0.h"
#include "CRanges.h"
#include "CRange0.h"
#include "CFont0.h"
#include "Cnterior.h"
#include "CShapes.h"



class CExcelOperation
{
public:
	CExcelOperation();
	~CExcelOperation();

	

	BOOL exportProductExcel(int iStartPrid);               // 导出产品测试数据

private:


	int InitExcel();
	CString IndexToString(int row, int col);

	CApplication oExcel;
	CWorkbook oBook;

	CWorkbooks oBooks;
	CWorksheets oSheets;
	CWorksheet oSheet;
	CRange oRange;
	Cnterior interior;
	CShapes oShapes;
};

//
//class CExcelOperation
//{
//public:
//	CExcelOperation();
//	~CExcelOperation();
//
//    /*************** 
//     * Funciton:  openExcelFile 
//     * Describe:  打开一个Excel表格文件.
//     * Parameter: strFileName(in) 表格文件的路径.
//     * Return:    返回0成功，否则失败，使用getErrMsg()可以查看错误信息.
//     ***************/ 
//	int openExcelFile(CString strFileName);
//
//    /*************** 
//     * Funciton:  closeExcelFile
//     * Describe:  关闭Excel表格文件
//     * Parameter: 
//     * Return:    0
//     ***************/ 
//	int closeExcelFile();
//
//	/*************** 
//     * Funciton:  setDealCB  
//     * Describe:  设置操作回调到m_pfExcelDealCB中.
//     * Parameter: excelDealCB(in) 操作表格的回调函数. 
//     * Return:    
//     ***************/ 
//	void setDealCB(ExcelDealCB excelDealCB) {m_pfExcelDealCB = excelDealCB;};
//
//    /*************** 
//     * Funciton:  startDealExcel
//     * Describe:  对Excel表格进行操作，需要先调用setDealCB()设置操作回调.
//     * Parameter: 
//     * Return:    返回0成功，否则失败，使用getErrMsg()可以查看错误信息.
//     ***************/ 
//	int startDealExcel();
//
//    /*************** 
//     * Funciton:  clearErrMsg
//     * Describe:  清空错误信息m_strErrMsg.
//     * Parameter: 
//     * Return:    
//     ***************/ 
//	void clearErrMsg() {m_strErrMsg.clear();};
//
//    /*************** 
//     * Funciton:  getErrMsg  
//     * Describe:  得到错误信息的内容.
//     * Parameter: 
//     * Return:    错误信息m_strErrMsg.
//     ***************/ 
//	string getErrMsg() {return m_strErrMsg;};
//
//    /*************** 
//     * Funciton:  getCell  
//     * Describe:  得到可以操作表格的类.
//     * Parameter: 
//     * Return:    可操作表格的类m_rangeBasicCells.
//     ***************/ 
//	CRange getCell() {return m_rangeBasicCells;};
//
//    /*************** 
//     * Funciton:  getMaxColNum  
//     * Describe:  得到表格的最大列数.
//     * Parameter: 
//     * Return:    表格的最大列数.
//     ***************/ 
//	long getMaxColNum() {return m_lMaxColNum;};
//
//    /*************** 
//     * Funciton:  getMaxColNum  
//     * Describe:  得到表格的最大行数.
//     * Parameter: 
//     * Return:    表格的最大行数.
//     ***************/ 
//	long getMaxRowNum() {return m_lMaxRowNum;};
//
//    /*************** 
//     * Funciton:  getStartCol
//     * Describe:  得到表格的起始列号.  
//     * Parameter: 
//     * Return:    表格的起始列号.
//     ***************/ 
//	long getStartCol() {return m_lStartCol;};
//
//    /*************** 
//     * Funciton:  getStartRow  
//     * Describe:  得到表格起始行号.
//     * Parameter: 
//     * Return:    表格的起始行号.
//     ***************/ 
//	long getStartRow() {return m_lStartRow;};
//
//	CString IndexToString(int row, int col);
//	CString GetRowHeight(int row);                  // 得到行高
//
//
//	CApplication m_appExcelServer; //Excel服务器
//private:
//	
//	CWorkbooks m_wbsExcelBooks;
//	CWorkbook m_wbExcelBook; //打开的文档
//	LPDISPATCH m_lpDisp;
//	CWorksheet m_wsSheet;
//	CRange m_rangeBasicCells;
//	long m_lMaxColNum;  //表格最大列数
//	long m_lMaxRowNum;  //表格最大行数
//	long m_lStartCol; //表格起始列
//	long m_lStartRow;  //表格起始行
//	string m_strErrMsg; //错误信息
//	ExcelDealCB m_pfExcelDealCB; //对表格进行操作的回调函数
//
//	
//		
//};

