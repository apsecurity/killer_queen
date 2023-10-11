/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt_nameless/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[68];
    char stringdata0[1115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "returnAdd2Stack"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "returnAdd3Stack"
QT_MOC_LITERAL(4, 44, 15), // "returnAdd4Stack"
QT_MOC_LITERAL(5, 60, 13), // "returnPressed"
QT_MOC_LITERAL(6, 74, 11), // "returnshell"
QT_MOC_LITERAL(7, 86, 5), // "clear"
QT_MOC_LITERAL(8, 92, 5), // "about"
QT_MOC_LITERAL(9, 98, 29), // "on_MainWindow_iconSizeChanged"
QT_MOC_LITERAL(10, 128, 8), // "iconSize"
QT_MOC_LITERAL(11, 137, 21), // "on_zbt_bin_sh_clicked"
QT_MOC_LITERAL(12, 159, 30), // "on_reversetcpbindshell_clicked"
QT_MOC_LITERAL(13, 190, 19), // "on_shutdown_clicked"
QT_MOC_LITERAL(14, 210, 19), // "on_add_user_clicked"
QT_MOC_LITERAL(15, 230, 20), // "on_nop_trace_clicked"
QT_MOC_LITERAL(16, 251, 22), // "on_nop_trace_2_clicked"
QT_MOC_LITERAL(17, 274, 17), // "on_reboot_clicked"
QT_MOC_LITERAL(18, 292, 17), // "on_bin_sh_clicked"
QT_MOC_LITERAL(19, 310, 25), // "on_label_11_linkActivated"
QT_MOC_LITERAL(20, 336, 4), // "link"
QT_MOC_LITERAL(21, 341, 18), // "pushButton_clicked"
QT_MOC_LITERAL(22, 360, 9), // "bad_bytes"
QT_MOC_LITERAL(23, 370, 3), // "bad"
QT_MOC_LITERAL(24, 374, 22), // "on_byte_button_clicked"
QT_MOC_LITERAL(25, 397, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(26, 419, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(27, 443, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(28, 459, 10), // "QKeyEvent*"
QT_MOC_LITERAL(29, 470, 1), // "e"
QT_MOC_LITERAL(30, 472, 13), // "shell2payload"
QT_MOC_LITERAL(31, 486, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(32, 510, 5), // "build"
QT_MOC_LITERAL(33, 516, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(34, 540, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(35, 564, 18), // "on_hot_key_clicked"
QT_MOC_LITERAL(36, 583, 25), // "on_actionOpen_2_triggered"
QT_MOC_LITERAL(37, 609, 28), // "on_actionDecompile_triggered"
QT_MOC_LITERAL(38, 638, 13), // "get_file_size"
QT_MOC_LITERAL(39, 652, 6), // "size_t"
QT_MOC_LITERAL(40, 659, 2), // "fd"
QT_MOC_LITERAL(41, 662, 12), // "is_valid_64b"
QT_MOC_LITERAL(42, 675, 14), // "unsigned char*"
QT_MOC_LITERAL(43, 690, 1), // "p"
QT_MOC_LITERAL(44, 692, 15), // "inject_code_64b"
QT_MOC_LITERAL(45, 708, 11), // "const char*"
QT_MOC_LITERAL(46, 720, 8), // "filename"
QT_MOC_LITERAL(47, 729, 4), // "code"
QT_MOC_LITERAL(48, 734, 20), // "get_base_address_64b"
QT_MOC_LITERAL(49, 755, 18), // "long long unsigned"
QT_MOC_LITERAL(50, 774, 24), // "find_section_by_name_64b"
QT_MOC_LITERAL(51, 799, 11), // "Elf64_Shdr*"
QT_MOC_LITERAL(52, 811, 4), // "name"
QT_MOC_LITERAL(53, 816, 23), // "find_segment_header_64b"
QT_MOC_LITERAL(54, 840, 11), // "Elf64_Phdr*"
QT_MOC_LITERAL(55, 852, 30), // "find_section_for_injection_64b"
QT_MOC_LITERAL(56, 883, 38), // "on_actionOpen_File_to_Inject_..."
QT_MOC_LITERAL(57, 922, 12), // "is_valid_32b"
QT_MOC_LITERAL(58, 935, 15), // "inject_code_32b"
QT_MOC_LITERAL(59, 951, 5), // "char*"
QT_MOC_LITERAL(60, 957, 23), // "find_segment_header_32b"
QT_MOC_LITERAL(61, 981, 11), // "Elf32_Phdr*"
QT_MOC_LITERAL(62, 993, 30), // "find_section_for_injection_32b"
QT_MOC_LITERAL(63, 1024, 11), // "Elf32_Shdr*"
QT_MOC_LITERAL(64, 1036, 20), // "get_base_address_32b"
QT_MOC_LITERAL(65, 1057, 8), // "uint32_t"
QT_MOC_LITERAL(66, 1066, 24), // "find_section_by_name_32b"
QT_MOC_LITERAL(67, 1091, 23) // "on_actionOpen_triggered"

    },
    "MainWindow\0returnAdd2Stack\0\0returnAdd3Stack\0"
    "returnAdd4Stack\0returnPressed\0returnshell\0"
    "clear\0about\0on_MainWindow_iconSizeChanged\0"
    "iconSize\0on_zbt_bin_sh_clicked\0"
    "on_reversetcpbindshell_clicked\0"
    "on_shutdown_clicked\0on_add_user_clicked\0"
    "on_nop_trace_clicked\0on_nop_trace_2_clicked\0"
    "on_reboot_clicked\0on_bin_sh_clicked\0"
    "on_label_11_linkActivated\0link\0"
    "pushButton_clicked\0bad_bytes\0bad\0"
    "on_byte_button_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0keyReleaseEvent\0"
    "QKeyEvent*\0e\0shell2payload\0"
    "on_pushButton_3_clicked\0build\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_hot_key_clicked\0on_actionOpen_2_triggered\0"
    "on_actionDecompile_triggered\0get_file_size\0"
    "size_t\0fd\0is_valid_64b\0unsigned char*\0"
    "p\0inject_code_64b\0const char*\0filename\0"
    "code\0get_base_address_64b\0long long unsigned\0"
    "find_section_by_name_64b\0Elf64_Shdr*\0"
    "name\0find_segment_header_64b\0Elf64_Phdr*\0"
    "find_section_for_injection_64b\0"
    "on_actionOpen_File_to_Inject_triggered\0"
    "is_valid_32b\0inject_code_32b\0char*\0"
    "find_segment_header_32b\0Elf32_Phdr*\0"
    "find_section_for_injection_32b\0"
    "Elf32_Shdr*\0get_base_address_32b\0"
    "uint32_t\0find_section_by_name_32b\0"
    "on_actionOpen_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x06 /* Public */,
       3,    0,  245,    2, 0x06 /* Public */,
       4,    0,  246,    2, 0x06 /* Public */,
       5,    0,  247,    2, 0x06 /* Public */,
       6,    0,  248,    2, 0x06 /* Public */,
       7,    0,  249,    2, 0x06 /* Public */,
       8,    0,  250,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  251,    2, 0x08 /* Private */,
      11,    0,  254,    2, 0x08 /* Private */,
      12,    0,  255,    2, 0x08 /* Private */,
      13,    0,  256,    2, 0x08 /* Private */,
      14,    0,  257,    2, 0x08 /* Private */,
      15,    0,  258,    2, 0x08 /* Private */,
      16,    0,  259,    2, 0x08 /* Private */,
      17,    0,  260,    2, 0x08 /* Private */,
      18,    0,  261,    2, 0x08 /* Private */,
      19,    1,  262,    2, 0x08 /* Private */,
      21,    0,  265,    2, 0x08 /* Private */,
      22,    1,  266,    2, 0x08 /* Private */,
      24,    0,  269,    2, 0x08 /* Private */,
      25,    0,  270,    2, 0x08 /* Private */,
      26,    0,  271,    2, 0x08 /* Private */,
      27,    1,  272,    2, 0x08 /* Private */,
      30,    0,  275,    2, 0x08 /* Private */,
      31,    0,  276,    2, 0x08 /* Private */,
      32,    0,  277,    2, 0x08 /* Private */,
      33,    0,  278,    2, 0x08 /* Private */,
      34,    0,  279,    2, 0x08 /* Private */,
      35,    0,  280,    2, 0x08 /* Private */,
      36,    0,  281,    2, 0x08 /* Private */,
      37,    0,  282,    2, 0x08 /* Private */,
      38,    1,  283,    2, 0x08 /* Private */,
      41,    1,  286,    2, 0x08 /* Private */,
      44,    4,  289,    2, 0x08 /* Private */,
      48,    1,  298,   49, 0x08 /* Private */,
      50,    2,  301,    2, 0x08 /* Private */,
      53,    1,  306,    2, 0x08 /* Private */,
      55,    1,  309,    2, 0x08 /* Private */,
      56,    0,  312,    2, 0x08 /* Private */,
      57,    1,  313,    2, 0x08 /* Private */,
      58,    4,  316,    2, 0x08 /* Private */,
      60,    1,  325,    2, 0x08 /* Private */,
      62,    1,  328,    2, 0x08 /* Private */,
      64,    1,  331,    2, 0x08 /* Private */,
      66,    2,  334,    2, 0x08 /* Private */,
      67,    0,  339,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 39, QMetaType::Int,   40,
    QMetaType::Bool, 0x80000000 | 42,   43,
    QMetaType::Void, 0x80000000 | 45, 0x80000000 | 45, 0x80000000 | 42, QMetaType::Int,   46,   47,   43,   40,
    QMetaType::Int, 0x80000000 | 42,   43,
    0x80000000 | 51, 0x80000000 | 42, 0x80000000 | 45,   43,   52,
    0x80000000 | 54, 0x80000000 | 42,   43,
    0x80000000 | 51, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 42,   43,
    QMetaType::Void, 0x80000000 | 45, 0x80000000 | 59, 0x80000000 | 42, QMetaType::Int,   46,   47,   43,   40,
    0x80000000 | 61, 0x80000000 | 42,   43,
    0x80000000 | 63, 0x80000000 | 42,   43,
    0x80000000 | 65, 0x80000000 | 42,   43,
    0x80000000 | 63, 0x80000000 | 42, 0x80000000 | 45,   43,   52,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnAdd2Stack(); break;
        case 1: _t->returnAdd3Stack(); break;
        case 2: _t->returnAdd4Stack(); break;
        case 3: _t->returnPressed(); break;
        case 4: _t->returnshell(); break;
        case 5: _t->clear(); break;
        case 6: _t->about(); break;
        case 7: _t->on_MainWindow_iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 8: _t->on_zbt_bin_sh_clicked(); break;
        case 9: _t->on_reversetcpbindshell_clicked(); break;
        case 10: _t->on_shutdown_clicked(); break;
        case 11: _t->on_add_user_clicked(); break;
        case 12: _t->on_nop_trace_clicked(); break;
        case 13: _t->on_nop_trace_2_clicked(); break;
        case 14: _t->on_reboot_clicked(); break;
        case 15: _t->on_bin_sh_clicked(); break;
        case 16: _t->on_label_11_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->pushButton_clicked(); break;
        case 18: { int _r = _t->bad_bytes((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: _t->on_byte_button_clicked(); break;
        case 20: _t->on_pushButton_clicked(); break;
        case 21: _t->on_pushButton_2_clicked(); break;
        case 22: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 23: _t->shell2payload(); break;
        case 24: _t->on_pushButton_3_clicked(); break;
        case 25: _t->build(); break;
        case 26: _t->on_pushButton_4_clicked(); break;
        case 27: _t->on_pushButton_5_clicked(); break;
        case 28: _t->on_hot_key_clicked(); break;
        case 29: _t->on_actionOpen_2_triggered(); break;
        case 30: _t->on_actionDecompile_triggered(); break;
        case 31: { size_t _r = _t->get_file_size((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< size_t*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->is_valid_64b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->inject_code_64b((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< unsigned char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 34: { int _r = _t->get_base_address_64b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { Elf64_Shdr* _r = _t->find_section_by_name_64b((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Elf64_Shdr**>(_a[0]) = _r; }  break;
        case 36: { Elf64_Phdr* _r = _t->find_segment_header_64b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Elf64_Phdr**>(_a[0]) = _r; }  break;
        case 37: { Elf64_Shdr* _r = _t->find_section_for_injection_64b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Elf64_Shdr**>(_a[0]) = _r; }  break;
        case 38: _t->on_actionOpen_File_to_Inject_triggered(); break;
        case 39: { bool _r = _t->is_valid_32b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->inject_code_32b((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< unsigned char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 41: { Elf32_Phdr* _r = _t->find_segment_header_32b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Elf32_Phdr**>(_a[0]) = _r; }  break;
        case 42: { Elf32_Shdr* _r = _t->find_section_for_injection_32b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Elf32_Shdr**>(_a[0]) = _r; }  break;
        case 43: { uint32_t _r = _t->get_base_address_32b((*reinterpret_cast< unsigned char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint32_t*>(_a[0]) = _r; }  break;
        case 44: { Elf32_Shdr* _r = _t->find_section_by_name_32b((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Elf32_Shdr**>(_a[0]) = _r; }  break;
        case 45: _t->on_actionOpen_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::returnAdd2Stack)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::returnAdd3Stack)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::returnAdd4Stack)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::returnPressed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::returnshell)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::clear)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::about)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::returnAdd2Stack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::returnAdd3Stack()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::returnAdd4Stack()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainWindow::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MainWindow::returnshell()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void MainWindow::clear()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MainWindow::about()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
