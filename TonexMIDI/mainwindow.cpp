#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , midiOut(nullptr)
    , midiChannel(0)  // Initialize MIDI channel to 0 (channel 1 for users)
    , midiBank(0)     // Initialize to Bank 0
    , presetBank(0)   // Initialize preset bank to 0
    , subBank("A")    // Initialize sub-bank to A
{
    std::cout << "MainWindow constructor called." << std::endl;  // Debug message

    ui->setupUi(this);

    try {
        midiOut = new RtMidiOut();  // Create an RtMidiOut object

        // Open a virtual port with a specific name
        midiOut->openVirtualPort("TonexMIDI Output");

        std::cout << "Opened virtual MIDI port: TonexMIDI Output" << std::endl;
    } catch (RtMidiError &error) {
        error.printMessage();
        exit(EXIT_FAILURE);
    }
    connect_midi();

    // Connect the MIDI channel spin box
    //connect(ui->midiChannelSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_midiChannelChanged);

    // Connect the preset dial to handle preset changes
    connect(ui->presetDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_bankNumberChanged);


    // get the default midi channel
    midiChannel = ui->midiChannelSpinBox->value() - 1;  // Match the initial value of the spin box


    // Set up the sub-bank combo box
    ui->presetComboBox->addItem("A");
    ui->presetComboBox->addItem("B");
    ui->presetComboBox->addItem("C");

    /// JMG NOTES ON CONNECTIONS
    /// Connections are not needed if there's a function for a button - i.e. presetUpButton connection, isnt needed because there's a function for the click.
    /// BUT it does need to be initialized or that function doesn't work.

    connect(ui->presetComboBox, &QComboBox::currentTextChanged, this, &MainWindow::on_subBankSelectionChanged);

    // connect the dail preset, to the preset label
    connect(ui->presetDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_presetDialChanged);
    ui->presetDial->setValue(25);
    ui->presetDialValueLabel->setText("25");

    // Connect the preset up and down buttons correctly
    //connect(ui->presetUpButton, &QPushButton::clicked, this, &MainWindow::on_presetUpButton_clicked);
    //connect(ui->presetDownButton, &QPushButton::clicked, this, &MainWindow::on_presetDownButton_clicked);


    // Preset Toggle
    // Initialize the preset toggle button state
    presetToggleState = false;  // Set to "Off" initially
    ui->presetToggleButton->setCheckable(true);  // Ensure the button is checkable
    ui->presetToggleButton->setChecked(presetToggleState);
    ui->presetToggleButton->setText("Bypassed");  // Set initial label text

    // Initialize the tuner toggle button state
    tunerToggleState = false;  // Set to "Off" initially
    ui->tunerToggleButton->setCheckable(true);  // Ensure the button is checkable
    ui->tunerToggleButton->setChecked(tunerToggleState);
    ui->tunerToggleButton->setText("Tuner Off");  // Set initial label text
    //connect(ui->tunerToggleButton, &QPushButton::clicked, this, &MainWindow::on_tunerToggleButton_clicked);

    //////////////////// Model and TONE CONTROLS
    connect(ui->ModelVolumeDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_ModelVolumeDialChanged);
    connect(ui->ModelMixDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_ModelMixDialChanged);
    connect(ui->CompThreshDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_CompThreshDialChanged);
    connect(ui->GateThreshDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_GateThreshDialChanged);


    // TONE
    connect(ui->GainDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_GainDialChanged);
    connect(ui->BassDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_BassDialChanged);
    connect(ui->MiddleDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_MiddleDialChanged);
    connect(ui->TrebleDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_TrebleDialChanged);
    connect(ui->PresenceDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_PresenceDialChanged);
    connect(ui->DepthDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_DepthDialChanged);

    // EQ
    connect(ui->BassHZdial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_BassHZdialChanged);
    connect(ui->MidQdial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_MidQdialChanged);
    connect(ui->MidHzdial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_MidHzdialChanged);
    connect(ui->TrebleHzdial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_TrebleHzdialChanged);
    // Position eqPositionButton eqPositionToggleState
    eqPositionToggleState = false;  // Set to "Off" initially
    ui->eqPositionButton->setCheckable(true);  // Ensure the button is checkable
    ui->eqPositionButton->setChecked(eqPositionToggleState);
    ui->eqPositionButton->setText("Before Amp");  // Set initial label text


////////////////////  END - MODEL and TONE CONTROLS

///////////////////// EFFECTS

    // Toggles - on/off and positions

    gateToggleState = false;  // Set to "Off" initially
    ui->GateButton->setCheckable(true);  // Ensure the button is checkable
    ui->GateButton->setChecked(gateToggleState);
    ui->GateButton->setText("Gate Off");  // Set initial label text

    compToggleState = false;  // Set to "Off" initially
    ui->compButton->setCheckable(true);  // Ensure the button is checkable
    ui->compButton->setChecked(compToggleState);
    ui->compButton->setText("Comp Off");  // Set initial label text

    reverbToggleState = false;  // Set to "Off" initially
    ui->reverbButton->setCheckable(true);  // Ensure the button is checkable
    ui->reverbButton->setChecked(reverbToggleState);
    ui->reverbButton->setText("Reverb Off");  // Set initial label text

    delayToggleState = false;  // Set to "Off" initially
    ui->delayButton->setCheckable(true);  // Ensure the button is checkable
    ui->delayButton->setChecked(delayToggleState);
    ui->delayButton->setText("Delay Off");  // Set initial label text

    modToggleState = false;  // Set to "Off" initially
    ui->modButton->setCheckable(true);  // Ensure the button is checkable
    ui->modButton->setChecked(modToggleState);
    ui->modButton->setText("Mod Off");  // Set initial label text

    compPositionToggleState = false;  // Set to "Off" initially
    ui->compPositionButton->setCheckable(true);  // Ensure the button is checkable
    ui->compPositionButton->setChecked(compPositionToggleState);
    ui->compPositionButton->setText("Before Amp");  // Set initial label text

    gatePositionToggleState = false;  // Set to "Off" initially
    ui->gatePositionButton->setCheckable(true);  // Ensure the button is checkable
    ui->gatePositionButton->setChecked(gatePositionToggleState);
    ui->gatePositionButton->setText("Before Amp");  // Set initial label text

    reverbPositionToggleState = false;  // Set to "Off" initially
    ui->reverbPositionButton->setCheckable(true);  // Ensure the button is checkable
    ui->reverbPositionButton->setChecked(reverbPositionToggleState);
    ui->reverbPositionButton->setText("Post Amp");  // Set initial label text

    delayPositionToggleState = false;  // Set to "Off" initially
    ui->delayPositionButton->setCheckable(true);  // Ensure the button is checkable
    ui->delayPositionButton->setChecked(delayPositionToggleState);
    ui->delayPositionButton->setText("Post Amp");  // Set initial label text

    modPositionToggleState = false;  // Set to "Off" initially
    ui->modPositionButton->setCheckable(true);  // Ensure the button is checkable
    ui->modPositionButton->setChecked(modPositionToggleState);
    ui->modPositionButton->setText("Post Amp");  // Set initial label text


///// Compression Dials
    connect(ui->compGainDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_compGainDialChanged);
    connect(ui->compAttackDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_compAttackDialChanged);

///// Noise Gate Dials
    connect(ui->gateReleaseDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_gateReleaseDialChanged);
    connect(ui->gateDepthDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_gateDepthDialChanged);


//// Reverb
    //// Setup Default reveb CCs.
    reverbTimeCC = 59;
    reverbPreDelayCC = 60;
    reverbColorCC = 61;
    reverbMixCC = 62;

    // Reverb Type select
    connect(ui->reverbTypecomboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_reverbTypeChanged);

    // Dials
    connect(ui->reverbTimeDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_reverbTimeDialChanged);
    connect(ui->reverbPreDelayDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_reverbPreDelayDialChanged);
    connect(ui->reverbColorDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_reverbColorDialChanged);
    connect(ui->reverbMixDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_reverbMixDialChanged);

//// Delay
    //// Setup default delay CCs
    delayTimeCC = 5;
    delayFeedbackCC = 6;
    delayModeCC = 7;
    delayMixCC = 8;

    // Delay type select delayTypecomboBox
    connect(ui->delayTypecomboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_delayTypeChanged);

    // Delay Mode
    connect(ui->delayModecomboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_delayModeChanged);

    // Dials
    connect(ui->delayTimeDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_delayTimeDialChanged);
    connect(ui->delayFeedbackDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_delayFeedbackDialChanged);
    connect(ui->delayMixDial, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_delayMixDialChanged);


// Modulation
    // Mod Default CCs -- setup for chorus CC4, not used for chorus.
    modCC1 = 35;
    modCC2 = 36;
    modCC3 = 37;
    modCC4 = 37;

    // Mod Labels
    modlable1 = "Rate";
    modlable2 = "Depth";
    modlable3 = "Level";
    modlable4 = "";

    // Set Mod lavels;
    ui->Modlabel1->setText(modlable1);
    ui->Modlabel2->setText(modlable2);
    ui->Modlabel3->setText(modlable3);
    ui->Modlabel4->setText(modlable4);

    // Disable Dial 4
    ui->modDial4->setEnabled(false);
    ui->modDial4->hide();

    // Delay type modTypecomboBox
    connect(ui->modTypecomboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_modTypeChanged);

    // Dials on_modDial1Changed
    connect(ui->modDial1, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_modDial1Changed);
    connect(ui->modDial2, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_modDial2Changed);
    connect(ui->modDial3, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_modDial3Changed);
    connect(ui->modDial4, QOverload<int>::of(&QDial::valueChanged), this, &MainWindow::on_modDial4Changed);

///// Final Statements
    std::cout << "Connections setup completed." << std::endl;  // Debug message

    // QMetaObject::connectSlotsByName(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    // Clean up MIDI resources
    if (midiOut) {
        delete midiOut;
    }
}

