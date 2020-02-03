
#include "node_SickSheet.h"

Node_SickList::Node_SickList()
{

}

Node_SickList::~Node_SickList()
{

}

/// ФормаДокумента
Form_Document::Form_Document()
{
    ///Init
    bp_SpendAndClose.name = "ФормаПровестиИЗакрыть";						    // Имя
    bp_SpendAndClose.title = "";								    // Заголовок
    bp_SpendAndClose.titlePosition = ns_CommonProperty::TITLE_POSITION_AUTO;			    // ПоложениеЗаголовка
    bp_SpendAndClose.dataPath = "";								    // ПутьКДанным
    bp_SpendAndClose.commandName = "КомандаПровестиИЗакрыть";					    // ИмяКоманды
    bp_SpendAndClose.skipOnInput = true;							    // Пропускать при вводе
    bp_SpendAndClose.enabled = true;								    // АктивизироватьПоУмолчанию
    bp_SpendAndClose.viewOnly = false;								    // Только просмотр
    bp_SpendAndClose.autoMaxWidth = true;							    // АвтоМаксимальнаяШирина
    bp_SpendAndClose.autoMaxHeight = true;							    // АвтоМаксимальнаяВысота
    bp_SpendAndClose.width = 0;									    // Ширина
    bp_SpendAndClose.height = 0;								    // Высота
    bp_SpendAndClose.toolTip = "";								    // Подсказка
    bp_SpendAndClose.toolTipRepresentation = ns_CommonProperty::TOOL_TIP_REPRESENTATION_AUTO;	    // ОтображениеПодсказки
    bp_SpendAndClose.extendedToolTip = "";							    // РасширеннаяПодсказка (м.б. текст, картинки, ссылки. Самостоятельный типДанных?)
        bp_SpendAndClose.onlyInAllActions = ns_Button::ONLY_IN_ACTIONS_AUTO;			    // ТолькоВоВсехДейтсвиях
    bp_SpendAndClose.check = false;								    // Пометка
    bp_SpendAndClose.representation = ns_Button::REPRESENTATION_AUTO;				    // Отображение
    bp_SpendAndClose.imagePosition = ns_Button::IMAGE_POSITION_AUTO;				    // ПоложениеКартинки
    bp_SpendAndClose.shape = ns_Button::SHAPE_AUTO;						    // Фигура
    bp_SpendAndClose.shapeRepresentation = ns_Button::SHAPE_REPRESENTATION_AUTO;		    // ОтображениеФигуры
    bp_SpendAndClose.textColor = "Авто";							    // ЦветТекста
    bp_SpendAndClose.backColor = "Авто";							    // ЦветФона
    bp_SpendAndClose.borderColor = "Авто";							    // ЦветРамки
    bp_SpendAndClose.font = "Авто";								    // Шрифт

    bp_Write.name = "ФормаЗаписать";							    // Имя
    bp_Write.title = "";								    // Заголовок
    bp_Write.titlePosition = ns_CommonProperty::TITLE_POSITION_AUTO;			    // ПоложениеЗаголовка
    bp_Write.dataPath = "";								    // ПутьКДанным
    bp_Write.commandName = "КомандаЗаписать";						    // ИмяКоманды
    bp_Write.skipOnInput = true;							    // Пропускать при вводе
    bp_Write.enabled = true;								    // АктивизироватьПоУмолчанию
    bp_Write.viewOnly = false;								    // Только просмотр
    bp_Write.autoMaxWidth = true;							    // АвтоМаксимальнаяШирина
    bp_Write.autoMaxHeight = true;							    // АвтоМаксимальнаяВысота
    bp_Write.width = 0;									    // Ширина
    bp_Write.height = 0;								    // Высота
    bp_Write.toolTip = "";								    // Подсказка
    bp_Write.toolTipRepresentation = ns_CommonProperty::TOOL_TIP_REPRESENTATION_AUTO;	    // ОтображениеПодсказки
    bp_Write.extendedToolTip = "";							    // РасширеннаяПодсказка (м.б. текст, картинки, ссылки. Самостоятельный типДанных?)
        bp_Write.onlyInAllActions = ns_Button::ONLY_IN_ACTIONS_AUTO;			    // ТолькоВоВсехДейтсвиях
    bp_Write.check = false;								    // Пометка
    bp_Write.representation = ns_Button::REPRESENTATION_AUTO;				    // Отображение
    bp_Write.imagePosition = ns_Button::IMAGE_POSITION_AUTO;				    // ПоложениеКартинки
    bp_Write.shape = ns_Button::SHAPE_AUTO;						    // Фигура
    bp_Write.shapeRepresentation = ns_Button::SHAPE_REPRESENTATION_AUTO;		    // ОтображениеФигуры
    bp_Write.textColor = "Авто";							    // ЦветТекста
    bp_Write.backColor = "Авто";							    // ЦветФона
    bp_Write.borderColor = "Авто";							    // ЦветРамки
    bp_Write.font = "Авто";								    // Шрифт
    ///eo Init////
}

Form_Document::~Form_Document()
{

}
/////конец ФормаДокумента/////////////


/// ФормаСписка
Form_List::Form_List()
{

}

Form_List::~Form_List()
{

}
/////конец ФормаСписка/////////////
