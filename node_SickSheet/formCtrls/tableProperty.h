/*
*   Свойства элмента формы Таблица
*/

#ifndef __TABLE_PROPERTY_H__
#define __TABLE_PROPERTY_H__

#include <string>
using namespace std;

//! ПоложениеКоманднойПанели
enum POSITION_COMMAND_PANEL_e{
    POSITION_COMMAND_PANEL_NO = 0,	// Нет
    POSITION_COMMAND_PANEL_AUTO,	// Авто
    POSITION_COMMAND_PANEL_TOP,		// Верх
    POSITION_COMMAND_PANEL_BOTTOM	// Низ
};

//! Отображение
enum REPRESENTATION_e{
    REPRESENTATION_LIST = 0,		// Список
    REPRESENTATION_HIERARCHICAL_LIST,	// Иерархический список
    REPRESENTATION_TREE			// Дерево
};

//! Начальное отображение дерева
enum INIT_REPRESENTATION_TREE_e{
    INIT_REPRESENTATION_TREE_NOT_DISCLOSE = 0,	     // Не раскрывать
    INIT_REPRESENTATION_TREE_DISCLOSE_TOP_LEVEL,     // Раскрывать верхний уровнь
    INIT_REPRESENTATION_TREE_DISCLOSE_ALL_LEVELS     // Раскпывать все уровни
};

//! Фиксация в таблице
enum FIX_IN_TABLE_e{
    FIX_IN_TABLE_NO = 0,    // Нет
    FIX_IN_TABLE_LEFT,	    // Лево
    FIX_IN_TABLE_RIGHT	    // Право
};

//! ПолосаПрокрутки (вертикальная\горизонтальная)
enum SCROLLBAR_e{
    SCROLLBAR_NOT_USE = 0,	// Не использовать
    SCROLLBAR_ALWAYS_USE,	// Использовать всегда
    SCROLLBAR_AUTO_USE		// Использовать автоматически
};

//! ВариантУправленияВысотойТаблицы
enum VARIANT_CTRL_TABLE_HEIGHT_e{
    VARIANT_CTRL_TABLE_HEIGHT_FORM_STRING = 0,	// В строках формы
    VARIANT_CTRL_TABLE_HEIGHT_TABLE_STRING,	// В строках таблицы
    VARIANT_CTRL_TABLE_HEIGHT_BY_CONTENT	// По содержимому
};

struct TableProperty_st{
    string commandsComposition;		    // СоставКоманд
    unsigned int positionCommandPanel;	    // ПоложениеКоманднойПанели
    unsigned int representation;	    // Отображение
    unsigned int initRepresentationTree;    // НачальноеОтображениеДерева
    string output;			    // Вывод
    bool updateChangeData;		    // ОбновлениеПриИзмененииДанных
    bool updateAuto;			    // Автооновление
    unsigned int periodAutoUpdate;	    // Период автообновления
    unsigned int fixInTable;		    // Фиксация в таблице
    unsigned int scrollbarVertical;	    // Вертикальная полоса прокрутки
    unsigned int scrollbarHorizontal;	    // Горизонтальная полоса прокрутки
    unsigned int variantCtrlTableHeight;    // ВариантУправленияВысотойТаблицы
    unsigned int height;		    // Высота
    unsigned int maxHeight;		    // Максимальная высота
    unsigned int autoMaxHeight;		    // АвтоМаксимальнаяВысота
    unsigned int heightTableString;	    // ВысотаВСтрокахТаблицы
    unsigned int maxHeightTableString;	    // МаксимальнаяВысотаВСтрокахТаблицы
    unsigned int autoMaxHeightTableString;  // АвтоМаксимальнаяВысотаВСтрокахТаблицы
};

#endif
