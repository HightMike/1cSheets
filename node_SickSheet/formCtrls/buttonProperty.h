/*
 *   Свойства элемента формы "Кнопка"
*/

#ifndef _BUTTON_PROPERTY_H__
#define _BUTTON_PROPERTY_H__

#include <string>

#include "commonProperty.h"

namespace ns_Button {
    //! Перечисление ТолькоВоВсехДействиях
    enum ONLY_IN_ACTIONS_e{
	ONLY_IN_ACTIONS_NO = 0, // Нет
	ONLY_IN_ACTIONS_AUTO,   // Авто
	ONLY_IN_ACTIONS_YES	    // Да
    };

    //! Перечисление Отображение
    enum REPRESENTATION_e{
	REPRESENTATION_AUTO = 0,	//Авто,
	REPRESENTATION_TEXT,	//Текст,
	REPRESENTATION_IMAGE,	//Картинка,
	REPRESENTATION_IMAGE_TEXT	//Картинка и текст
    };

    //! Перечисление ПоложениеКартинки
    enum IMAGE_POSITION_e{
	IMAGE_POSITION_AUTO = 0,	// Авто
	IMAGE_POSITION_RIGHT,	// Право
	IMAGE_POSITION_LEFT		// Лево
    };

    //! Перечисление Фигура
    enum SHAPE_e{
	SHAPE_AUTO = 0, // Авто
	SHAPE_USUAL,    // Обычная
	SHAPE_OVAL	    // Овальная
    };

    //! Перечисление ОтображениеФигуры
    enum SHAPE_REPRESENTATION_e{
	SHAPE_REPRESENTATION_NO = 0,    // Нет
	SHAPE_REPRESENTATION_AUTO,	    // Авто
	SHAPE_REPRESENTATION_ALWAYS,    // Всегда
	SHAPE_REPRESENTATION_ACTIVE	    // При активности
    };
};  // eo ns_Button

using namespace std;

struct ButtonProperty_st: public CommonProperty_st{
    unsigned int onlyInAllActions;		// ТолькоВоВсехДейтсвиях
    bool check;				    		// Пометка
    unsigned int representation;	    // Отображение
    unsigned int imagePosition;		    // ПоложениеКартинки
    unsigned int shape;			    	// Фигура
    unsigned int shapeRepresentation;	// ОтображениеФигуры
    string textColor;			    	// ЦветТекста
    string backColor;			    	// ЦветФона
    string borderColor;			    	// ЦветРамки
    string font;			    		// Шрифт
};

#endif
