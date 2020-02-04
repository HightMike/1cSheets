/*
 *  Класс Реквизит
 *
 * Разработал: Решетников И.О.
 * Дата: 2020/02/03
*/

#ifndef __REQUISIT_H__
#define __REQUISIT_H__

#include <string>

namespace ns_Requisit{
    //! Тип риквизита
    enum REQUISIT_TYPE_e{
	REQUISIT_TYPE_NUMBER = 0,	// Число
	REQUISIT_TYPE_STRING,	// Строка
	REQUISIT_TYPE_DATE,		// Дата
	REQUISIT_TYPE_BOOL,		// Булево
	REQUISIT_TYPE_REFERENCE	// Ссылка
    };

    //! Индексировать
    enum INDEX_e{
	INDEX_NOT = 0,	// Не индексировать
	INDEX_INDEX	// Индексировать
    };

    //! Полнотекстовый поиск
    enum TEXT_SEARCH_e{
	TEXT_SEARCH_NOT_USE = 0,    // Не использовать
	TEXT_SEARCH_USE		    // Использовать
    };

    //! История данных
    enum DATA_HISTORY_e{
	DATA_HISTORY_NOT_USE = 0,   // Не использовать
	DATA_HISTORY_USE	    // Использовать
    };

    //! Проверка заполнения
    enum FILL_CHECK_e{
	FILL_CHECK_ERROR_OUT = 0    // Выдавать ошибку
    };

    //!Быстрый выбор
    enum QUICK_SELECT_e{
	QUICK_SELECT_AUTO = 0 // Авто
    };

    //!Создание при вводе
    enum CREATE_ON_ENTER_e{
	CREATE_ON_ENTER_AUTO = 0 // Авто
    };

    //! История выбора при вводе
    enum HISTORY_SELECT_ON_ENTER_e{
	HISTORY_SELECT_ON_ENTER_AUTO = 0 //Авто
    };

}   // eo ns_Requisit

using namespace std;

class Requisit{
private:
    string name;	// Имя
    string synonym;	// Синоним
    string comment;	// Комментарий
    unsigned int type;	// Тип

    unsigned int index;		    // Индексировать
    unsigned int textSearch;	    // ПолнотекстовыйПоиск
    unsigned int dataHistory;	    // ИсторияДанных

    string tooltip;		    // Подсказка

    bool fillFromFillData;	    // ЗаполнятьИзДанных зап
    string fillValue;		    // ЗначениеЗаполнения
    unsigned int fillCheck;	    // ПроверкаЗаполнения

    //TODO // Выбор групп и элементов
    //TODO // Связи параметров выбора
    //TODO // Параметры выбора
    //TODO // Форма выбора

    unsigned int quickSelect;		//Быстрый выбор
    unsigned int createOnEnter;		//Создание при вводе
    unsigned int historySelectOnEnter;	//История выбора при вводе
    //TODO // связь по типу

    //unsigend int//Состав даты
    //bool compositeDataType; // СоставнойТипДанных
    //bool usage;		    // Использование
    //string//Формат
    //string//ФорматРедактирования

public:
    Requisit();
    ~Requisit();
};

#endif //__REQUISIT_H__
