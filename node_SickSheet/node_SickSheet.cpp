
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


    fp_Employee.name = "Сотрудник";						    	    // Имя
    fp_Employee.title = "";						    	    	    // Заголовок
    fp_Employee.titlePosition = ns_CommonProperty::TITLE_POSITION_AUTO;		    	    // ПоложениеЗаголовка
    fp_Employee.dataPath = "Объект.Сотрудник";				    	   	    // ПутьКДанным
    fp_Employee.commandName = "";						    	    // ИмяКоманды
    fp_Employee.skipOnInput = true;					    	    	    // Пропускать при вводе
    fp_Employee.enabled = false;					       	    	    // АктивизироватьПоУмолчанию
    fp_Employee.viewOnly = false;					    	    	    // Только просмотр
    fp_Employee.autoMaxWidth = true;						    	    // АвтоМаксимальнаяШирина
    fp_Employee.autoMaxHeight = true;						    	    // АвтоМаксимальнаяВысота
    fp_Employee.width = 0;							    	    // Ширина
    fp_Employee.height = 0;							    	    // Высота
    fp_Employee.toolTip = "";								    // Подсказка
    fp_Employee.toolTipRepresentation = ns_CommonProperty::TOOL_TIP_REPRESENTATION_AUTO;    // ОтображениеПодсказки
    fp_Employee.extendedToolTip = "";							    // РасширеннаяПодсказка (м.б. текст, картинки, ссылки. Самостоятельный типДанных?)
        fp_Employee.selectType = true;			    	    	    	    	    // ВыбиратьТип
    fp_Employee.mask = "";			    	    	    	    	    	    // Маска
    fp_Employee.passwordMode = ns_Field::PASSWORD_MODE_NO;		   	    	     // РежимПароля
    fp_Employee.modeSelectFromList = true;		    	    	    	    	    // РежимВыбораИзСписка
    fp_Employee.selectList="";			    	    	    	    	   	     // СписокВыбора
    fp_Employee.buttonDropdownList = ns_Field::BUTTON_DROPDOWN_LIST_NO;	    	    	    // КнопкаВыпадющегоСписка
    fp_Employee.editFormat = "";			    	    	    	    	    // ФорматРедактирования
    fp_Employee.maxValue = 0;		    	    	    	    	    	    	    // МаксимальноеЗначение
    fp_Employee.minValue = 0;		    	    	    	    	    	    	    // МинимальноеЗначение
    fp_Employee.selectGroupElements = "";		    	    	    	    	    // Выбор групп и элементов
    fp_Employee.warningEdit = "";			    	    	    	    	    // Предупреждение при редактировании
    fp_Employee.representationWarningEdit = ns_Field::REPRESENTATION_WARNING_EDIT_AUTO;	    // ОтборажениеПредупреждениеПриРедактировании
    fp_Employee.quickSelect = ns_Field::QUICK_SELECT_AUTO;		   	    	     // БыстрыйВыбор
    fp_Employee.historySelectEnter = ns_Field::HISTORY_SELECT_ENTER_AUTO;	    	    // История выбора при вводе
    fp_Employee.linksSelectParameters = "";	    	    	    	    	    	    // СвязиПараметровВыбора
    fp_Employee.selectParameters = "";		    	    	    	    	    	    // ПараметрыВыбора
    fp_Employee.buttonCreation = ns_Field::BUTTON_CREATION_AUTO;		    	    // Кнопка создания
    fp_Employee.relationshipByType = "";		    	    	    	    	    // СвязьПоТипу
    fp_Employee.selectForm = "";			    	    	    	    	    // ФормаВыбора
    fp_Employee.enterHint = "";			    	    	    	    	    	    // ПодсказкаВвода
    fp_Employee.viewFlagSwitch = ns_Field::VIEW_FLAG_SWITCH_Auto;		     	    // Вид флажка\переключателя
    fp_Employee.scale = false;				    	    	    	    	    // Масштабировать
    fp_Employee.textNotSelectImage = "";						    // Текст невыбранной картинки
    fp_Employee.representation = ns_Field::REPRESENTATION_SMOOTH;			    // Отображение
    fp_Employee.displayPercentages = false;						    // Отображать проценты
    fp_Employee.displayMarking = ns_Field::DISPLAY_MARKING_NOT_DISPLAY;			    // Отображение разметки
    fp_Employee.stepMarking = 1;							    // Шаг разметки
    fp_Employee.scrollbarVertical = ns_Field::SCROLLBAR_AUTO_USE;			    // Вертикальная полоса прокрутки
    fp_Employee.scrollbarHorizontal = ns_Field::SCROLLBAR_AUTO_USE;			    // Горизонтальная полоса прокрутки
    fp_Employee.editing = true;								    // Редактирование
    fp_Employee.displayGrid = false;							    // Отображать сетку
    fp_Employee.modeSelection = ns_Field::MODE_SELECTION_SINGLE;			    // Режим выделения
    fp_Employee.displayMonthsPanel = false;						    // ОтображатьПанельМесяцев
    fp_Employee.commandsComposition = "";						    // СоставКоманд
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
