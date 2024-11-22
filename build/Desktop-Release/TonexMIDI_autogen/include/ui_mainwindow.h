/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *openMidiPortButton;
    QComboBox *presetComboBox;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *midiChannelSpinBox;
    QDial *presetDial;
    QLabel *presetDialValueLabel;
    QPushButton *presetToggleButton;
    QPushButton *tunerToggleButton;
    QPushButton *presetUpButton;
    QPushButton *presetDownButton;
    QDial *GainDial;
    QLabel *label_2;
    QDial *BassDial;
    QLabel *label_4;
    QDial *MiddleDial;
    QLabel *label_5;
    QLabel *label_6;
    QDial *TrebleDial;
    QDial *ModelVolumeDial;
    QLabel *label_7;
    QLabel *label_8;
    QDial *ModelMixDial;
    QTabWidget *tabWidget;
    QWidget *tab;
    QDial *gateReleaseDial;
    QDial *gateDepthDial;
    QPushButton *gatePositionButton;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *tab_2;
    QLabel *label_18;
    QDial *compGainDial;
    QLabel *label_19;
    QDial *compAttackDial;
    QPushButton *compPositionButton;
    QWidget *Reverb;
    QComboBox *reverbTypecomboBox;
    QDial *reverbTimeDial;
    QDial *reverbPreDelayDial;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *reverbPositionButton;
    QDial *reverbMixDial;
    QLabel *label_28;
    QLabel *label_29;
    QDial *reverbColorDial;
    QWidget *Delay;
    QComboBox *delayTypecomboBox;
    QPushButton *delayPositionButton;
    QComboBox *delayModecomboBox;
    QDial *delayFeedbackDial;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QDial *delayMixDial;
    QDial *delayTimeDial;
    QWidget *Modulation;
    QPushButton *modPositionButton;
    QDial *modDial2;
    QComboBox *modTypecomboBox;
    QDial *modDial1;
    QLabel *Modlabel3;
    QLabel *Modlabel1;
    QDial *modDial3;
    QLabel *Modlabel2;
    QDial *modDial4;
    QLabel *Modlabel4;
    QLabel *label_9;
    QDial *CompThreshDial;
    QLabel *label_10;
    QDial *GateThreshDial;
    QLabel *label_11;
    QDial *PresenceDial;
    QLabel *label_12;
    QDial *DepthDial;
    QDial *BassHZdial;
    QLabel *label_13;
    QDial *MidQdial;
    QLabel *label_14;
    QDial *MidHzdial;
    QLabel *label_15;
    QLabel *label_16;
    QDial *TrebleHzdial;
    QFrame *line;
    QLabel *label_17;
    QDial *Positiondial;
    QPushButton *compButton;
    QPushButton *GateButton;
    QPushButton *reverbButton;
    QPushButton *delayButton;
    QPushButton *modButton;
    QMenuBar *menubar;
    QMenu *menuTonex_Midi;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(914, 775);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openMidiPortButton = new QPushButton(centralwidget);
        openMidiPortButton->setObjectName(QString::fromUtf8("openMidiPortButton"));
        openMidiPortButton->setGeometry(QRect(800, 10, 80, 23));
        presetComboBox = new QComboBox(centralwidget);
        presetComboBox->setObjectName(QString::fromUtf8("presetComboBox"));
        presetComboBox->setGeometry(QRect(200, 80, 79, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 50, 58, 15));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(690, 10, 97, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        midiChannelSpinBox = new QSpinBox(layoutWidget);
        midiChannelSpinBox->setObjectName(QString::fromUtf8("midiChannelSpinBox"));
        midiChannelSpinBox->setMaximum(15);
        midiChannelSpinBox->setValue(2);

        horizontalLayout->addWidget(midiChannelSpinBox);

        presetDial = new QDial(centralwidget);
        presetDial->setObjectName(QString::fromUtf8("presetDial"));
        presetDial->setGeometry(QRect(20, 30, 181, 131));
        presetDial->setMaximum(49);
        presetDial->setSliderPosition(25);
        presetDial->setWrapping(true);
        presetDial->setNotchTarget(10.699999999999999);
        presetDial->setNotchesVisible(true);
        presetDialValueLabel = new QLabel(centralwidget);
        presetDialValueLabel->setObjectName(QString::fromUtf8("presetDialValueLabel"));
        presetDialValueLabel->setGeometry(QRect(80, 140, 61, 51));
        QFont font;
        font.setPointSize(14);
        presetDialValueLabel->setFont(font);
        presetDialValueLabel->setFrameShadow(QFrame::Plain);
        presetDialValueLabel->setAlignment(Qt::AlignCenter);
        presetToggleButton = new QPushButton(centralwidget);
        presetToggleButton->setObjectName(QString::fromUtf8("presetToggleButton"));
        presetToggleButton->setGeometry(QRect(200, 120, 80, 31));
        QPalette palette;
        QBrush brush(QColor(224, 27, 36, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush2);
        QBrush brush3(QColor(153, 193, 241, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush2);
        presetToggleButton->setPalette(palette);
        presetToggleButton->setCheckable(true);
        tunerToggleButton = new QPushButton(centralwidget);
        tunerToggleButton->setObjectName(QString::fromUtf8("tunerToggleButton"));
        tunerToggleButton->setGeometry(QRect(310, 10, 80, 23));
        tunerToggleButton->setCheckable(true);
        presetUpButton = new QPushButton(centralwidget);
        presetUpButton->setObjectName(QString::fromUtf8("presetUpButton"));
        presetUpButton->setGeometry(QRect(310, 80, 80, 31));
        presetUpButton->setAutoRepeat(false);
        presetDownButton = new QPushButton(centralwidget);
        presetDownButton->setObjectName(QString::fromUtf8("presetDownButton"));
        presetDownButton->setGeometry(QRect(310, 120, 80, 31));
        GainDial = new QDial(centralwidget);
        GainDial->setObjectName(QString::fromUtf8("GainDial"));
        GainDial->setGeometry(QRect(70, 230, 101, 91));
        GainDial->setMaximum(127);
        GainDial->setValue(64);
        GainDial->setNotchesVisible(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 320, 58, 15));
        label_2->setAlignment(Qt::AlignCenter);
        BassDial = new QDial(centralwidget);
        BassDial->setObjectName(QString::fromUtf8("BassDial"));
        BassDial->setGeometry(QRect(200, 230, 101, 91));
        BassDial->setMaximum(127);
        BassDial->setValue(64);
        BassDial->setNotchesVisible(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 320, 58, 15));
        label_4->setAlignment(Qt::AlignCenter);
        MiddleDial = new QDial(centralwidget);
        MiddleDial->setObjectName(QString::fromUtf8("MiddleDial"));
        MiddleDial->setGeometry(QRect(330, 230, 101, 91));
        MiddleDial->setMaximum(127);
        MiddleDial->setValue(64);
        MiddleDial->setNotchesVisible(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 320, 58, 15));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 320, 58, 15));
        label_6->setAlignment(Qt::AlignCenter);
        TrebleDial = new QDial(centralwidget);
        TrebleDial->setObjectName(QString::fromUtf8("TrebleDial"));
        TrebleDial->setGeometry(QRect(460, 230, 101, 91));
        TrebleDial->setMaximum(127);
        TrebleDial->setValue(64);
        TrebleDial->setNotchesVisible(true);
        ModelVolumeDial = new QDial(centralwidget);
        ModelVolumeDial->setObjectName(QString::fromUtf8("ModelVolumeDial"));
        ModelVolumeDial->setGeometry(QRect(430, 70, 101, 91));
        ModelVolumeDial->setMaximum(127);
        ModelVolumeDial->setValue(127);
        ModelVolumeDial->setNotchesVisible(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(450, 160, 58, 15));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 160, 58, 15));
        label_8->setAlignment(Qt::AlignCenter);
        ModelMixDial = new QDial(centralwidget);
        ModelMixDial->setObjectName(QString::fromUtf8("ModelMixDial"));
        ModelMixDial->setGeometry(QRect(550, 70, 101, 91));
        ModelMixDial->setMaximum(127);
        ModelMixDial->setValue(127);
        ModelMixDial->setNotchesVisible(true);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(11, 490, 891, 241));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gateReleaseDial = new QDial(tab);
        gateReleaseDial->setObjectName(QString::fromUtf8("gateReleaseDial"));
        gateReleaseDial->setGeometry(QRect(240, 60, 101, 91));
        gateReleaseDial->setMaximum(127);
        gateReleaseDial->setValue(64);
        gateReleaseDial->setNotchesVisible(true);
        gateDepthDial = new QDial(tab);
        gateDepthDial->setObjectName(QString::fromUtf8("gateDepthDial"));
        gateDepthDial->setGeometry(QRect(370, 60, 101, 91));
        gateDepthDial->setMaximum(127);
        gateDepthDial->setValue(64);
        gateDepthDial->setNotchesVisible(true);
        gatePositionButton = new QPushButton(tab);
        gatePositionButton->setObjectName(QString::fromUtf8("gatePositionButton"));
        gatePositionButton->setGeometry(QRect(109, 40, 111, 23));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(260, 150, 58, 15));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(390, 150, 58, 15));
        label_21->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(260, 150, 58, 15));
        label_18->setAlignment(Qt::AlignCenter);
        compGainDial = new QDial(tab_2);
        compGainDial->setObjectName(QString::fromUtf8("compGainDial"));
        compGainDial->setGeometry(QRect(240, 60, 101, 91));
        compGainDial->setMaximum(127);
        compGainDial->setValue(64);
        compGainDial->setNotchesVisible(true);
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(390, 150, 58, 15));
        label_19->setAlignment(Qt::AlignCenter);
        compAttackDial = new QDial(tab_2);
        compAttackDial->setObjectName(QString::fromUtf8("compAttackDial"));
        compAttackDial->setGeometry(QRect(370, 60, 101, 91));
        compAttackDial->setMaximum(127);
        compAttackDial->setValue(64);
        compAttackDial->setNotchesVisible(true);
        compPositionButton = new QPushButton(tab_2);
        compPositionButton->setObjectName(QString::fromUtf8("compPositionButton"));
        compPositionButton->setGeometry(QRect(109, 40, 111, 23));
        tabWidget->addTab(tab_2, QString());
        Reverb = new QWidget();
        Reverb->setObjectName(QString::fromUtf8("Reverb"));
        reverbTypecomboBox = new QComboBox(Reverb);
        reverbTypecomboBox->addItem(QString());
        reverbTypecomboBox->addItem(QString());
        reverbTypecomboBox->addItem(QString());
        reverbTypecomboBox->addItem(QString());
        reverbTypecomboBox->addItem(QString());
        reverbTypecomboBox->addItem(QString());
        reverbTypecomboBox->setObjectName(QString::fromUtf8("reverbTypecomboBox"));
        reverbTypecomboBox->setGeometry(QRect(341, 10, 101, 23));
        reverbTypecomboBox->setMaxVisibleItems(6);
        reverbTypecomboBox->setMinimumContentsLength(1);
        reverbTimeDial = new QDial(Reverb);
        reverbTimeDial->setObjectName(QString::fromUtf8("reverbTimeDial"));
        reverbTimeDial->setGeometry(QRect(240, 60, 101, 91));
        reverbTimeDial->setMaximum(127);
        reverbTimeDial->setValue(64);
        reverbTimeDial->setNotchesVisible(true);
        reverbPreDelayDial = new QDial(Reverb);
        reverbPreDelayDial->setObjectName(QString::fromUtf8("reverbPreDelayDial"));
        reverbPreDelayDial->setGeometry(QRect(370, 60, 101, 91));
        reverbPreDelayDial->setMaximum(127);
        reverbPreDelayDial->setValue(64);
        reverbPreDelayDial->setNotchesVisible(true);
        label_26 = new QLabel(Reverb);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(260, 150, 58, 15));
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(Reverb);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(390, 150, 58, 15));
        label_27->setAlignment(Qt::AlignCenter);
        reverbPositionButton = new QPushButton(Reverb);
        reverbPositionButton->setObjectName(QString::fromUtf8("reverbPositionButton"));
        reverbPositionButton->setGeometry(QRect(100, 40, 111, 23));
        reverbMixDial = new QDial(Reverb);
        reverbMixDial->setObjectName(QString::fromUtf8("reverbMixDial"));
        reverbMixDial->setGeometry(QRect(630, 60, 101, 91));
        reverbMixDial->setMaximum(127);
        reverbMixDial->setValue(64);
        reverbMixDial->setNotchesVisible(true);
        label_28 = new QLabel(Reverb);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(650, 150, 58, 15));
        label_28->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(Reverb);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(520, 150, 58, 15));
        label_29->setAlignment(Qt::AlignCenter);
        reverbColorDial = new QDial(Reverb);
        reverbColorDial->setObjectName(QString::fromUtf8("reverbColorDial"));
        reverbColorDial->setGeometry(QRect(500, 60, 101, 91));
        reverbColorDial->setMaximum(127);
        reverbColorDial->setValue(64);
        reverbColorDial->setNotchesVisible(true);
        tabWidget->addTab(Reverb, QString());
        Delay = new QWidget();
        Delay->setObjectName(QString::fromUtf8("Delay"));
        delayTypecomboBox = new QComboBox(Delay);
        delayTypecomboBox->addItem(QString());
        delayTypecomboBox->addItem(QString());
        delayTypecomboBox->setObjectName(QString::fromUtf8("delayTypecomboBox"));
        delayTypecomboBox->setGeometry(QRect(341, 10, 101, 23));
        delayTypecomboBox->setMaxVisibleItems(6);
        delayTypecomboBox->setMinimumContentsLength(1);
        delayPositionButton = new QPushButton(Delay);
        delayPositionButton->setObjectName(QString::fromUtf8("delayPositionButton"));
        delayPositionButton->setGeometry(QRect(100, 40, 111, 23));
        delayModecomboBox = new QComboBox(Delay);
        delayModecomboBox->addItem(QString());
        delayModecomboBox->addItem(QString());
        delayModecomboBox->setObjectName(QString::fromUtf8("delayModecomboBox"));
        delayModecomboBox->setGeometry(QRect(480, 10, 101, 23));
        delayFeedbackDial = new QDial(Delay);
        delayFeedbackDial->setObjectName(QString::fromUtf8("delayFeedbackDial"));
        delayFeedbackDial->setGeometry(QRect(370, 60, 101, 91));
        delayFeedbackDial->setMaximum(127);
        delayFeedbackDial->setValue(64);
        delayFeedbackDial->setNotchesVisible(true);
        label_30 = new QLabel(Delay);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(520, 150, 58, 15));
        label_30->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(Delay);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(390, 150, 58, 15));
        label_31->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(Delay);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(260, 150, 58, 15));
        label_32->setAlignment(Qt::AlignCenter);
        delayMixDial = new QDial(Delay);
        delayMixDial->setObjectName(QString::fromUtf8("delayMixDial"));
        delayMixDial->setGeometry(QRect(500, 60, 101, 91));
        delayMixDial->setMaximum(127);
        delayMixDial->setValue(64);
        delayMixDial->setNotchesVisible(true);
        delayTimeDial = new QDial(Delay);
        delayTimeDial->setObjectName(QString::fromUtf8("delayTimeDial"));
        delayTimeDial->setGeometry(QRect(240, 60, 101, 91));
        delayTimeDial->setMaximum(127);
        delayTimeDial->setValue(64);
        delayTimeDial->setNotchesVisible(true);
        tabWidget->addTab(Delay, QString());
        Modulation = new QWidget();
        Modulation->setObjectName(QString::fromUtf8("Modulation"));
        modPositionButton = new QPushButton(Modulation);
        modPositionButton->setObjectName(QString::fromUtf8("modPositionButton"));
        modPositionButton->setGeometry(QRect(100, 40, 111, 23));
        modDial2 = new QDial(Modulation);
        modDial2->setObjectName(QString::fromUtf8("modDial2"));
        modDial2->setGeometry(QRect(370, 60, 101, 91));
        modDial2->setMaximum(127);
        modDial2->setValue(64);
        modDial2->setNotchesVisible(true);
        modTypecomboBox = new QComboBox(Modulation);
        modTypecomboBox->addItem(QString());
        modTypecomboBox->addItem(QString());
        modTypecomboBox->addItem(QString());
        modTypecomboBox->addItem(QString());
        modTypecomboBox->addItem(QString());
        modTypecomboBox->setObjectName(QString::fromUtf8("modTypecomboBox"));
        modTypecomboBox->setGeometry(QRect(341, 10, 101, 23));
        modTypecomboBox->setMaxVisibleItems(6);
        modTypecomboBox->setMinimumContentsLength(1);
        modDial1 = new QDial(Modulation);
        modDial1->setObjectName(QString::fromUtf8("modDial1"));
        modDial1->setGeometry(QRect(240, 60, 101, 91));
        modDial1->setMaximum(127);
        modDial1->setValue(64);
        modDial1->setNotchesVisible(true);
        Modlabel3 = new QLabel(Modulation);
        Modlabel3->setObjectName(QString::fromUtf8("Modlabel3"));
        Modlabel3->setGeometry(QRect(520, 150, 58, 15));
        Modlabel3->setAlignment(Qt::AlignCenter);
        Modlabel1 = new QLabel(Modulation);
        Modlabel1->setObjectName(QString::fromUtf8("Modlabel1"));
        Modlabel1->setGeometry(QRect(260, 150, 58, 15));
        Modlabel1->setAlignment(Qt::AlignCenter);
        modDial3 = new QDial(Modulation);
        modDial3->setObjectName(QString::fromUtf8("modDial3"));
        modDial3->setGeometry(QRect(500, 60, 101, 91));
        modDial3->setMaximum(127);
        modDial3->setValue(64);
        modDial3->setNotchesVisible(true);
        Modlabel2 = new QLabel(Modulation);
        Modlabel2->setObjectName(QString::fromUtf8("Modlabel2"));
        Modlabel2->setGeometry(QRect(390, 150, 58, 15));
        Modlabel2->setAlignment(Qt::AlignCenter);
        modDial4 = new QDial(Modulation);
        modDial4->setObjectName(QString::fromUtf8("modDial4"));
        modDial4->setGeometry(QRect(630, 60, 101, 91));
        modDial4->setMaximum(127);
        modDial4->setValue(64);
        modDial4->setNotchesVisible(true);
        Modlabel4 = new QLabel(Modulation);
        Modlabel4->setObjectName(QString::fromUtf8("Modlabel4"));
        Modlabel4->setGeometry(QRect(650, 150, 58, 15));
        Modlabel4->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Modulation, QString());
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(680, 160, 81, 31));
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setWordWrap(true);
        CompThreshDial = new QDial(centralwidget);
        CompThreshDial->setObjectName(QString::fromUtf8("CompThreshDial"));
        CompThreshDial->setGeometry(QRect(670, 70, 101, 91));
        CompThreshDial->setMaximum(127);
        CompThreshDial->setValue(64);
        CompThreshDial->setNotchesVisible(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(800, 160, 81, 31));
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setWordWrap(true);
        GateThreshDial = new QDial(centralwidget);
        GateThreshDial->setObjectName(QString::fromUtf8("GateThreshDial"));
        GateThreshDial->setGeometry(QRect(790, 70, 101, 91));
        GateThreshDial->setMaximum(127);
        GateThreshDial->setValue(64);
        GateThreshDial->setNotchesVisible(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(610, 320, 58, 15));
        label_11->setAlignment(Qt::AlignCenter);
        PresenceDial = new QDial(centralwidget);
        PresenceDial->setObjectName(QString::fromUtf8("PresenceDial"));
        PresenceDial->setGeometry(QRect(590, 230, 101, 91));
        PresenceDial->setMaximum(127);
        PresenceDial->setValue(64);
        PresenceDial->setNotchesVisible(true);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(740, 320, 58, 15));
        label_12->setAlignment(Qt::AlignCenter);
        DepthDial = new QDial(centralwidget);
        DepthDial->setObjectName(QString::fromUtf8("DepthDial"));
        DepthDial->setGeometry(QRect(720, 230, 101, 91));
        DepthDial->setMaximum(127);
        DepthDial->setValue(64);
        DepthDial->setNotchesVisible(true);
        BassHZdial = new QDial(centralwidget);
        BassHZdial->setObjectName(QString::fromUtf8("BassHZdial"));
        BassHZdial->setGeometry(QRect(220, 340, 61, 64));
        BassHZdial->setMaximum(127);
        BassHZdial->setValue(64);
        BassHZdial->setSliderPosition(64);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(220, 400, 58, 15));
        label_13->setAlignment(Qt::AlignCenter);
        MidQdial = new QDial(centralwidget);
        MidQdial->setObjectName(QString::fromUtf8("MidQdial"));
        MidQdial->setGeometry(QRect(320, 340, 61, 64));
        MidQdial->setMaximum(127);
        MidQdial->setValue(64);
        MidQdial->setSliderPosition(64);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(320, 400, 58, 15));
        label_14->setAlignment(Qt::AlignCenter);
        MidHzdial = new QDial(centralwidget);
        MidHzdial->setObjectName(QString::fromUtf8("MidHzdial"));
        MidHzdial->setGeometry(QRect(380, 340, 61, 64));
        MidHzdial->setMaximum(127);
        MidHzdial->setValue(64);
        MidHzdial->setSliderPosition(64);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(380, 400, 58, 15));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(480, 400, 58, 15));
        label_16->setAlignment(Qt::AlignCenter);
        TrebleHzdial = new QDial(centralwidget);
        TrebleHzdial->setObjectName(QString::fromUtf8("TrebleHzdial"));
        TrebleHzdial->setGeometry(QRect(480, 340, 61, 64));
        TrebleHzdial->setMaximum(127);
        TrebleHzdial->setValue(64);
        TrebleHzdial->setSliderPosition(64);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 190, 851, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(660, 400, 81, 16));
        label_17->setAlignment(Qt::AlignCenter);
        Positiondial = new QDial(centralwidget);
        Positiondial->setObjectName(QString::fromUtf8("Positiondial"));
        Positiondial->setGeometry(QRect(670, 340, 61, 64));
        Positiondial->setMaximum(127);
        Positiondial->setSingleStep(127);
        Positiondial->setPageStep(127);
        Positiondial->setValue(0);
        Positiondial->setSliderPosition(0);
        compButton = new QPushButton(centralwidget);
        compButton->setObjectName(QString::fromUtf8("compButton"));
        compButton->setGeometry(QRect(320, 450, 80, 23));
        GateButton = new QPushButton(centralwidget);
        GateButton->setObjectName(QString::fromUtf8("GateButton"));
        GateButton->setGeometry(QRect(210, 450, 80, 23));
        reverbButton = new QPushButton(centralwidget);
        reverbButton->setObjectName(QString::fromUtf8("reverbButton"));
        reverbButton->setGeometry(QRect(430, 450, 80, 23));
        delayButton = new QPushButton(centralwidget);
        delayButton->setObjectName(QString::fromUtf8("delayButton"));
        delayButton->setGeometry(QRect(540, 450, 80, 23));
        modButton = new QPushButton(centralwidget);
        modButton->setObjectName(QString::fromUtf8("modButton"));
        modButton->setGeometry(QRect(650, 450, 80, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 914, 20));
        menuTonex_Midi = new QMenu(menubar);
        menuTonex_Midi->setObjectName(QString::fromUtf8("menuTonex_Midi"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuTonex_Midi->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);
        reverbTypecomboBox->setCurrentIndex(0);
        delayTypecomboBox->setCurrentIndex(0);
        modTypecomboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tonex MIDI Controller", nullptr));
        openMidiPortButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Preset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "channel", nullptr));
        presetDialValueLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        presetToggleButton->setText(QString());
        tunerToggleButton->setText(QCoreApplication::translate("MainWindow", "Tuner", nullptr));
        presetUpButton->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        presetDownButton->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
