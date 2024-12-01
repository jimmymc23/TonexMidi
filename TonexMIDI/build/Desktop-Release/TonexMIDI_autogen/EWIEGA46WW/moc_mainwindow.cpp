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
    QByteArrayData data[62];
    char stringdata0[1341];
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
QT_MOC_LITERAL(5, 72, 12), // "connect_midi"
QT_MOC_LITERAL(6, 85, 20), // "on_bankNumberChanged"
QT_MOC_LITERAL(7, 106, 4), // "bank"
QT_MOC_LITERAL(8, 111, 26), // "on_subBankSelectionChanged"
QT_MOC_LITERAL(9, 138, 7), // "subBank"
QT_MOC_LITERAL(10, 146, 20), // "on_presetDialChanged"
QT_MOC_LITERAL(11, 167, 5), // "value"
QT_MOC_LITERAL(12, 173, 25), // "on_presetUpButton_clicked"
QT_MOC_LITERAL(13, 199, 27), // "on_presetDownButton_clicked"
QT_MOC_LITERAL(14, 227, 29), // "on_presetToggleButton_clicked"
QT_MOC_LITERAL(15, 257, 28), // "on_tunerToggleButton_clicked"
QT_MOC_LITERAL(16, 286, 19), // "updateProgramChange"
QT_MOC_LITERAL(17, 306, 18), // "on_GainDialChanged"
QT_MOC_LITERAL(18, 325, 18), // "on_BassDialChanged"
QT_MOC_LITERAL(19, 344, 20), // "on_MiddleDialChanged"
QT_MOC_LITERAL(20, 365, 20), // "on_TrebleDialChanged"
QT_MOC_LITERAL(21, 386, 25), // "on_ModelVolumeDialChanged"
QT_MOC_LITERAL(22, 412, 22), // "on_ModelMixDialChanged"
QT_MOC_LITERAL(23, 435, 24), // "on_CompThreshDialChanged"
QT_MOC_LITERAL(24, 460, 24), // "on_GateThreshDialChanged"
QT_MOC_LITERAL(25, 485, 22), // "on_PresenceDialChanged"
QT_MOC_LITERAL(26, 508, 19), // "on_DepthDialChanged"
QT_MOC_LITERAL(27, 528, 20), // "on_BassHZdialChanged"
QT_MOC_LITERAL(28, 549, 18), // "on_MidQdialChanged"
QT_MOC_LITERAL(29, 568, 19), // "on_MidHzdialChanged"
QT_MOC_LITERAL(30, 588, 22), // "on_TrebleHzdialChanged"
QT_MOC_LITERAL(31, 611, 27), // "on_eqPositionButton_clicked"
QT_MOC_LITERAL(32, 639, 21), // "on_GateButton_clicked"
QT_MOC_LITERAL(33, 661, 21), // "on_compButton_clicked"
QT_MOC_LITERAL(34, 683, 23), // "on_reverbButton_clicked"
QT_MOC_LITERAL(35, 707, 22), // "on_delayButton_clicked"
QT_MOC_LITERAL(36, 730, 20), // "on_modButton_clicked"
QT_MOC_LITERAL(37, 751, 29), // "on_compPositionButton_clicked"
QT_MOC_LITERAL(38, 781, 22), // "on_compGainDialChanged"
QT_MOC_LITERAL(39, 804, 24), // "on_compAttackDialChanged"
QT_MOC_LITERAL(40, 829, 29), // "on_gatePositionButton_clicked"
QT_MOC_LITERAL(41, 859, 25), // "on_gateReleaseDialChanged"
QT_MOC_LITERAL(42, 885, 23), // "on_gateDepthDialChanged"
QT_MOC_LITERAL(43, 909, 20), // "on_reverbTypeChanged"
QT_MOC_LITERAL(44, 930, 5), // "index"
QT_MOC_LITERAL(45, 936, 31), // "on_reverbPositionButton_clicked"
QT_MOC_LITERAL(46, 968, 24), // "on_reverbTimeDialChanged"
QT_MOC_LITERAL(47, 993, 28), // "on_reverbPreDelayDialChanged"
QT_MOC_LITERAL(48, 1022, 25), // "on_reverbColorDialChanged"
QT_MOC_LITERAL(49, 1048, 23), // "on_reverbMixDialChanged"
QT_MOC_LITERAL(50, 1072, 19), // "on_delayTypeChanged"
QT_MOC_LITERAL(51, 1092, 30), // "on_delayPositionButton_clicked"
QT_MOC_LITERAL(52, 1123, 19), // "on_delayModeChanged"
QT_MOC_LITERAL(53, 1143, 23), // "on_delayTimeDialChanged"
QT_MOC_LITERAL(54, 1167, 27), // "on_delayFeedbackDialChanged"
QT_MOC_LITERAL(55, 1195, 22), // "on_delayMixDialChanged"
QT_MOC_LITERAL(56, 1218, 17), // "on_modTypeChanged"
QT_MOC_LITERAL(57, 1236, 28), // "on_modPositionButton_clicked"
QT_MOC_LITERAL(58, 1265, 18), // "on_modDial1Changed"
QT_MOC_LITERAL(59, 1284, 18), // "on_modDial2Changed"
QT_MOC_LITERAL(60, 1303, 18), // "on_modDial3Changed"
QT_MOC_LITERAL(61, 1322, 18) // "on_modDial4Changed"

    },
    "MainWindow\0on_openMidiPortButton_clicked\0"
    "\0on_midiChannelChanged\0channel\0"
    "connect_midi\0on_bankNumberChanged\0"
    "bank\0on_subBankSelectionChanged\0subBank\0"
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
    "on_eqPositionButton_clicked\0"
    "on_GateButton_clicked\0on_compButton_clicked\0"
    "on_reverbButton_clicked\0on_delayButton_clicked\0"
    "on_modButton_clicked\0on_compPositionButton_clicked\0"
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
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  289,    2, 0x08 /* Private */,
       3,    1,  290,    2, 0x08 /* Private */,
       5,    0,  293,    2, 0x08 /* Private */,
       6,    1,  294,    2, 0x08 /* Private */,
       8,    1,  297,    2, 0x08 /* Private */,
      10,    1,  300,    2, 0x08 /* Private */,
      12,    0,  303,    2, 0x08 /* Private */,
      13,    0,  304,    2, 0x08 /* Private */,
      14,    0,  305,    2, 0x08 /* Private */,
      15,    0,  306,    2, 0x08 /* Private */,
      16,    0,  307,    2, 0x08 /* Private */,
      17,    1,  308,    2, 0x08 /* Private */,
      18,    1,  311,    2, 0x08 /* Private */,
      19,    1,  314,    2, 0x08 /* Private */,
      20,    1,  317,    2, 0x08 /* Private */,
      21,    1,  320,    2, 0x08 /* Private */,
      22,    1,  323,    2, 0x08 /* Private */,
      23,    1,  326,    2, 0x08 /* Private */,
      24,    1,  329,    2, 0x08 /* Private */,
      25,    1,  332,    2, 0x08 /* Private */,
      26,    1,  335,    2, 0x08 /* Private */,
      27,    1,  338,    2, 0x08 /* Private */,
      28,    1,  341,    2, 0x08 /* Private */,
      29,    1,  344,    2, 0x08 /* Private */,
      30,    1,  347,    2, 0x08 /* Private */,
      31,    0,  350,    2, 0x08 /* Private */,
      32,    0,  351,    2, 0x08 /* Private */,
      33,    0,  352,    2, 0x08 /* Private */,
      34,    0,  353,    2, 0x08 /* Private */,
      35,    0,  354,    2, 0x08 /* Private */,
      36,    0,  355,    2, 0x08 /* Private */,
      37,    0,  356,    2, 0x08 /* Private */,
      38,    1,  357,    2, 0x08 /* Private */,
      39,    1,  360,    2, 0x08 /* Private */,
      40,    0,  363,    2, 0x08 /* Private */,
      41,    1,  364,    2, 0x08 /* Private */,
      42,    1,  367,    2, 0x08 /* Private */,
      43,    1,  370,    2, 0x08 /* Private */,
      45,    0,  373,    2, 0x08 /* Private */,
      46,    1,  374,    2, 0x08 /* Private */,
      47,    1,  377,    2, 0x08 /* Private */,
      48,    1,  380,    2, 0x08 /* Private */,
      49,    1,  383,    2, 0x08 /* Private */,
      50,    1,  386,    2, 0x08 /* Private */,
      51,    0,  389,    2, 0x08 /* Private */,
      52,    1,  390,    2, 0x08 /* Private */,
      53,    1,  393,    2, 0x08 /* Private */,
      54,    1,  396,    2, 0x08 /* Private */,
      55,    1,  399,    2, 0x08 /* Private */,
      56,    1,  402,    2, 0x08 /* Private */,
      57,    0,  405,    2, 0x08 /* Private */,
      58,    1,  406,    2, 0x08 /* Private */,
      59,    1,  409,    2, 0x08 /* Private */,
      60,    1,  412,    2, 0x08 /* Private */,
      61,    1,  415,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

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
        case 2: _t->connect_midi(); break;
        case 3: _t->on_bankNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_subBankSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_presetDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_presetUpButton_clicked(); break;
        case 7: _t->on_presetDownButton_clicked(); break;
        case 8: _t->on_presetToggleButton_clicked(); break;
        case 9: _t->on_tunerToggleButton_clicked(); break;
        case 10: _t->updateProgramChange(); break;
        case 11: _t->on_GainDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_BassDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_MiddleDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_TrebleDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_ModelVolumeDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_ModelMixDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_CompThreshDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_GateThreshDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_PresenceDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_DepthDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_BassHZdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_MidQdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_MidHzdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_TrebleHzdialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_eqPositionButton_clicked(); break;
        case 26: _t->on_GateButton_clicked(); break;
        case 27: _t->on_compButton_clicked(); break;
        case 28: _t->on_reverbButton_clicked(); break;
        case 29: _t->on_delayButton_clicked(); break;
        case 30: _t->on_modButton_clicked(); break;
        case 31: _t->on_compPositionButton_clicked(); break;
        case 32: _t->on_compGainDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_compAttackDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_gatePositionButton_clicked(); break;
        case 35: _t->on_gateReleaseDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_gateDepthDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_reverbTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_reverbPositionButton_clicked(); break;
        case 39: _t->on_reverbTimeDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_reverbPreDelayDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->on_reverbColorDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_reverbMixDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_delayTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_delayPositionButton_clicked(); break;
        case 45: _t->on_delayModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->on_delayTimeDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_delayFeedbackDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_delayMixDialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_modTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->on_modPositionButton_clicked(); break;
        case 51: _t->on_modDial1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->on_modDial2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->on_modDial3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->on_modDial4Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
