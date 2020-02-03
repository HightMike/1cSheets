/*
 * Свойства элмента формы Поле
*/

#ifndef __FIELD_PROPERTY_H__
#define __FIELD_PROPERTY_H__

#include <string>

#include "commonProperty.h"

namespace ns_Field{
    //! Перечисление Вид поля
    enum VIEW_FIELD_e{
	VIEW_FIELD_INPUT = 0,	    // Поле ввода
	VIEW_FIELD_FLAG,	    // Поле флажка
	VIEW_FIELD_TOGGLE,	    // Поле переключателя
	VIEW_FIELD_PICTURE,	    // Поле картинки
	VIEW_FIELD_INDICATOR,	    // Поле Индикатор
	VIEW_FIELD_CTRL_BAND,	    // Поле полосы регулирования
	VIEW_FIELD_TABLE_DOCUMENT,  // Поле табличного документа
	VIEW_FIELD_CALENDAR,	    // Поле календарь
	VIEW_FIELD_FORMAT_DOCUMENT, // Поле форматированного документа
	VIEW_FIELD_GRAPHICAL_SCHEME,// Поле графической схемы
	VIEW_FIELD_SHEDULER	    // Поле планировщика
    };

    //! Перечисление РежимПароля
    enum PASSWORD_MODE_e{
	PASSWORD_MODE_NO = 0,   // Нет
	PASSWORD_MODE_YES	// Да
    };

    //! Перечисление КнопкаВыпадающегоСписка
    enum BUTTON_DROPDOWN_LIST_e{
	BUTTON_DROPDOWN_LIST_NO = 0,	// Нет
	BUTTON_DROPDOWN_LIST_YES	// Да
    };

    //! Перечисление ОтображениеПредупреждениеПриРедавктриовании
    enum REPRESENTATION_WARNING_EDIT_e{
	REPRESENTATION_WARNING_EDIT_AUTO = 0,    // Авто
	REPRESENTATION_WARNING_EDIT_DISPLAY	    // Отображать
    };

    //! Перечисление БыстрыйВыбор
    enum QUICK_SELECT_e{
	QUICK_SELECT_AUTO = 0,  // Авто
	QUICK_SELECT_YES,	    // Да
	QUICK_SELECT_NO	    // Нет
    };

    //! Перечисление ИсторияВыбораПриВводе
    enum HISTORY_SELECT_ENTER_e{
	HISTORY_SELECT_ENTER_AUTO = 0,	// Авто
	HISTORY_SELECT_ENTER_NOT_USE	// Не использовать
    };

    //! Перечисление КнопкаСоздания
    enum BUTTON_CREATION_e{
	BUTTON_CREATION_AUTO = 0,	// Авто
	BUTTON_CREATION_YES,	// Да
	BUTTON_CREATION_NO		// Нет
    };

    //! Перечисление ВидФлажка/Переключателя
    enum VIEW_FLAG_SWITCH_e{
	VIEW_FLAG_SWITCH_Auto = 0,	    // Авто
	VIEW_FLAG_SWITCH_FLAGSWITCH,    // Флаг\переключатель
	VIEW_FLAG_SWITCH_TOGGLE	    // Тумблер
    };

    //!  Перчисление Отображение (Для поля индикатора)
    enum REPRESENTATION_e{
	REPRESENTATION_SMOOTH = 0,	    //Плавное
	REPRESENTATION_INTERMITTENT,    //Прерывистое
	REPRESENTATION_SLOPING	    //Прерывистое наклонное
    };

    //! Перечисление Отображениен разметки
    enum DISPLAY_MARKING_e{
	DISPLAY_MARKING_NOT_DISPLAY = 0,	// Не отображать
	DISPLAY_MARKING_TOP,		// Сверху (слева)
	DISPLAY_MARKING_BOTTOM,		// Снизу (справа)
	DISPLAY_MARKING_BOTH_SIDES		// С обих сторон
    };

    //! Перечисления ПолосаПрокрутки (вертикальная\горизонтальная)
    enum SCROLLBAR_e{
	SCROLLBAR_NOT_USE = 0,	// Не использовать
	SCROLLBAR_ALWAYS_USE,	// Использовать всегда
	SCROLLBAR_AUTO_USE		// Использовать автоматически
    };

    //! Перечисление РежимВыделения
    enum MODE_SELECTION_e{
	MODE_SELECTION_SINGLE = 0,	    // Одиночный
	MODE_SELECTION_MULTIPLE,	    // Множественный
	MODE_SELECTION_INTERVAL	    // Интервал
    };

};  //eo namespace ns_Field

using namespace std;

struct FieldProperty_st: public CommonProperty_st{
    unsigned int view;			    // Вид
    bool selectType;			    // ВыбиратьТип
    string mask;			    // Маска
    unsigned int passwordMode;		    // РежимПароля
    bool modeSelectFromList;		    // РежимВыбораИзСписка
    string selectList;			    // СписокВыбора
    unsigned int buttonDropdownList;	    // КнопкаВыпадющегоСписка
    string editFormat;			    // ФорматРедактирования
    long long int maxValue;		    // МаксимальноеЗначение
    long long int minValue;		    // МинимальноеЗначение
    string selectGroupElements;		    // Выбор групп и элементов
    string warningEdit;			    // Предупреждение при редактировании
    unsigned int representationWarningEdit; // ОтборажениеПредупреждениеПриРедактировании
    unsigned int quickSelect;		    // БыстрыйВыбор
    unsigned int historySelectEnter;	    // История выбора при вводе
    string linksSelectParameters;	    // СвязиПараметровВыбора
    string selectParameters;		    // ПараметрыВыбора
    unsigned int buttonCreation;	    // Кнопка создания
    string relationshipByType;		    // СвязьПоТипу
    string selectForm;			    // ФормаВыбора
    string enterHint;			    // ПодсказкаВвода
    unsigned int viewFlagSwitch;	    // Вид флажка\переключателя
    bool scale;				    // Масштабировать
    string textNotSelectImage;		    // Текст невыбранной картинки
    unsigned int representation;	    // Отображение
    bool displayPercentages;		    // Отображать проценты
    unsigned int displayMarking;	    // Отображение разметки
    unsigned int  stepMarking;		    // Шаг разметки
    unsigned int scrollbarVertical;	    // Вертикальная полоса прокрутки
    unsigned int scrollbarHorizontal;	    // Горизонтальная полоса прокрутки
    bool editing;			    // Редактирование
    bool displayGrid;			    // Отображать сетку
    unsigned int modeSelection;		    // Режим выделения
    bool displayMonthsPanel;		    // ОтображатьПанельМесяцев
    string commandsComposition;		    // СоставКоманд
};

#endif
