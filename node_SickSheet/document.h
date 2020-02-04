/*
 *  Класс Документ
 *
 *  Разработал: Решетников И.О.
 *  Дата: 2020/02/03
*/

#ifndef __DOCUMENT_H__
#define __DOCUMENT_H__

#include <string>

#include "form.h"
#include "requisit.h"

namespace ns_Document{
    //!Тип номера
    enum TYPE_NUMBER_e{
	TYPE_NUMBER_STRING = 0	//Строка
    };

    //! Допустимая длина номера
    enum PERM_LENGTH_NUMBER_e{
	PERM_LENGTH_NUMBER_VARIABLE = 0	// Переменная
    };

    //! Периодичность
    enum PERIODICITY_e{
	PERIODICITY_WITHIN_YEAR = 0 //В пределах года
    };

    //! Проведение
    enum HOLD_e{
	HOLD_ALLOW = 0 // Разрешить
    };

    //! Оперативное проведение
    enum HOLD_OPERATIVE_e{
	HOLD_OPERATIVE_FORBID = 0 // Запретить
    };

    //! Удаление движений
    enum DELETE_MOVEMENTS_e{
	DELETE_MOVEMENTS_AUTO_DELETE = 0 // Удалять автоматически
    };

    //! Запись движений при проведении
    enum WRITING_MOVEMENTS_HOLD_e{
	WRITING_MOVEMENTS_HOLD_SELECT = 0 // Записывать выбранные
    };

    //! заполнение последовательностей
    enum FILL_SEQUENCE_e{
	FILL_SEQUENCE_e = 0, // заполнять автоматически
    };

    //! Режим управления блокировкой данных
    enum MODE_CTRL_DATA_LOCK_e{
	MODE_CTRL_DATA_LOCK_AUTO = 0, //автоматический
    };

    //! Полнотекстовый поиск
    enum FULL_TEXT_SEARCH_e{
	FULL_TEXT_SEARCH_USE = 0, //Использовать
    };

    //! История данных
    enum HISTORY_DATA_e{
	HISTORY_DATA_NOT_USE = 0, // Не Использовать
    };

    //! Создание при вводе
    enum CREATE_ON_ENTER_e{
	CREATE_ON_ENTER_USE = 0 // Использовать
    };

    //! Способы поиска строки
    enum METHODS_SEARCH_STRING_e{
	METHODS_SEARCH_STRING_BEGIN = 0 // Начало
    };

    //! Полнотекстовый поиск при вводе по строке
    enum FULL_TEXT_SEARCH_STRING_e{
	FULL_TEXT_SEARCH_STRING_NOT_USE = 0, // Не использовать
    };

    //! Режим подлучения данных
    enum MODE_GETTING_DATA_e{
	MODE_GETTING_DATA_DIRECTLY = 0 //Непосрдственно
    };

    enum HISTORY_SELECT_ENTER_e{
	HISTORY_SELECT_ENTER_AUTO = 0 // Авто
    };


}

using namespace std;

class Document{
private:

    //! Свойства метаобъекта Документ
    //! Основные
    string name;// имя
    string synonym; // синоним
    string comment; //комментарий

    //Модуль объекта
    //Модуль менеджера

    //! Данные
    //Нумератор
    unsigned int typeNumber;	//Тип номера
    unsigned int lengthNumber;	//Длина Номера
    unsigned int permLengthNumber;  //Допустимая длина номера
    unsigned int periodicity;	//Перодичность
    bool controlUnique; // Контроль уникальности
    bool autoNumeration;// Автонумерация
    //TODO // Стандартные реквизиты
    //TODO // Характеристики
    //TODO // Вводится на основании
    unsigned int hold; //Проведение
    unsigned int holdOperative; // Оперативное проведение
    unsigned int deleteMovements; // Удаление движений
    unsigned int writingMovementsHold; // Запись движений при проведении
    unsigned int fillSequence; // заполнение последовательностей
    //TODO // Движения
    bool privilegedModeHold; // Привилигированный режим при проведении
    bool privilegedModeCancel; // Привилигированный режим при отмене
    // TODO // поля блокировки данных
    unsigned int modeCtrlDataLock; // Режим управления блокировкой данных
    unsigned int fullTextSearch; // Полнотекстовый поиск
    unsigned int historyData; // История данных
    //! Представление
    bool useStandartCommans;// Использовать стандарные команды
    //TODO // Ввод по строке
    unsigned int createOnEnter; // Создание при вводе
    unsigned int methodsSearchString; // Способ поиска строки
    unsigned int fullTextSearchString; // Полнотекстовый поиск при вводе по строке
    unsigned int modeGettingData; // Режим подлучения данных
    unsigned int historySelectEnter; // История выбора при вводе
    //TODO Основная форма объекта
    //TODO Основная форма списка
    //TODO Основная форма выбора
    string representationObject;// Представление объекта
    string extendedRepresentationObject;// расширенное представление объекта
    string representationList;// представление списка
    string extendedRepresentationList; // расширенное представление списка
    string explanation; // поянение

    //! Справочная информация
    bool includeInContents; // Включать в соержание
    // TODO // Справочная информация

    //! Состав документа
    Form *forms;	    // Формы
    Requisit *requisites;   // Реквизиты
    //*tables_parts	    // Табличные части
    //*commands;	    // Команды
    //*makets;		    // Макеты

public:
    Document();
    virtual ~Document();
};

#endif	//__DOCUMENT_H__
