/*
 *   Свойства элемента формы "Группа"
*/

#ifndef __GROUP_PROPERTY_H__
#define __GROUP_PROPERTY_H__

#include <string>

using namespace std;

//! Перечисление Группировка
enum GROUPING_e{
    GROUPING_HORIZONTAL = 0,	    // Горизонтальная
    GROUPING_HORIZONTAL_POSSIBLE,   // Горизонтальная если возможно
    GROUPING_VERTICAL		    // Вертикальная
};

//! Перечисление Отображение
enum REPRESENTATION_e{
    REPRESENTATION_NO = 0,  //Нет
    REPRESENTATION_WEAK,    //Слабое выделение
    REPRESENTATION_USUAL,   //Обычное выделение
    REPRESENTATION_STRONG   //Сильное выделение
};

//! Перечисление Поведение
enum BEHAVIOR_e{
    BEHAVIOR_USUAL = 0,	    // Обычная
    BEHAVIOR_MINIMIZE,	    // Свёртываемая
    BEHAVIOR_POPUP	    // Всплывающая
};

//! Перчисление ОтображениеУправления
enum CONTROL_REPRESENTATION_e{
    CONTROL_REPRESENTATION_TITLE_HYPERLINK = 0,	// Гиперссылка заголовка (по умолчанию)
    CONTROL_REPRESENTATION_IMAGE		// Картинка
};

//! Перечисление ВыравниваниеЗаголовковИЭлементов
enum ALIGN_TITLES_ELEMENTS_e{
    ALIGN_TITLES_ELEMENTS_NO = 0,			    // Нет
    ALIGN_TITLES_ELEMENTS_Auto,				    // Авто (по умолчанию)
    ALIGN_TITLES_ELEMENTS_ELEMENTS_LEFT_TITLES_LEFT,	    // ЭлементыЛево, заголовкиЛево
    ALIGN_TITLES_ELEMENTS_ELEMENTS_RIGHT_TITLES_LEFT,	    // ЭлементыПраво, заголовкиЛево
    ALIGN_TITLES_ELEMENTS_ELEMENTS_RIGHT_TITLES_RIGHT,	    // ЭлементыПраво, заголовкиПраво
    ALIGN_TITLES_ELEMENTS_ELEMENTS_LEFT_TITLES_RIGHT,	    // ЭлементыЛево, заголовкиПраво
    ALIGN_TITLES_ELEMENTS_ELEMENTS_AUTO_TITLES_LEFT,	    // ЭлементыАвто, заголовкиЛево
};

//! Перечисление СквозноеВыравнивание
enum THROUGH_ALIGN_e{
    THROUGH_ALIGN_AUTO = 0,	// Авто (по умолчанию)
    THROUGH_ALIGN_USE,		// Использовать
    THROUGH_ALIGN_NOT_USE	// Не использовать
};

//! Вид
enum VIEW_e{
    VIEW_PAGE = 0,		// Страница
    VIEW_USUAL_GROUP,		// Обычная группа
    VIEW_USUAL_COMMAND_PANEL,	// Командная панель
    VIEW_GROUP_OF_BUTTONS	// Группа кнопок
};

//! Перечисление отображениеСтраниц
enum REPRESENTATION_PAGES_e{
    REPRESENTATION_PAGES_NO = 0, //Нет
};

//! Перечисление Интервал
enum INTERVAL_e{
    INTERVAL_NO = 0,	    // Нет
    INTERVAL_AUTO,	    // Авто
    INTERVAL_HALF,	    // Половинный
    INTERVAL_SINGLE,	    // Одинарный
    INTERVAL_SESQUIALTERAL, // Полуторный
    INTERVAL_DOUBLE	    // Двойной
};

//! Перечисление ПоложениеПодчиненных
enum POSITION_SUBORDINATES_e{
    POSITION_SUBORDINATES_AUTO = 0, // Авто
    POSITION_SUBORDINATES_LEFT,	    // Лево
    POSITION_SUBORDINATES_CENTER,   // Центр
    POSITION_SUBORDINATES_RIGHT	    // Право
};

//! Перечисление ИсточникКоманд
enum COMMAND_SOURCE_e{
    COMMAND_SOURCE_FORM = 0,			// Форма
    COMMAND_SOURCE_TABLE,			// Таблица
    COMMAND_SOURCE_FIELD_TABLE_DOCUMENT,	// Поле табличного документа
    COMMAND_SOURCE_FIELD_FORMATTED_DOCUMENT,	// Поле форматированного документа
    COMMAND_SOURCE_FIELD_GRAPHICAL_SCHEME,	// Поле графической схемы
    COMMAND_SOURCE_FIELD_SCHEDULER		// Поле планировщика
};

//! Перечисление Горизонтальное положение
enum HORIZONTAL_POSITION_e{
    HORIZONTAL_POSITION_LEFT = 0,   // Лево
    HORIZONTAL_POSITION_RIGHT,	    // Право
    HORIZONTAL_POSITION_CENTER	    // Центр
};

//! Перечисление Отображение (Для группы кнопок)
enum REPRESENTATION_GROUP_OF_BUTTONS_e{
    REPRESENTATION_GROUP_OF_BUTTONS_AUTO = 0,	// Авто
    REPRESENTATION_GROUP_OF_BUTTONS_COMPACT,	// Компактное
    REPRESENTATION_GROUP_OF_BUTTONS_USUAL	// Обычное
};

struct GroupProperty_st{
    unsigned int grouping;			    // Группировка
    unsigned int representation;		    // Отображение
    bool titleRepresentation;		 	    // ОтображатьЗаголовок
    unsigned int behavior;		 	    // Поведение
    bool minimize;			 	    // Свёрнута
    unsigned int controlRepresentation;	 	    // ОтображениеУправления
    string titleMinimizeRepresentation;	 	    // ЗаголовокСвернутогоОтображения
    bool viewOnly;				    // Только просмотр
    bool allowChangeContent;			    // РазрешитьИзменениеСостава
    unsigned int alignTitlesElements;		    // ВыравниваниеЗаголовковИЭлементов
    unsigned int throughAlign;			    // СквозноеВыравнивание
    bool united;				    // Объединенная
    unsigned int view;				    // Вид
    unsigned int representationPages;		    // ОтображениеСтраниц
    string pathTitleData;			    // ПутьКДаннымЗаголовка
    unsigned int intervalHorizontal;		    // ГоризонтальныйИнтервал
    unsigned int intervalVertical;		    // ВерикальныйИнтервал
    unsigned int positionSubordinatesHorizontal;    // ГоризонтальноеПоложениеПодчиненных
    unsigned int positionSubordinatesVertical;	    // ВертикальноеПоложениеПодчиненных
    unsigned int commandsSource;		    // ИсточникКоманд
    unsigned int commandsConsist;		    // Состав команд (зависит от источника команд)
    unsigned int horizontalPosition;		    // Горизонтальное положение
    unsigned int representationGroupOfButtons;	    // Отображение группы кнопок
};

#endif //__GROUP_PROPERTY_H__