#if QT_CONFIG(whatsthis)
        GainDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#if QT_CONFIG(whatsthis)
        BassDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("MainWindow", "Bass", nullptr));
#if QT_CONFIG(whatsthis)
        MiddleDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_5->setText(QCoreApplication::translate("MainWindow", "Middle", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Treble", nullptr));
#if QT_CONFIG(whatsthis)
        TrebleDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        ModelVolumeDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_7->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Mix", nullptr));
#if QT_CONFIG(whatsthis)
        ModelMixDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        gateReleaseDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        gateDepthDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        gatePositionButton->setText(QCoreApplication::translate("MainWindow", "Gate Position", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Release", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Depth", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Noise Gate", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#if QT_CONFIG(whatsthis)
        compGainDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_19->setText(QCoreApplication::translate("MainWindow", "Attack", nullptr));
#if QT_CONFIG(whatsthis)
        compAttackDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        compPositionButton->setText(QCoreApplication::translate("MainWindow", "Comp Position", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Compressor", nullptr));
        reverbTypecomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Spring 1", nullptr));
        reverbTypecomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Spring 2", nullptr));
        reverbTypecomboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Spring 3", nullptr));
        reverbTypecomboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Spring 4", nullptr));
        reverbTypecomboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Room", nullptr));
        reverbTypecomboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Plate", nullptr));

        reverbTypecomboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Spring 1", nullptr));
#if QT_CONFIG(whatsthis)
        reverbTimeDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        reverbPreDelayDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_26->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Pre Delay", nullptr));
        reverbPositionButton->setText(QCoreApplication::translate("MainWindow", "Reverb Position", nullptr));
#if QT_CONFIG(whatsthis)
        reverbMixDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_28->setText(QCoreApplication::translate("MainWindow", "Mix", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
#if QT_CONFIG(whatsthis)
        reverbColorDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        tabWidget->setTabText(tabWidget->indexOf(Reverb), QCoreApplication::translate("MainWindow", "Reverb", nullptr));
        delayTypecomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Digital", nullptr));
        delayTypecomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Tape", nullptr));

        delayTypecomboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Digital", nullptr));
        delayPositionButton->setText(QCoreApplication::translate("MainWindow", "Delay Position", nullptr));
        delayModecomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        delayModecomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Ping Pong", nullptr));

#if QT_CONFIG(whatsthis)
        delayFeedbackDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_30->setText(QCoreApplication::translate("MainWindow", "Mix", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Feedback", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
#if QT_CONFIG(whatsthis)
        delayMixDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        delayTimeDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        tabWidget->setTabText(tabWidget->indexOf(Delay), QCoreApplication::translate("MainWindow", "Delay", nullptr));
        modPositionButton->setText(QCoreApplication::translate("MainWindow", "Mod Position", nullptr));
#if QT_CONFIG(whatsthis)
        modDial2->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        modTypecomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Chorus", nullptr));
        modTypecomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Tremolo", nullptr));
        modTypecomboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Phaser", nullptr));
        modTypecomboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Flanger", nullptr));
        modTypecomboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Rotary", nullptr));

        modTypecomboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Chorus", nullptr));
#if QT_CONFIG(whatsthis)
        modDial1->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        Modlabel3->setText(QCoreApplication::translate("MainWindow", "Mod 3", nullptr));
        Modlabel1->setText(QCoreApplication::translate("MainWindow", "Mod 1", nullptr));
#if QT_CONFIG(whatsthis)
        modDial3->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        Modlabel2->setText(QCoreApplication::translate("MainWindow", "Mod 2", nullptr));
#if QT_CONFIG(whatsthis)
        modDial4->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        Modlabel4->setText(QCoreApplication::translate("MainWindow", "Mod 4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Modulation), QCoreApplication::translate("MainWindow", "Modulation", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Comp Threshold", nullptr));
#if QT_CONFIG(whatsthis)
        CompThreshDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_10->setText(QCoreApplication::translate("MainWindow", "Gate Threshold", nullptr));
#if QT_CONFIG(whatsthis)
        GateThreshDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("MainWindow", "Presence", nullptr));
#if QT_CONFIG(whatsthis)
        PresenceDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_12->setText(QCoreApplication::translate("MainWindow", "Depth", nullptr));
#if QT_CONFIG(whatsthis)
        DepthDial->setWhatsThis(QCoreApplication::translate("MainWindow", "Gain", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_13->setText(QCoreApplication::translate("MainWindow", "Bass Hz", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Mid Q", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Mid Hz", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Treble Hz", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "EQ Position", nullptr));
        compButton->setText(QCoreApplication::translate("MainWindow", "Compressor", nullptr));
        GateButton->setText(QCoreApplication::translate("MainWindow", "Gate", nullptr));
        reverbButton->setText(QCoreApplication::translate("MainWindow", "Reverb", nullptr));
        delayButton->setText(QCoreApplication::translate("MainWindow", "Delay", nullptr));
        modButton->setText(QCoreApplication::translate("MainWindow", "Modulation", nullptr));
        menuTonex_Midi->setTitle(QCoreApplication::translate("MainWindow", "Tonex Midi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
