#ifndef OSHSTUDIO_H
#define OSHSTUDIO_H

#include <QMainWindow>
#include "hidapi.h"
#include <QThread>
#include<QFileDialog>
#include<QTextStream>

#define OSHSTUDIOVERSION 15

//Input/output usb packet
#define BUFFSIZE 64
#define PINS 32
#define AXISES 6

#define LOBYTE(x)  ((uint8_t)(x & 0x00FF))
#define HIBYTE(x)  ((uint8_t)((x & 0xFF00) >>8))

namespace Ui {
class OSHStudio;
//class WorkerThread;
}

struct single_encoders_pins {
    uint8_t pinA;
    uint8_t pinB;
    uint8_t pinA_type;
    uint8_t pinB_type;
};

struct pin_comp_geometry {
    QString Label_name;
    uint16_t Label_X;
    uint16_t Label_Y;
    QString ComboBox_name;
    uint16_t ComboBox_X;
    uint16_t ComboBox_Y;
};


class OSHStudio : public QMainWindow
{
  Q_OBJECT

public:
  explicit OSHStudio(QWidget *parent = 0);
  ~OSHStudio();

private:
  Ui::OSHStudio *ui;
  hid_device *handle_device;

  const QString pin_names[PINS] = {
   {"A0"},
   {"A1"},
   {"A2"},
   {"A3"},
   {"A4"},
   {"A5"},
   {"A6"},
   {"A7"},
   {"A8"},
   {"A9"},
   {"A10"},
   {"A11"},
   {"A12"},
   {"A15"},
   {"B0"},
   {"B1"},
   {"B3"},
   {"B4"},
   {"B5"},
   {"B6"},
   {"B7"},
   {"B8"},
   {"B9"},
   {"B10"},
   {"B11"},
   {"B12"},
   {"B13"},
   {"B14"},
   {"B15"},
   {"C13"},
   {"C14"},
   {"C15"},
  };


  typedef enum {
      Not_Used = 0,
      AnalogNoSmooth = 1,
      AnalogLowSmooth = 2,
      AnalogMedSmooth = 3,
      AnalogHighSmooth = 4,
      Analog2Button = 5,
      Chain_Rotary_PINA = 6,
      Chain_Rotary_PINB = 7,
      Chain_Rotary_Enc_1 = 8,
      Chain_Rotary_Enc_2 = 9,
      Chain_Rotary_Enc_4 = 10,
      Single_Rotary_PINA_1 = 11,
      Single_Rotary_PINB_1 = 12,
      Single_Rotary_PINA_2 = 13,
      Single_Rotary_PINB_2 = 14,
      Single_Rotary_PINA_4 = 15,
      Single_Rotary_PINB_4 = 16,
      Button_ROW = 17,
      Button_COLUMN = 18,
      Button = 19,
      Button_GND = 20,
      RotSwPole = 21,
      RotSwWire = 22,
} pintype;



private slots:
  void getConfig_Slot();
  void writeConfig_Slot();
  void resetConfig_Slot();
  void setConfig_Slot(uint8_t buff[BUFFSIZE], uint8_t);
  void restoreConfig_Slot();
  void send_write_packet(uint8_t buf[BUFFSIZE]);
  void show_USB_ident_uniq(QString ident);
  void show_USB_exch_rate(int interval);
  void comboBoxSEManualConfig();
  void showBoardType(int boardtype);
  uint8_t convertCharToSEType (QChar ch);
  uint8_t convertPinnameToIndex (QString pname);
  void drawHelpSE();
  void drawAxis1Value(uint16_t axis_value);
  void drawAxis2Value(uint16_t axis_value);
  void drawAxis3Value(uint16_t axis_value);
  void drawAxis4Value(uint16_t axis_value);
  void drawAxis5Value(uint16_t axis_value);
  void drawAxis6Value(uint16_t axis_value);
  void drawButtons1Value(uint64_t buttons_value);
  void drawButtons2Value(uint64_t buttons_value);
  void drawPOVSvalue(uint64_t POVS_value);
  void showConnectDeviceInfo(uint8_t firmware_release);
  void hideConnectDeviceInfo();
  QString convertIntToString(int i);
  int convertStringToInt(QString str);
  void showPercentAxisComb(int i);
  void showPin1AxisComb(QString pinname);
  void showPin2AxisComb(QString pinname);
  void showAxisCombSection(bool checked);
  void showAxisCombSlider(bool state);
  void loadFromFile();
  void saveToFile();
  void drawHelp();
  void gatherAllConf();
  void showSingleEncodersTab(void);
  void checkBoxPOV1Changed(int state);
  void checkBoxPOV2Changed(int state);
  void checkBoxPOV3Changed(int state);
  void checkBoxPOV4Changed(int state);
};

class Worker : public QObject {
      Q_OBJECT

public slots:
    void processData(void);

signals:
    void putAxis1Value(uint16_t axis_value);
    void putAxis2Value(uint16_t axis_value);
    void putAxis3Value(uint16_t axis_value);
    void putAxis4Value(uint16_t axis_value);
    void putAxis5Value(uint16_t axis_value);
    void putAxis6Value(uint16_t axis_value);
    void putButtons1Value(uint64_t buttons_value);
    void putButtons2Value(uint64_t buttons_value);
    void putPOVSvalue(uint64_t buttons_value);
    void putDisconnectedDeviceInfo(void);
    void putConnectedDeviceInfo(uint8_t firmware_release);

private:
    uint16_t adc_value=0;
    uint8_t channel=0;

};

#endif // OSHSTUDIO_H
