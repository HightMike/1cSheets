
#include "node_SickSheet.h"

Node_SickList::Node_SickList()
{

}

Node_SickList::~Node_SickList()
{

}

/// ФормаДокумента
Form_Document::Form_Document(string Name, string Synonym = "", string Comment = "")
    :Form(Name, Synonym, Comment)
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
        fp_Employee.view = ns_Field::VIEW_FIELD_INPUT;	// Вид
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

    fp_Month.name = "ПериодРегистрации";						    	    // Имя
    fp_Month.title = "";						    	    	    // Заголовок
    fp_Month.titlePosition = ns_CommonProperty::TITLE_POSITION_AUTO;		    	    // ПоложениеЗаголовка
    fp_Month.dataPath = "МесяцНачисленияСтрокой";				    	   	    // ПутьКДанным
    fp_Month.commandName = "";						    	    // ИмяКоманды
    fp_Month.skipOnInput = true;					    	    	    // Пропускать при вводе
    fp_Month.enabled = false;					       	    	    // АктивизироватьПоУмолчанию
    fp_Month.viewOnly = false;					    	    	    // Только просмотр
    fp_Month.autoMaxWidth = true;						    	    // АвтоМаксимальнаяШирина
    fp_Month.autoMaxHeight = true;						    	    // АвтоМаксимальнаяВысота
    fp_Month.width = 0;							    	    // Ширина
    fp_Month.height = 0;							    	    // Высота
    fp_Month.toolTip = "";								    // Подсказка
    fp_Month.toolTipRepresentation = ns_CommonProperty::TOOL_TIP_REPRESENTATION_AUTO;    // ОтображениеПодсказки
    fp_Month.extendedToolTip = "";							    // РасширеннаяПодсказка (м.б. текст, картинки, ссылки. Самостоятельный типДанных?)
        fp_Month.view = ns_Field::VIEW_FIELD_INPUT;	// Вид
    fp_Month.selectType = true;			    	    	    	    	    // ВыбиратьТип
    fp_Month.mask = "";			    	    	    	    	    	    // Маска
    fp_Month.passwordMode = ns_Field::PASSWORD_MODE_NO;		   	    	     // РежимПароля
    fp_Month.modeSelectFromList = true;		    	    	    	    	    // РежимВыбораИзСписка
    fp_Month.selectList="";			    	    	    	    	   	     // СписокВыбора
    fp_Month.buttonDropdownList = ns_Field::BUTTON_DROPDOWN_LIST_NO;	    	    	    // КнопкаВыпадющегоСписка
    fp_Month.editFormat = "";			    	    	    	    	    // ФорматРедактирования
    fp_Month.maxValue = 0;		    	    	    	    	    	    	    // МаксимальноеЗначение
    fp_Month.minValue = 0;		    	    	    	    	    	    	    // МинимальноеЗначение
    fp_Month.selectGroupElements = "";		    	    	    	    	    // Выбор групп и элементов
    fp_Month.warningEdit = "";			    	    	    	    	    // Предупреждение при редактировании
    fp_Month.representationWarningEdit = ns_Field::REPRESENTATION_WARNING_EDIT_AUTO;	    // ОтборажениеПредупреждениеПриРедактировании
    fp_Month.quickSelect = ns_Field::QUICK_SELECT_AUTO;		   	    	     // БыстрыйВыбор
    fp_Month.historySelectEnter = ns_Field::HISTORY_SELECT_ENTER_AUTO;	    	    // История выбора при вводе
    fp_Month.linksSelectParameters = "";	    	    	    	    	    	    // СвязиПараметровВыбора
    fp_Month.selectParameters = "";		    	    	    	    	    	    // ПараметрыВыбора
    fp_Month.buttonCreation = ns_Field::BUTTON_CREATION_AUTO;		    	    // Кнопка создания
    fp_Month.relationshipByType = "";		    	    	    	    	    // СвязьПоТипу
    fp_Month.selectForm = "";			    	    	    	    	    // ФормаВыбора
    fp_Month.enterHint = "";			    	    	    	    	    	    // ПодсказкаВвода
    fp_Month.viewFlagSwitch = ns_Field::VIEW_FLAG_SWITCH_Auto;		     	    // Вид флажка\переключателя
    fp_Month.scale = false;				    	    	    	    	    // Масштабировать
    fp_Month.textNotSelectImage = "";						    // Текст невыбранной картинки
    fp_Month.representation = ns_Field::REPRESENTATION_SMOOTH;			    // Отображение
    fp_Month.displayPercentages = false;						    // Отображать проценты
    fp_Month.displayMarking = ns_Field::DISPLAY_MARKING_NOT_DISPLAY;			    // Отображение разметки
    fp_Month.stepMarking = 1;							    // Шаг разметки
    fp_Month.scrollbarVertical = ns_Field::SCROLLBAR_AUTO_USE;			    // Вертикальная полоса прокрутки
    fp_Month.scrollbarHorizontal = ns_Field::SCROLLBAR_AUTO_USE;			    // Горизонтальная полоса прокрутки
    fp_Month.editing = true;								    // Редактирование
    fp_Month.displayGrid = false;							    // Отображать сетку
    fp_Month.modeSelection = ns_Field::MODE_SELECTION_SINGLE;			    // Режим выделения
    fp_Month.displayMonthsPanel = false;						    // ОтображатьПанельМесяцев
    fp_Month.commandsComposition = "";						    // СоставКоманд

    fp_NumberLS.name = "НомерЛисткаНетрудоспособности";						    	    // Имя
    fp_NumberLS.title = "";						    	    	    // Заголовок
    fp_NumberLS.titlePosition = ns_CommonProperty::TITLE_POSITION_AUTO;		    	    // ПоложениеЗаголовка
    fp_NumberLS.dataPath = "Объект.НомерЛисткаНетрудоспособности";				    	   	    // ПутьКДанным
    fp_NumberLS.commandName = "";						    	    // ИмяКоманды
    fp_NumberLS.skipOnInput = true;					    	    	    // Пропускать при вводе
    fp_NumberLS.enabled = false;					       	    	    // АктивизироватьПоУмолчанию
    fp_NumberLS.viewOnly = false;					    	    	    // Только просмотр
    fp_NumberLS.autoMaxWidth = true;						    	    // АвтоМаксимальнаяШирина
    fp_NumberLS.autoMaxHeight = true;						    	    // АвтоМаксимальнаяВысота
    fp_NumberLS.width = 0;							    	    // Ширина
    fp_NumberLS.height = 0;							    	    // Высота
    fp_NumberLS.toolTip = "";								    // Подсказка
    fp_NumberLS.toolTipRepresentation = ns_CommonProperty::TOOL_TIP_REPRESENTATION_AUTO;    // ОтображениеПодсказки
    fp_NumberLS.extendedToolTip = "";							    // РасширеннаяПодсказка (м.б. текст, картинки, ссылки. Самостоятельный типДанных?)
        fp_NumberLS.view = ns_Field::VIEW_FIELD_INPUT;	// Вид
    fp_NumberLS.selectType = true;			    	    	    	    	    // ВыбиратьТип
    fp_NumberLS.mask = "";			    	    	    	    	    	    // Маска
    fp_NumberLS.passwordMode = ns_Field::PASSWORD_MODE_NO;		   	    	     // РежимПароля
    fp_NumberLS.modeSelectFromList = true;		    	    	    	    	    // РежимВыбораИзСписка
    fp_NumberLS.selectList="";			    	    	    	    	   	     // СписокВыбора
    fp_NumberLS.buttonDropdownList = ns_Field::BUTTON_DROPDOWN_LIST_NO;	    	    	    // КнопкаВыпадющегоСписка
    fp_NumberLS.editFormat = "";			    	    	    	    	    // ФорматРедактирования
    fp_NumberLS.maxValue = 0;		    	    	    	    	    	    	    // МаксимальноеЗначение
    fp_NumberLS.minValue = 0;		    	    	    	    	    	    	    // МинимальноеЗначение
    fp_NumberLS.selectGroupElements = "";		    	    	    	    	    // Выбор групп и элементов
    fp_NumberLS.warningEdit = "";			    	    	    	    	    // Предупреждение при редактировании
    fp_NumberLS.representationWarningEdit = ns_Field::REPRESENTATION_WARNING_EDIT_AUTO;	    // ОтборажениеПредупреждениеПриРедактировании
    fp_NumberLS.quickSelect = ns_Field::QUICK_SELECT_AUTO;		   	    	     // БыстрыйВыбор
    fp_NumberLS.historySelectEnter = ns_Field::HISTORY_SELECT_ENTER_AUTO;	    	    // История выбора при вводе
    fp_NumberLS.linksSelectParameters = "";	    	    	    	    	    	    // СвязиПараметровВыбора
    fp_NumberLS.selectParameters = "";		    	    	    	    	    	    // ПараметрыВыбора
    fp_NumberLS.buttonCreation = ns_Field::BUTTON_CREATION_AUTO;		    	    // Кнопка создания
    fp_NumberLS.relationshipByType = "";		    	    	    	    	    // СвязьПоТипу
    fp_NumberLS.selectForm = "";			    	    	    	    	    // ФормаВыбора
    fp_NumberLS.enterHint = "";			    	    	    	    	    	    // ПодсказкаВвода
    fp_NumberLS.viewFlagSwitch = ns_Field::VIEW_FLAG_SWITCH_Auto;		     	    // Вид флажка\переключателя
    fp_NumberLS.scale = false;				    	    	    	    	    // Масштабировать
    fp_NumberLS.textNotSelectImage = "";						    // Текст невыбранной картинки
    fp_NumberLS.representation = ns_Field::REPRESENTATION_SMOOTH;			    // Отображение
    fp_NumberLS.displayPercentages = false;						    // Отображать проценты
    fp_NumberLS.displayMarking = ns_Field::DISPLAY_MARKING_NOT_DISPLAY;			    // Отображение разметки
    fp_NumberLS.stepMarking = 1;							    // Шаг разметки
    fp_NumberLS.scrollbarVertical = ns_Field::SCROLLBAR_AUTO_USE;			    // Вертикальная полоса прокрутки
    fp_NumberLS.scrollbarHorizontal = ns_Field::SCROLLBAR_AUTO_USE;			    // Горизонтальная полоса прокрутки
    fp_NumberLS.editing = true;								    // Редактирование
    fp_NumberLS.displayGrid = false;							    // Отображать сетку
    fp_NumberLS.modeSelection = ns_Field::MODE_SELECTION_SINGLE;			    // Режим выделения
    fp_NumberLS.displayMonthsPanel = false;						    // ОтображатьПанельМесяцев
    fp_NumberLS.commandsComposition = "";						    // СоставКоманд
    ///eo Init////
}

Form_Document::~Form_Document()
{

}
/////конец ФормаДокумента/////////////

/// ФормаСписка
Form_List::Form_List(string Name, string Synonym, string Comment)
    :Form(Name, Synonym, Comment)
{

}

Form_List::~Form_List()
{

}
/////конец ФормаСписка/////////////
