/****************************************************************************
** Meta object code from reading C++ file 'order.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShineCafe/order.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'order.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOrderENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSOrderENDCLASS = QtMocHelpers::stringData(
    "Order",
    "on_back_pushButton_clicked",
    "",
    "on_increase_pushButton_clicked",
    "on_decrease_pushButton_clicked",
    "on_deleteProduct_pushButton_clicked",
    "on_pushButton_clicked",
    "on_listWidget_currentItemChanged",
    "QListWidgetItem*",
    "current",
    "previous",
    "on_calculate_pushButton_clicked",
    "on_cashPayment_pushButton_clicked",
    "on_creditCardPayment_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOrderENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[6];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[31];
    char stringdata5[36];
    char stringdata6[22];
    char stringdata7[33];
    char stringdata8[17];
    char stringdata9[8];
    char stringdata10[9];
    char stringdata11[32];
    char stringdata12[34];
    char stringdata13[40];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOrderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOrderENDCLASS_t qt_meta_stringdata_CLASSOrderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Order"
        QT_MOC_LITERAL(6, 26),  // "on_back_pushButton_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 30),  // "on_increase_pushButton_clicked"
        QT_MOC_LITERAL(65, 30),  // "on_decrease_pushButton_clicked"
        QT_MOC_LITERAL(96, 35),  // "on_deleteProduct_pushButton_c..."
        QT_MOC_LITERAL(132, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(154, 32),  // "on_listWidget_currentItemChanged"
        QT_MOC_LITERAL(187, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(204, 7),  // "current"
        QT_MOC_LITERAL(212, 8),  // "previous"
        QT_MOC_LITERAL(221, 31),  // "on_calculate_pushButton_clicked"
        QT_MOC_LITERAL(253, 33),  // "on_cashPayment_pushButton_cli..."
        QT_MOC_LITERAL(287, 39)   // "on_creditCardPayment_pushButt..."
    },
    "Order",
    "on_back_pushButton_clicked",
    "",
    "on_increase_pushButton_clicked",
    "on_decrease_pushButton_clicked",
    "on_deleteProduct_pushButton_clicked",
    "on_pushButton_clicked",
    "on_listWidget_currentItemChanged",
    "QListWidgetItem*",
    "current",
    "previous",
    "on_calculate_pushButton_clicked",
    "on_cashPayment_pushButton_clicked",
    "on_creditCardPayment_pushButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOrderENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    2,   73,    2, 0x08,    6 /* Private */,
      11,    0,   78,    2, 0x08,    9 /* Private */,
      12,    0,   79,    2, 0x08,   10 /* Private */,
      13,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Order::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOrderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOrderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOrderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Order, std::true_type>,
        // method 'on_back_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_increase_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_decrease_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteProduct_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_calculate_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cashPayment_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_creditCardPayment_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Order::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Order *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_back_pushButton_clicked(); break;
        case 1: _t->on_increase_pushButton_clicked(); break;
        case 2: _t->on_decrease_pushButton_clicked(); break;
        case 3: _t->on_deleteProduct_pushButton_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_listWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 6: _t->on_calculate_pushButton_clicked(); break;
        case 7: _t->on_cashPayment_pushButton_clicked(); break;
        case 8: _t->on_creditCardPayment_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Order::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Order::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOrderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Order::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
