/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[61];
    char stringdata0[1323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_openMidiPortButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "on_midiChannelChanged"
QT_MOC_LITERAL(4, 64, 7), // "channel"
QT_MOC_LITERAL(5, 72, 20), // "on_bankNumberChanged"
QT_MOC_LITERAL(6, 93, 4), // "bank"
QT_MOC_LITERAL(7, 98, 26), // "on_subBankSelectionChanged"
QT_MOC_LITERAL(8, 125, 7), // "subBank"
QT_MOC_LITERAL(9, 133, 20), // "on_presetDialChanged"
QT_MOC_LITERAL(10, 154, 5), // "value"
QT_MOC_LITERAL(11, 160, 25), // "on_presetUpButton_clicked"
QT_MOC_LITERAL(12, 186, 27), // "on_presetDownButton_clicked"
QT_MOC_LITERAL(13, 214, 29), // "on_presetToggleButton_clicked"
QT_MOC_LITERAL(14, 244, 28), // "on_tunerToggleButton_clicked"
QT_MOC_LITERAL(15, 273, 19), // "updateProgramChange"
QT_MOC_LITERAL(16, 293, 18), // "on_GainDialChanged"
QT_MOC_LITERAL(17, 312, 18), // "on_BassDialChanged"
QT_MOC_LITERAL(18, 331, 20), // "on_MiddleDialChanged"
QT_MOC_LITERAL(19, 352, 20), // "on_TrebleDialChanged"
QT_MOC_LITERAL(20, 373, 25), // "on_ModelVolumeDialChanged"
QT_MOC_LITERAL(21, 399, 22), // "on_ModelMixDialChanged"
QT_MOC_LITERAL(22, 422, 24), // "on_CompThreshDialChanged"
QT_MOC_LITERAL(23, 447, 24), // "on_GateThreshDialChanged"
QT_MOC_LITERAL(24, 472, 22), // "on_PresenceDialChanged"
QT_MOC_LITERAL(25, 495, 19), // "on_DepthDialChanged"
QT_MOC_LITERAL(26, 515, 20), // "on_BassHZdialChanged"
QT_MOC_LITERAL(27, 536, 18), // "on_MidQdialChanged"
QT_MOC_LITERAL(28, 555, 19), // "on_MidHzdialChanged"
QT_MOC_LITERAL(29, 575, 22), // "on_TrebleHzdialChanged"
QT_MOC_LITERAL(30, 598, 22), // "on_PositiondialChanged"
QT_MOC_LITERAL(31, 621, 21), // "on_GateButton_clicked"
QT_MOC_LITERAL(32, 643, 21), // "on_compButton_clicked"
QT_MOC_LITERAL(33, 665, 23), // "on_reverbButton_clicked"
QT_MOC_LITERAL(34, 689, 22), // "on_delayButton_clicked"
QT_MOC_LITERAL(35, 712, 20), // "on_modButton_clicked"
QT_MOC_LITERAL(36, 733, 29), // "on_compPositionButton_clicked"
QT_MOC_LITERAL(37, 763, 22), // "on_compGainDialChanged"
QT_MOC_LITERAL(38, 786, 24), // "on_compAttackDialChanged"
QT_MOC_LITERAL(39, 811, 29), // "on_gatePositionButton_clicked"
QT_MOC_LITERAL(40, 841, 25), // "on_gateReleaseDialChanged"
QT_MOC_LITERAL(41, 867, 23), // "on_gateDepthDialChanged"
QT_MOC_LITERAL(42, 891, 20), // "on_reverbTypeChanged"
QT_MOC_LITERAL(43, 912, 5), // "index"
QT_MOC_LITERAL(44, 918, 31), // "on_reverbPositionButton_clicked"
QT_MOC_LITERAL(45, 950, 24), // "on_reverbTimeDialChanged"
QT_MOC_LITERAL(46, 975, 28), // "on_reverbPreDelayDialChanged"
QT_MOC_LITERAL(47, 1004, 25), // "on_reverbColorDialChanged"
QT_MOC_LITERAL(48, 1030, 23), // "on_reverbMixDialChanged"
QT_MOC_LITERAL(49, 1054, 19), // "on_delayTypeChanged"
QT_MOC_LITERAL(50, 1074, 30), // "on_delayPositionButton_clicked"
QT_MOC_LITERAL(51, 1105, 19), // "on_delayModeChanged"
QT_MOC_LITERAL(52, 1125, 23), // "on_delayTimeDialChanged"
QT_MOC_LITERAL(53, 1149, 27), // "on_delayFeedbackDialChanged"
QT_MOC_LITERAL(54, 1177, 22), // "on_delayMixDialChanged"
QT_MOC_LITERAL(55, 1200, 17), // "on_modTypeChanged"
QT_MOC_LITERAL(56, 1218, 28), // "on_modPositionButton_clicked"
QT_MOC_LITERAL(57, 1247, 18), // "on_modDial1Changed"
QT_MOC_LITERAL(58, 1266, 18), // "on_modDial2Changed"
QT_MOC_LITERAL(59, 1285, 18), // "on_modDial3Changed"
QT_MOC_LITERAL(60, 1304, 18) // "on_modDial4Changed"

    },
    "MainWindow\0on_openMidiPortButton_clicked\0"
    "\0on_midiChannelChanged\0channel\0"
    "on_bankNumberChanged\0bank\0"
    "on_subBankSelectionChanged\0subBank\0"
    "on_presetDialChanged\0value\0"
    "on_presetUpButton_clicked\0"
    "on_presetDownButton_clicked\0"
    "on_presetToggleButton_clicked\0"
    "on_tunerToggleButton_clicked\0"
    "updateProgramChange\0on_GainDialChanged\0"
    "on_BassDialChanged\0on_MiddleDialChanged\0"
    "on_TrebleDialChanged\0on_ModelVolumeDialChanged\0"
    "on_ModelMixDialChanged\0on_CompThreshDialChanged\0"
    "on_GateThreshDialChanged\0"
    "on_PresenceDialChanged\0on_DepthDialChanged\0"
    "on_BassHZdialChanged\0on_MidQdialChanged\0"
    "on_MidHzdialChanged\0on_TrebleHzdialChanged\0"
    "on_PositiondialChanged\0on_GateButton_clicked\0"
    "on_compButton_clicked\0on_reverbButton_clicked\0"
    "on_delayButton_clicked\0on_modButton_clicked\0"
    "on_compPositionButton_clicked\0"
    "on_compGainDialChanged\0on_compAttackDialChanged\0"
    "on_gatePositionButton_clicked\0"
    "on_gateReleaseDialChanged\0"
    "on_gateDepthDialChanged\0on_reverbTypeChanged\0"
    "index\0on_reverbPositionButton_clicked\0"
    "on_reverbTimeDialChanged\0"
    "on_reverbPreDelayDialChanged\0"
    "on_reverbColorDialChanged\0"
    "on_reverbMixDialChanged\0on_delayTypeChanged\0"
    "on_delayPositionButton_clicked\0"
    "on_delayModeChanged\0on_delayTimeDialChanged\0"
    "on_delayFeedbackDialChanged\0"
    "on_delayMixDialChanged\0on_modTypeChanged\0"
    "on_modPositionButton_clicked\0"
    "on_modDial1Changed\0on_modDial2Changed\0"
    "on_modDial3Changed\0on_modDial4Changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  284,    2, 0x08 /* Private */,
       3,    1,  285,    2, 0x08 /* Private */,
       5,    1,  288,    2, 0x08 /* Private */,
       7,    1,  291,    2, 0x08 /* Private */,
       9,    1,  294,    2, 0x08 /* Private */,
      11,    0,  297,    2, 0x08 /* Private */,
      12,    0,  298,    2, 0x08 /* Private */,
      13,    0,  299,    2, 0x08 /* Private */,
      14,    0,  300,    2, 0x08 /* Private */,
      15,    0,  301,    2, 0x08 /* Private */,
      16,    1,  302,    2, 0x08 /* Private */,
      17,    1,  305,    2, 0x08 /* Private */,
      18,    1,  308,    2, 0x08 /* Private */,
      19,    1,  311,    2, 0x08 /* Private */,
      20,    1,  314,    2, 0x08 /* Private */,
      21,    1,  317,    2, 0x08 /* Private */,
      22,    1,  320,    2, 0x08 /* Private */,
      23,    1,  323,    2, 0x08 /* Private */,
      24,    1,  326,    2, 0x08 /* Private */,
      25,    1,  329,    2, 0x08 /* Private */,
      26,    1,  332,    2, 0x08 /* Private */,
      27,    1,  335,    2, 0x08 /* Private */,
      28,    1,  338,    2, 0x08 /* Private */,
      29,    1,  341,    2, 0x08 /* Private */,
      30,    1,  344,    2, 0x08 /* Private */,
      31,    0,  347,    2, 0x08 /* Private */,
      32,    0,  348,    2, 0x08 /* Private */,
      33,    0,  349,    2, 0x08 /* Private */,
      34,    0,  350,    2, 0x08 /* Private */,
      35,    0,  351,    2, 0x08 /* Private */,
      36,    0,  352,    2, 0x08 /* Private */,
      37,    1,  353,    2, 0x08 /* Private */,
      38,    1,  356,    2, 0x08 /* Private */,
      39,    0,  359,    2, 0x08 /* Private */,
      40,    1,  360,    2, 0x08 /* Private */,
      41,    1,  363,    2, 0x08 /* Private */,
      42,    1,  366,    2, 0x08 /* Private */,
      44,    0,  369,    2, 0x08 /* Private */,
      45,    1,  370,    2, 0x08 /* Private */,
      46,    1,  373,    2, 0x08 /* Private */,
      47,    1,  376,    2, 0x08 /* Private */,
      48,    1,  379,    2, 0x08 /* Private */,
      49,    1,  382,    2, 0x08 /* Private */,
      50,    0,  385,    2, 0x08 /* Private */,
      51,    1,  386,    2, 0x08 /* Private */,
      52,    1,  389,    2, 0x08 /* Private */,
      53,    1,  392,    2, 0x08 /* Private */,
      54,    1,  395,    2, 0x08 /* Private */,
      55,    1,  398,    2, 0x08 /* Private */,
      56,    0,  401,    2, 0x08 /* Private */,
      57,    1,  402,    2, 0x08 /* Private */,
      58,    1,  405,    2, 0x08 /* Private */,
      59,    1,  408,    2, 0x08 /* Private */,
      60,    1,  411,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_openMidiPortButton_clicked(); break;
        case 1: _t->on_midiChannelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_bankNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_subBankSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_presetDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_presetUpButton_clicked(); break;
        case 6: _t->on_presetDownButton_clicked(); break;
        case 7: _t->on_presetToggleButton_clicked(); break;
        case 8: _t->on_tunerToggleButton_clicked(); break;
        case 9: _t->updateProgramChange(); break;
        case 10: _t->on_GainDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_BassDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_MiddleDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_TrebleDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_ModelVolumeDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_ModelMixDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_CompThreshDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_GateThreshDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_PresenceDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_DepthDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_BassHZdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_MidQdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_MidHzdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_TrebleHzdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_PositiondialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_GateButton_clicked(); break;
        case 26: _t->on_compButton_clicked(); break;
        case 27: _t->on_reverbButton_clicked(); break;
        case 28: _t->on_delayButton_clicked(); break;
        case 29: _t->on_modButton_clicked(); break;
        case 30: _t->on_compPositionButton_clicked(); break;
        case 31: _t->on_compGainDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_compAttackDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_gatePositionButton_clicked(); break;
        case 34: _t->on_gateReleaseDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_gateDepthDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_reverbTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_reverbPositionButton_clicked(); break;
        case 38: _t->on_reverbTimeDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_reverbPreDelayDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_reverbColorDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->on_reverbMixDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_delayTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_delayPositionButton_clicked(); break;
        case 44: _t->on_delayModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->on_delayTimeDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->on_delayFeedbackDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_delayMixDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_modTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_modPositionButton_clicked(); break;
        case 50: _t->on_modDial1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->on_modDial2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->on_modDial3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->on_modDial4Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
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
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
