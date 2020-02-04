/*
 *  Общие свойства элементов формы
*/

#ifndef __COMMON_PROPERTY_H__
#define __COMMON_PROPERTY_H__

#include <string>

namespace ns_CommonProperty{
    //! Перечисление Положение заголовка
    enum TITLE_POSITION_e{
	TITLE_POSITION_NO = 0,  // Нет
	TITLE_POSITION_AUTO,    // Авто
	TITLE_POSITION_LEFT,    // Лево
	TITLE_POSITION_TOP,	    // Верх
	TITLE_POSITION_RIGHT,   // Право
	TITLE_POSITION_BOTTOM   // Низ
    };

    //! Перечисление Отображение подсказки
    enum TOOL_TIP_REPRESENTATION_e{
	TOOL_TIP_REPRESENTATION_NO = 0,	// Нет
	TOOL_TIP_REPRESENTATION_AUTO,	// Авто
	TOOL_TIP_REPRESENTATION_POPUP,	// Всплывающая
	TOOL_TIP_REPRESENTATION_BUTTON	// Кнопка
    };
} //eo ns_CommonProperty

//struct extendedToolTip //Структура Расширенная подсказка???

using namespace std;

//! Общие свойства
struct CommonProperty_st{
    string name;			    // Имя
    string title;			    // Заголовок
    unsigned int titlePosition;		    // ПоложениеЗаголовка
    string dataPath;			    // ПутьКДанным
    string commandName;			    // ИмяКоманды
    bool skipOnInput;			    // Пропускать при вводе
    bool enabled;			    // АктивизироватьПоУмолчанию
    bool viewOnly;			    // Только просмотр
    bool autoMaxWidth;			    // АвтоМаксимальнаяШирина
    bool autoMaxHeight;			    // АвтоМаксимальнаяВысота
    unsigned int width;			    // Ширина
    unsigned int height;		    // Высота
    string toolTip;			    // Подсказка
    unsigned int toolTipRepresentation;	    // ОтображениеПодсказки
    string extendedToolTip;		    // РасширеннаяПодсказка (м.б. текст, картинки, ссылки. Самостоятельный типДанных?)
};


#endif //__COMMON_PROPERTY_H__
