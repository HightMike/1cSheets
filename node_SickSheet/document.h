/*
 *  Класс Документ
 *
 *  Разработал: Решетников И.О.
 *  Дата: 2020/02/03
*/

#ifndef __DOCUMENT_H__
#define __DOCUMENT_H__

#include "form.h"

class Document{
private:
    Form *forms;	// Формы
    //*requisites	// Реквизиты
    //*tables_parts	// Табличные части

    //*commands;	// Команды
    //*makets;		// Макеты

public:
    Document();
    virtual ~Document();
};

#endif	//__DOCUMENT_H__
