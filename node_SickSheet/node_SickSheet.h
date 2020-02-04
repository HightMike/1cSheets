/*
 *  Узел БольничныйЛист
 *
 * Разработал: Решетников И.О.
 * Дата: 2020/02/03
*/

#ifndef __SICKSHEET_H__
#define __SICKSHEET_H__

#include "document.h"
#include "form.h"

#include "buttonProperty.h"
#include "fieldProperty.h"

// Класс БольничныйЛист
class Node_SickList: public Document{

public:
    Node_SickList();
    ~Node_SickList();
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
