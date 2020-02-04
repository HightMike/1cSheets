/*
 *  Узел БольничныйЛист
 *
 * Разработал: Решетников И.О.
 * Дата: 2020/02/03
*/

#ifndef __SICKSHEET_H__
#define __SICKSHEET_H__

#include <string>

#include "document.h"
#include "form.h"

#include "buttonProperty.h"
#include "fieldProperty.h"
#include "requisit.h"

using namespace std;

//class Form_Document;
//class Form_List;

// Класс БольничныйЛист
class Node_SickSheet: public Document{
    Requisit r_Employee;		// Сотрудник
    Requisit r_MonthChargeString;	// МесяцНачисленияСтрокой
    Requisit r_NumberSheetDisabilities;	// Номер листка нетрудоспособности

    //Form_Document formDocument;	// Форма документа
    //Form_List formList;	// Форма списка

public:
    Node_SickSheet();
    ~Node_SickSheet();
};

//! Класс ФормаДокумента
class Form_Document: public Form
{
    ButtonProperty_st bp_SpendAndClose; // ПровестиИЗакрыть
    ButtonProperty_st bp_Write;		// Записать

    FieldProperty_st fp_Employee;   // Сотрудник
    FieldProperty_st fp_Month;	    // Месяц
    FieldProperty_st fp_NumberLS;   // НомерЛисткаНетрудоспособности

public:
    Form_Document(string Name, string Synonym, string Comment);
    ~Form_Document();
};

//! Класс ФормаСписка
class Form_List: public Form
{
public:
    Form_List(string Name, string Synonym = "", string Comment = "");
    ~Form_List();
};

#endif	//__SICKSHEET_H__