void MainWindow::connect_midi()
{
    if (!midiOut) {
        std::cerr << "MIDI output object not available." << std::endl;
        return;
    }

    unsigned int portCount = midiOut->getPortCount();
    if (portCount == 0) {
        std::cerr << "No MIDI output ports available." << std::endl;
        return;
    }

    // List available MIDI ports
    std::cout << "Available MIDI Output Ports:" << std::endl;
    for (unsigned int i = 0; i < portCount; ++i) {
        std::string portName = midiOut->getPortName(i);
        ui->midiDevicecomboBox->addItem(QString::fromStdString(portName));
        std::cout << "Port " << i << ": " << portName << std::endl;
    }

    // Open the first available port (or allow user to choose if there are multiple)
    try {
        midiOut->openPort(0);  // Opens the first port (you can change this index)
        std::cout << "Opened MIDI port 0: " << midiOut->getPortName(0) << std::endl;

    } catch (RtMidiError &error) {
        error.printMessage();
    }
}

void MainWindow::on_openMidiPortButton_clicked()
{
    try {
        // Get the selected device index from the combo box
        int selectedDevice = ui->midiDevicecomboBox->currentIndex();

        if (selectedDevice < 0 || selectedDevice >= midiOut->getPortCount()) {
            std::cerr << "Invalid device selected." << std::endl;
            return;
        }

        // Close any previously opened port
        if (midiOut->isPortOpen()) {
            midiOut->closePort();
        }

        // Open the selected MIDI device
        midiOut->openPort(selectedDevice);

        std::cout << "Connected to MIDI device: " << midiOut->getPortName(selectedDevice) << std::endl;

    } catch (RtMidiError &error) {
        error.printMessage();
    }
}

