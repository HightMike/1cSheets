/*
 *  класс Форма
 *
 * Разработал: Решетников И.О.
 * Дата: 2020/02/03
*/

#ifndef __FORM_H__
#define __FORM_H__

#include <string>

using namespace std;

//! Класс Форма
class Form
{
private:
    string name;    // Имя
    string synonym; // Синоним
    string comment; // Комментарий

public:
    Form(string Name, string Synonym = "", string Comment = "");
    virtual ~Form();
};

#endif //__FORM_H__
