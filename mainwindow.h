#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <RtMidi.h>  // Include the RtMidi library

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT  // Make sure this is here

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_openMidiPortButton_clicked();
    void on_midiChannelChanged(int channel);
    void on_bankNumberChanged(int bank);
    void on_subBankSelectionChanged(const QString &subBank);
    void on_presetDialChanged(int value);
    void on_presetUpButton_clicked();
    void on_presetDownButton_clicked();
    void on_presetToggleButton_clicked();
    void on_tunerToggleButton_clicked();
    void updateProgramChange();

    // Model Tone controls
    void on_GainDialChanged(int value);
    void on_BassDialChanged(int value);
    void on_MiddleDialChanged(int value);
    void on_TrebleDialChanged(int value);
    void on_ModelVolumeDialChanged(int value);
    void on_ModelMixDialChanged(int value);
    void on_CompThreshDialChanged(int value);
    void on_GateThreshDialChanged(int value);
    void on_PresenceDialChanged(int value);
    void on_DepthDialChanged(int value);


    //EQ
    void on_BassHZdialChanged(int value);
    void on_MidQdialChanged(int value);
    void on_MidHzdialChanged(int value);
    void on_TrebleHzdialChanged(int value);
    void on_PositiondialChanged(int value);

    // Effects buttons
    void on_GateButton_clicked();
    void on_compButton_clicked();
    void on_reverbButton_clicked();
    void on_delayButton_clicked();
    void on_modButton_clicked();

    // Compression
    void on_compPositionButton_clicked();
    // Compression Dials
    void on_compGainDialChanged(int value);
    void on_compAttackDialChanged(int value);

    // Noise Gate
    void on_gatePositionButton_clicked();
    // Noise Gate Dials
    void on_gateReleaseDialChanged(int value);
    void on_gateDepthDialChanged(int value);

    // Reverb Controls
    void on_reverbTypeChanged(int index);
    // Reverb Position
    void on_reverbPositionButton_clicked();
    // Reverb Dials
    void on_reverbTimeDialChanged(int value);
    void on_reverbPreDelayDialChanged(int value);
    void on_reverbColorDialChanged(int value);
    void on_reverbMixDialChanged(int value);

    // Delay Controls
    void on_delayTypeChanged(int index);
    // Delay postion;
    void on_delayPositionButton_clicked();
    // Delay mode
    void on_delayModeChanged(int index);
    // Delay Dials
    void on_delayTimeDialChanged(int value);
    void on_delayFeedbackDialChanged(int value);
    void on_delayMixDialChanged(int value);

    // Mod Controls
    void on_modTypeChanged(int index);
    // Mod Position
    void on_modPositionButton_clicked();
    // Mod Dials
    void on_modDial1Changed(int value);
    void on_modDial2Changed(int value);
    void on_modDial3Changed(int value);
    void on_modDial4Changed(int value);

private:
    Ui::MainWindow *ui;
    RtMidiOut *midiOut;
    int midiChannel;
    int midiBank;
    int presetBank;
    QString subBank;
    bool presetToggleState;
    bool tunerToggleState;
    bool gateToggleState;
    bool compToggleState;
    bool reverbToggleState;
    bool delayToggleState;
    bool modToggleState;
    bool compPositionToggleState;
    bool gatePositionToggleState;
    bool reverbPositionToggleState;
    bool delayPositionToggleState;
    bool modPositionToggleState;

    /// Reverb CCs
    int reverbTimeCC;
    int reverbPreDelayCC;
    int reverbColorCC;
    int reverbMixCC;

    /// Delay CCs
    int delayTimeCC;
    int delayFeedbackCC;
    int delayModeCC;
    int delayMixCC;

    /// Mod CCs
    int modCC1;
    int modCC2;
    int modCC3;
    int modCC4;

    /// Mod Labels
    QString modlable1;
    QString modlable2;
    QString modlable3;
    QString modlable4;
};

#endif // MAINWINDOW_H