void MainWindow::on_midiChannelChanged(int channel)
{
    midiChannel = channel - 1;  // MIDI channels range from 0-15 internally (user inputs 1-16)
    std::cout << "MIDI Channel set to: " << midiChannel + 1 << std::endl;
    connect_midi();
    on_openMidiPortButton_clicked();
}

void MainWindow::on_bankNumberChanged(int bank)
{
    presetBank = bank;
    std::cout << "Preset Bank set to: " << presetBank << std::endl;
    updateProgramChange();
}

void MainWindow::on_subBankSelectionChanged(const QString &subBank)
{
    this->subBank = subBank;
    std::cout << "Sub-Bank set to: " << subBank.toStdString() << std::endl;
    updateProgramChange();
}


void MainWindow::on_presetDialChanged(int value)
{

    // Update the preset bank
    presetBank = value;
    std::cout << "on_presetDialChangedPreset:  Dial set to: " << presetBank << std::endl;

    // Set the value of the label
    ui->presetDialValueLabel->setText(QString::number(value));

    // Trigger program change update
    updateProgramChange();
}


void MainWindow::on_presetUpButton_clicked()
{

    int currentValue = ui->presetDial->value();
    if (currentValue < ui->presetDial->maximum()) {
        ui->presetDial->setValue(currentValue + 1);
        ui->presetDialValueLabel->setText(QString::number(ui->presetDial->value()));
        updateProgramChange();
    }

}

void MainWindow::on_presetDownButton_clicked()
{

    int currentValue = ui->presetDial->value();
    if (currentValue > ui->presetDial->minimum()) {
        ui->presetDial->setValue(currentValue - 1);
        ui->presetDialValueLabel->setText(QString::number(ui->presetDial->value()));
        updateProgramChange();
    }

}

