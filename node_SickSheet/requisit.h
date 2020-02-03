/*
 *  Класс Реквизит
 *
 * Разработал: Решетников И.О.
 * Дата: 2020/02/03
*/

#ifndef __REQUISIT_H__
#define __REQUISIT_H__

enum REQUISIT_TYPE_e{
    REQUISIT_TYPE_NUMBER = 0,	// Число
    REQUISIT_TYPE_STRING,	// Строка
    REQUISIT_TYPE_DATE,		// Дата
    REQUISIT_TYPE_BOOL,		// Булево
    REQUISIT_TYPE_REFERENCE	// Ссылка
};

class Requisit{
private:
    string name;	// Имя
    string synonym;	// Синоним
    string comment;	// Комментарий
    unsigned int type;	// Тип
    //unsigend int//Состав даты

    bool index;		    // Индексировать
    //unsigend int//ПолнотекстовыйПоиск
    //unsigend int//ИсторияДанных
    //bool compositeDataType; // СоставнойТипДанных
    //bool usage;		    // Использование

    //string//Формат
    //string//ФорматРедактирования
    //string//Подсказка
    //bool // ЗаполнятьИзДанных зап
    //string // ЗначениеЗаполнения
    //unsigned int //ПроверкаЗаполнения

    //unsigned int //Быстрый выбор
    //unsigned int //Создание при вводе
    //unsigned int //История выбора при вводе

    //long связь по типу

public:
    Requisit();
    ~Requisit();
};

#endif //__REQUISIT_H__
