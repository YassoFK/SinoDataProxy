/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "sendNameToStr"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "name"
QT_MOC_LITERAL(4, 31, 16), // "ShowTextEditMenu"
QT_MOC_LITERAL(5, 48, 3), // "pos"
QT_MOC_LITERAL(6, 52, 10), // "AddConnect"
QT_MOC_LITERAL(7, 63, 13), // "UpdateConnect"
QT_MOC_LITERAL(8, 77, 13), // "DeleteConnect"
QT_MOC_LITERAL(9, 91, 12), // "StartConnect"
QT_MOC_LITERAL(10, 104, 11), // "StopConnect"
QT_MOC_LITERAL(11, 116, 7), // "GetName"
QT_MOC_LITERAL(12, 124, 11), // "GetInputStr"
QT_MOC_LITERAL(13, 136, 11), // "connectedit"
QT_MOC_LITERAL(14, 148, 4), // "edit"
QT_MOC_LITERAL(15, 153, 7), // "GetTime"
QT_MOC_LITERAL(16, 161, 7), // "strname"
QT_MOC_LITERAL(17, 169, 5), // "ctime"
QT_MOC_LITERAL(18, 175, 7), // "strbyte"
QT_MOC_LITERAL(19, 183, 6), // "strbps"
QT_MOC_LITERAL(20, 190, 10), // "strmessage"
QT_MOC_LITERAL(21, 201, 13), // "GetStopStatus"
QT_MOC_LITERAL(22, 215, 11), // "Timer1Timer"
QT_MOC_LITERAL(23, 227, 20), // "on_action1_triggered"
QT_MOC_LITERAL(24, 248, 20), // "on_action2_triggered"
QT_MOC_LITERAL(25, 269, 21) // "on_action_2_triggered"

    },
    "MainWindow\0sendNameToStr\0\0name\0"
    "ShowTextEditMenu\0pos\0AddConnect\0"
    "UpdateConnect\0DeleteConnect\0StartConnect\0"
    "StopConnect\0GetName\0GetInputStr\0"
    "connectedit\0edit\0GetTime\0strname\0ctime\0"
    "strbyte\0strbps\0strmessage\0GetStopStatus\0"
    "Timer1Timer\0on_action1_triggered\0"
    "on_action2_triggered\0on_action_2_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   92,    2, 0x08 /* Private */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    1,  100,    2, 0x08 /* Private */,
      12,    1,  103,    2, 0x08 /* Private */,
      15,    5,  106,    2, 0x08 /* Private */,
      21,    1,  117,    2, 0x08 /* Private */,
      22,    0,  120,    2, 0x08 /* Private */,
      23,    0,  121,    2, 0x08 /* Private */,
      24,    0,  122,    2, 0x08 /* Private */,
      25,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendNameToStr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ShowTextEditMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->AddConnect(); break;
        case 3: _t->UpdateConnect(); break;
        case 4: _t->DeleteConnect(); break;
        case 5: _t->StartConnect(); break;
        case 6: _t->StopConnect(); break;
        case 7: _t->GetName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->GetInputStr((*reinterpret_cast< connectedit(*)>(_a[1]))); break;
        case 9: _t->GetTime((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 10: _t->GetStopStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->Timer1Timer(); break;
        case 12: _t->on_action1_triggered(); break;
        case 13: _t->on_action2_triggered(); break;
        case 14: _t->on_action_2_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendNameToStr)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendNameToStr(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
