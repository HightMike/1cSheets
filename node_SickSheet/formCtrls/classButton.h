/*
 * Структура-описание свойств кнопки созданное на основе XML-выгрузке
*/


#ifndef __CLASS_BUTTON_H__
#define __CLASS_BUTTON_H__

#include <string>
using namespace std;

class classButton{
private:
    string _name;			    // Имя
    unsigned int _id;			    // Идентификатор
    string _displayImportance;		    // ВажностьПриОтображении
    string _type;			    // Вид
    bool _visible;			    // Видимость
    unsigned int _titleHeight;		    // ВысотаЗаголовка
    string _representation;		    // Отображение
    bool _defaultButton;		    // КнопкаПоУмолчанию
    bool _skipOnInput;			    // ПропускатьПриВводе
    bool _enabled;			    // АктивизироватьПоУмолчанию ?
    bool _onlyInAllActions;		    // ТолькоВоВсехДейтсвиях
    unsigned int _width;		    // Ширина
    bool _autoMaxWidth;			    // АвтоМаксимальнаяШирина
    unsigned int _maxWidth;		    // МаксимальнаШирина
    unsigned int _height;		    // Высота
    bool _autoMaxHeight;		    // АвтоМаксимальнаяВысота
    unsigned int _maxHeight;		    // МаксимальнаяВысота
    bool _horizontalStretch;		    // РастягиватьПоГоризонтали
    bool _verticalStretch;		    // РастягиватьПоВертикали
    string _groupHorizontalAlign;	    // ГоризонтальноеПоложениеВГруппе
    string _groupVerticalAlign;		    // ВертикальноеПоложениеВГруппе
    bool _check;			    // Пометка
    string _commandName;		    // ИмяКоманды
    struct Parameter{
	string param_type;
	string value;
    }_parameter;			    // Параметр
    string _textColor;			    // ЦветТекста
    string _backColor;			    // ЦветФона
    string _borderColor;		    // ЦветРамки
    struct Font{
	string param_ref;
	string param_kind;
    }_font;				    // Шрифт
    struct Title{
	struct Item{
	    string lang;
	    string content;
	}_item;
    }_title;				    // Заголовок
    string _toolTipRepresentation;	    // ОтображениеПодсказки
    string _representationInContextMenu;    // ОтображениеВКонтекстномМеню
    string _shape;			    // Фигура
    string _shapeRepresentation;	    // ОтображениеФигуры
    string _pictureLocation;		    // ОтображениеКартинки
    struct ExtendedTooltip{
	string name;
	unsigned int id;
    }_extendedTooltip;			    // РасширеннаяПодсказка

public:
    classButton();
    ~classButton();
};

#endif //__CLASS_BUTTON_H__