void MainWindow::on_presetToggleButton_clicked()
{
    // Toggle the state using the checked property of the button
    presetToggleState = ui->presetToggleButton->isChecked();

    // Update button text to indicate current state
    if (presetToggleState) {
        ui->presetToggleButton->setText("On");
    } else {
        ui->presetToggleButton->setText("Bypassed");
    }

    // Prepare the MIDI message for CC#12
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(12);                  // Control Change #12 (Preset Toggle)
    message.push_back(presetToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Sent CC#12: " << (presetToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_tunerToggleButton_clicked()
{
    // Toggle the state using the checked property of the button
    tunerToggleState = ui->tunerToggleButton->isChecked();

    // Update button text to indicate current state
    if (tunerToggleState) {
        ui->tunerToggleButton->setText("Tuner On");
    } else {
        ui->tunerToggleButton->setText("Tuner Off");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(9);                   // Control Change #9 (Tuner Toggle)
    message.push_back(tunerToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Sent CC#9: " << (tunerToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

/////////////////////////////////////////////// Tone Controls


void MainWindow::on_ModelVolumeDialChanged(int value)
{

    // Update the preset bank
    value = ui->ModelVolumeDial->value();
    std::cout << "Model Volume set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(103);                   // Control Change #103
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "MODEL VOLUME: Sent CC#102: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_ModelMixDialChanged(int value)
{

    // Update the preset bank
    value = ui->ModelMixDial->value();
    std::cout << "Model Mix set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(104);                   // Control Change #104
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "MODEL MIX: Sent CC#104: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_CompThreshDialChanged(int value)
{

    // Update the preset bank
    value = ui->CompThreshDial->value();
    std::cout << "Comp Threshold set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(19);                   // Control Change #19
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "COMP THRESHOLD: Sent CC#19: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_GateThreshDialChanged(int value)
{

    // Update the preset bank
    value = ui->GateThreshDial->value();
    std::cout << "Gate Threshold set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(15);                   // Control Change #15
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "GATE THRESHOLD: Sent CC#15: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_GainDialChanged(int value)
{

    // Update the preset bank
    value = ui->GainDial->value();
    std::cout << "Gain set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(102);                   // Control Change #103
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "GAIN: Sent CC#103: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_BassDialChanged(int value)
{

    // Update the preset bank
    value = ui->BassDial->value();
    std::cout << "Bass set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(23);                   // Control Change #23)
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "BASS: Sent CC#23: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_MiddleDialChanged(int value)
{

    // Update the preset bank
    value = ui->MiddleDial->value();
    std::cout << "Middle set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(25);                   // Control Change #25
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "MIDDLE: Sent CC#25: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_TrebleDialChanged(int value)
{

    // Update the preset bank
    value = ui->TrebleDial->value();
    std::cout << "Treble set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(28);                   // Control Change #28
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "TREBLE: Sent CC#28: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_PresenceDialChanged(int value)
{

    // Update the preset bank
    value = ui->TrebleDial->value();
    std::cout << "Presence set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(106);                   // Control Change #106
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Presence: Sent CC#106: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_DepthDialChanged(int value)
{

    // Update the preset bank
    value = ui->DepthDial->value();
    std::cout << "Depth set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(107);                   // Control Change #107
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Depth: Sent CC#107: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// EQ

void MainWindow::on_BassHZdialChanged(int value)
{

    // Update the preset bank
    value = ui->BassHZdial->value();
    std::cout << "Bass HZ set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(24);                   // Control Change #24
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Bass Hz: Sent CC#24: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_MidQdialChanged(int value)
{

    // Update the preset bank
    value = ui->MidQdial->value();
    std::cout << "Mid Q set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(26);                   // Control Change #26
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mid Q: Sent CC#26: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}



void MainWindow::on_MidHzdialChanged(int value)
{

    // Update the preset bank
    value = ui->MidHzdial->value();
    std::cout << "Mid Hz set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(27);                   // Control Change #27
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mid Hz: Sent CC#26: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_TrebleHzdialChanged(int value)
{

    // Update the preset bank
    value = ui->TrebleHzdial->value();
    std::cout << "Treble Hz set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(29);                   // Control Change #29
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Treble Hz: Sent CC#29: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}
////// EQ Position eqPositionButton eqPositionToggleState
void MainWindow::on_eqPositionButton_clicked()
{
    // Toggle the state using the checked property of the button
    eqPositionToggleState = ui->eqPositionButton->isChecked();

    // Update button text to indicate current state
    if (eqPositionToggleState) {
        ui->eqPositionButton->setText("Pre Amp");
    } else {
        ui->eqPositionButton->setText("Post Amp");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(30);                   // Control Change #30
    message.push_back(eqPositionToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "EQ Position Button: Sent CC#32: " << (eqPositionToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


///////////////////////////////////////////// Tone Control End

///////////////////////////////////////////// Effects Toggles

void MainWindow::on_GateButton_clicked()
{
    // Toggle the state using the checked property of the button
    gateToggleState = ui->GateButton->isChecked();

    // Update button text to indicate current state
    if (gateToggleState) {
        ui->GateButton->setText("Gate On");
    } else {
        ui->GateButton->setText("Gate Off");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(14);                   // Control Change #14
    message.push_back(gateToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Gate Button: Sent CC#14: " << (gateToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_compButton_clicked()
{
    // Toggle the state using the checked property of the button
    compToggleState = ui->compButton->isChecked();

    // Update button text to indicate current state
    if (compToggleState) {
        ui->compButton->setText("Comp On");
    } else {
        ui->compButton->setText("Comp Off");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(18);                   // Control Change #18
    message.push_back(compToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Comp Button: Sent CC#18: " << (compToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_reverbButton_clicked()
{
    // Toggle the state using the checked property of the button
    reverbToggleState = ui->reverbButton->isChecked();

    // Update button text to indicate current state
    if (reverbToggleState) {
        ui->reverbButton->setText("Reverb On");
    } else {
        ui->reverbButton->setText("Reverb Off");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(75);                   // Control Change #75
    message.push_back(reverbToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Reverb Button: Sent CC#75: " << (reverbToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_delayButton_clicked()
{
    // Toggle the state using the checked property of the button
    delayToggleState = ui->delayButton->isChecked();

    // Update button text to indicate current state
    if (delayToggleState) {
        ui->delayButton->setText("Delay On");
    } else {
        ui->delayButton->setText("Delay Off");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(2);                   // Control Change #2
    message.push_back(delayToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Delay Button: Sent CC#2: " << (delayToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_modButton_clicked()
{
    // Toggle the state using the checked property of the button
    modToggleState = ui->modButton->isChecked();

    // Update button text to indicate current state
    if (modToggleState) {
        ui->modButton->setText("Mod On");
    } else {
        ui->modButton->setText("Mod Off");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(32);                   // Control Change #32
    message.push_back(modToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mod Button: Sent CC#32: " << (modToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//////////////////////////////////////////// Effects Toggles End


//////////////////////////////////////////// Compression Tab


void MainWindow::on_compPositionButton_clicked()
{
    // Toggle the state using the checked property of the button
    compPositionToggleState = ui->compPositionButton->isChecked();

    // Update button text to indicate current state
    if (compPositionToggleState) {
        ui->compPositionButton->setText("After Amp");
    } else {
        ui->compPositionButton->setText("Before Amp");
    }

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(22);                   // Control Change #22
    message.push_back(compPositionToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Comp Position Button: Sent CC#32: " << (compPositionToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_compGainDialChanged(int value)
{

    // Update the preset bank
    value = ui->compGainDial->value();
    std::cout << "Comp Gain Position set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(20);                   // Control Change #20
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Comp Gain Position: Sent CC#20: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_compAttackDialChanged(int value)
{

    // Update the preset bank
    value = ui->compAttackDial->value();
    std::cout << "Comp Attack Position set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(21);                   // Control Change #21
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Comp Attack: Sent CC#21: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//////////////////////////////////////////// Compression Tab End


//////////////////////////////////////////// Noise Gate Tab

void MainWindow::on_gatePositionButton_clicked()
{
    // Toggle the state using the checked property of the button
    gatePositionToggleState = ui->gatePositionButton->isChecked();

    // Update button text to indicate current state
    if (gatePositionToggleState) {
        ui->gatePositionButton->setText("After Amp");
    } else {
        ui->gatePositionButton->setText("Before Amp");
    }

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(13);                   // Control Change #13
    message.push_back(gatePositionToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Gate Position Button: Sent CC#13: " << (gatePositionToggleState ? "On" : "Off") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_gateReleaseDialChanged(int value)
{

    // Update the preset bank
    value = ui->gateReleaseDial->value();
    std::cout << "Gate Release set to: " << value << std::endl;

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(16);                   // Control Change #16
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Gate Release: Sent CC#16: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_gateDepthDialChanged(int value)
{

    // Update the preset bank
    value = ui->gateDepthDial->value();
    std::cout << "Gate Depth set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(17);                   // Control Change #17
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Gate Depth: Sent CC#17: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}
//////////////////////////////////////////// Noise Gate Tab End

//////////////////////////////////////////// Reverb Tab

    //// int reverbTime;
    //// int reverbPreDelay;
    //// int reverbColor;
    //// int reverbMix;

////// reverbTypecomboBox change
void MainWindow::on_reverbTypeChanged(int index)
{
    int type = index + 1;
    int value;

    if (type == 1) {

        // Spring 1
        reverbTimeCC = 59;
        reverbPreDelayCC = 60;
        reverbColorCC = 61;
        reverbMixCC = 62;

    } else if (type == 2) {

        // Spring 2
        reverbTimeCC = 63;
        reverbPreDelayCC = 64;
        reverbColorCC = 65;
        reverbMixCC = 66;

    } else if (type == 3) {

        // Spring 3
        reverbTimeCC = 67;
        reverbPreDelayCC = 68;
        reverbColorCC = 69;
        reverbMixCC = 70;

    } else if (type == 4) {

        // Spring 4
        reverbTimeCC = 80;
        reverbPreDelayCC = 81;
        reverbColorCC = 82;
        reverbMixCC = 83;

    } else if (type == 5) {

        // Room
        reverbTimeCC = 71;
        reverbPreDelayCC = 72;
        reverbColorCC = 73;
        reverbMixCC = 74;

    } else if (type == 6) {

        // Plate
        reverbTimeCC = 76;
        reverbPreDelayCC = 77;
        reverbColorCC = 78;
        reverbMixCC = 79;

    } else {
        std::cout << "Reverb type greater than 6?" << std::endl;
    }
    std::cout << reverbTimeCC << reverbPreDelayCC << reverbColorCC << reverbMixCC  << std::endl;

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(85);                   // Control Change #17
    message.push_back(index);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Reverb Type: Sent CC#85: " << index << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// Toggle position reverbPositionButton
void MainWindow::on_reverbPositionButton_clicked()
{
    // Toggle the state using the checked property of the button
    reverbPositionToggleState = ui->reverbPositionButton->isChecked();

    // Update button text to indicate current state
    if (reverbPositionToggleState) {
        ui->reverbPositionButton->setText("Last");
    } else {
        ui->reverbPositionButton->setText("Post Amp");
    }

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(84);                   // Control Change #84
    message.push_back(reverbPositionToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Reverb Position Button: Sent CC#85: " << (reverbPositionToggleState ? "Last" : "Post Amp") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

void MainWindow::on_reverbTimeDialChanged(int value)
{

    // Update the preset bank
    value = ui->reverbTimeDial->value();
    std::cout << "Reverb Time set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(reverbTimeCC);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Reverb Time: Sent CC#: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


void MainWindow::on_reverbPreDelayDialChanged(int value)
{

    // Update the preset bank
    value = ui->reverbPreDelayDial->value();
    std::cout << "Reverb PreDelay set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(reverbPreDelayCC);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Reverb PreDelay: Sent CC#: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// reverbColorDial on_reverbColorDialDialChanged
void MainWindow::on_reverbColorDialChanged(int value)
{

    // Update the preset bank
    value = ui->reverbColorDial->value();
    std::cout << "Reverb Color set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(reverbColorCC);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Reverb Color: Sent CC#: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// on_reverbMixDialChanged reverbMixCC
void MainWindow::on_reverbMixDialChanged(int value)
{

    // Update the preset bank
    value = ui->reverbMixDial->value();
    std::cout << "Reverb Mix set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(reverbMixCC);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Reverb Mix: Sent CC#: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}


//////////////////////////////////////////// Reverb Tab End


//////////////////////////////////////////// Delay Tab

void MainWindow::on_delayTypeChanged(int index)
{
    int type = index + 1;
    int value;

    if (type == 1) {

        // Digital
        delayTimeCC = 5;
        delayFeedbackCC = 6;
        delayModeCC = 7;
        delayMixCC = 8;

    } else if (type == 2) {

        // Tape
        delayTimeCC = 92;
        delayFeedbackCC = 93;
        delayModeCC = 94;
        delayMixCC = 95;



    } else {
        std::cout << "delay type greater than 2?" << std::endl;
    }
    std::cout << delayTimeCC << delayFeedbackCC << delayModeCC << delayMixCC  << std::endl;

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(3);                   // Control Change #3
    message.push_back(index);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Delay Type: Sent CC#: " << index << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//// Delay position
void MainWindow::on_delayPositionButton_clicked()
{
    // Toggle the state using the checked property of the button
    delayPositionToggleState = ui->delayPositionButton->isChecked();

    // Update button text to indicate current state
    if (delayPositionToggleState) {
        ui->delayPositionButton->setText("Post Amp");
    } else {
        ui->delayPositionButton->setText("Pre Amp");
    }

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(1);                   // Control Change #84
    message.push_back(delayPositionToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Delay Position Button: Sent CC#1: " << (delayPositionToggleState ? "Post Amp" : "Pre Amp") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//// Delay mode on_delayModeChanged
void MainWindow::on_delayModeChanged(int index)
{
    if (index == 1){
        index = 127;
    } else index = 0;

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(delayModeCC);                   // Control Change #delayModeCC
    message.push_back(index);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "CC:" << delayModeCC <<". Delay Mode: Sent Value: " << index << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//// on_delayTimeDialChanged
void MainWindow::on_delayTimeDialChanged(int value)
{

    // Update the preset bank
    value = ui->delayTimeDial->value();
    std::cout << "Delay Time set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(delayTimeCC);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Delay Time: Sent: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//// on_delayFeedbackDialChanged
void MainWindow::on_delayFeedbackDialChanged(int value)
{

    // Update the preset bank
    value = ui->delayFeedbackDial->value();
    std::cout << "Delay Feedback set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(delayFeedbackCC);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Delay Feedback: Sent: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//// on_delayMixDialChanged
void MainWindow::on_delayMixDialChanged(int value)
{

    // Update the preset bank
    value = ui->delayMixDial->value();
    std::cout << "Delay Mix set to: " << value << std::endl;

    // Prepare the MIDI message for CC#9
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(delayMixCC);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Delay Mix: Sent: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//////////////////////////////////////////// Delay Tab End

//////////////////////////////////////////// Mod Tab

//
void MainWindow::on_modTypeChanged(int index)
{
    int type = index + 1;
    int value;

    if (type == 1) {

        // Chorus
        modCC1 = 35;
        modCC2 = 36;
        modCC3 = 37;
        modCC4 = 37;

        // Mod Labels
        modlable1 = "Rate";
        modlable2 = "Depth";
        modlable3 = "Level";
        modlable4 = "";

        // Set Mod lavels;
        ui->Modlabel1->setText(modlable1);
        ui->Modlabel2->setText(modlable2);
        ui->Modlabel3->setText(modlable3);
        ui->Modlabel4->setText(modlable4);

        // Disable Dial 4
        ui->modDial4->setEnabled(false);
        ui->modDial4->hide();

    } else if (type == 2) {

        // Tremolo
        modCC1 = 39;
        modCC2 = 40;
        modCC3 = 41;
        modCC4 = 42;

        // Mod Labels
        modlable1 = "Rate";
        modlable2 = "Shape";
        modlable3 = "Spread";
        modlable4 = "Level";

        // Set Mod lavels;
        ui->Modlabel1->setText(modlable1);
        ui->Modlabel2->setText(modlable2);
        ui->Modlabel3->setText(modlable3);
        ui->Modlabel4->setText(modlable4);

        // Disable Dial 4
        ui->modDial4->setEnabled(true);
        ui->modDial4->show();

    } else if (type == 3) {

        // Phaser
        modCC1 = 44;
        modCC2 = 45;
        modCC3 = 46;

        // Mod Labels
        modlable1 = "Rate";
        modlable2 = "Depth";
        modlable3 = "Level";
        modlable4 = "";

        // Set Mod lavels;
        ui->Modlabel1->setText(modlable1);
        ui->Modlabel2->setText(modlable2);
        ui->Modlabel3->setText(modlable3);
        ui->Modlabel4->setText(modlable4);

        // Disable Dial 4
        ui->modDial4->setEnabled(false);
        ui->modDial4->hide();

    } else if (type == 4) {

        // Flanger
        modCC1 = 48;
        modCC2 = 49;
        modCC3 = 50;
        modCC4 = 51;

        // Mod Labels
        modlable1 = "Rate";
        modlable2 = "Depth";
        modlable3 = "Feedback";
        modlable4 = "Level";

        // Set Mod lavels;
        ui->Modlabel1->setText(modlable1);
        ui->Modlabel2->setText(modlable2);
        ui->Modlabel3->setText(modlable3);
        ui->Modlabel4->setText(modlable4);

        // Disable Dial 4
        ui->modDial4->setEnabled(true);
        ui->modDial4->show();

    } else if (type == 5) {

        // Rotary
        modCC1 = 53;
        modCC2 = 54;
        modCC3 = 55;
        modCC4 = 56;

        // Mod Labels
        modlable1 = "Speed";
        modlable2 = "Radius";
        modlable3 = "Spread";
        modlable4 = "Level";

        // Set Mod lavels;
        ui->Modlabel1->setText(modlable1);
        ui->Modlabel2->setText(modlable2);
        ui->Modlabel3->setText(modlable3);
        ui->Modlabel4->setText(modlable4);

        // Disable Dial 4
        ui->modDial4->setEnabled(true);
        ui->modDial4->show();

    } else {
        std::cout << "Mod type greater than 5?" << std::endl;
    }
    std::cout << modCC1 << modCC2 << modCC3 << modCC4  << std::endl;

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(33);                   // Control Change #33
    message.push_back(index);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Delay Type: Sent CC#: " << index << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// Mod Position
void MainWindow::on_modPositionButton_clicked()
{
    // Toggle the state using the checked property of the button
    modPositionToggleState = ui->modPositionButton->isChecked();

    // Update button text to indicate current state
    if (modPositionToggleState) {
        ui->modPositionButton->setText("Post Amp");
    } else {
        ui->modPositionButton->setText("Pre Amp");
    }

    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(31);                   // Control Change #31
    message.push_back(modPositionToggleState ? 127 : 0); // Value = 127 (On) or 0 (Off)

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mod Position Button: Sent CC#1: " << (modPositionToggleState ? "Post Amp" : "Pre Amp") << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// Mod Dial 1
void MainWindow::on_modDial1Changed(int value)
{

    // Update the preset bank
    value = ui->modDial1->value();
    std::cout << "Mod Dial 1 set to: " << value << std::endl;

    // Prepare the MIDI message
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(modCC1);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mod Dial 1: Sent: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// Mod Dial 2
void MainWindow::on_modDial2Changed(int value)
{

    // Update the preset bank
    value = ui->modDial2->value();
    std::cout << "Mod Dial 2 set to: " << value << std::endl;

    // Prepare the MIDI message
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(modCC2);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mod Dial 2: Sent: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// Mod Dial 3
void MainWindow::on_modDial3Changed(int value)
{

    // Update the preset bank
    value = ui->modDial3->value();
    std::cout << "Mod Dial 3 set to: " << value << std::endl;

    // Prepare the MIDI message
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(modCC3);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mod Dial 3: Sent: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

// Mod Dial 4
void MainWindow::on_modDial4Changed(int value)
{

    // Update the preset bank
    value = ui->modDial4->value();
    std::cout << "Mod Dial 4 set to: " << value << std::endl;

    // Prepare the MIDI message
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(modCC4);
    message.push_back(value);

    // Send the MIDI message
    if (midiOut && midiOut->isPortOpen()) {
        midiOut->sendMessage(&message);
        std::cout << "Mod Dial 4: Sent: " << value << std::endl;
    } else {
        std::cerr << "MIDI port is not open." << std::endl;
    }
}

//////////////////////////////////////////// Mod Tab End



void MainWindow::updateProgramChange()
{
    if (!midiOut || !midiOut->isPortOpen()) {
        std::cerr << "MIDI port is not open." << std::endl;
        return;
    }

    // Calculate the program number based on the preset bank and sub-bank
    int presetIndex = 0;
    if (subBank == "A") {
        presetIndex = 0;
    } else if (subBank == "B") {
        presetIndex = 1;
    } else if (subBank == "C") {
        presetIndex = 2;
    }

    int programNumber = (presetBank * 3) + presetIndex;

    // Determine the MIDI Patch Bank (0 or 1)
    if (presetBank <= 42) {
        midiBank = 0;  // Presets 00A - 42B are in MIDI Patch Bank 0
    } else {
        midiBank = 1;  // Presets 42C - 49C are in MIDI Patch Bank 1
    }

    // Send Bank Select message if necessary
    std::vector<unsigned char> message;
    message.push_back(0xB0 + midiChannel);  // Control Change message, channel
    message.push_back(0);                   // Control Change #0 (Bank Select MSB)
    message.push_back(midiBank);            // Value = 0 (Bank 0) or 1 (Bank 1)
    midiOut->sendMessage(&message);
    message.clear();

    // Send the Program Change message
    message.push_back(0xC0 + midiChannel);  // Program Change message, channel
    message.push_back(programNumber);       // Program number (0-127)
    midiOut->sendMessage(&message);

    std::cout << "Sent Program Change to preset " << programNumber << " on channel " << midiChannel + 1 << " and bank " << midiBank << std::endl;
}
