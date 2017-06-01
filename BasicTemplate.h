#pragma once

//BasicTemplate
  #include "Helpers.h"
  #include "FFS.h"
  #include "WIFI.h"
  #include "WEBServer.h"
  #include "MQTT.h"
  #include "oWire.h"
  #include "I2C.h"
  
//###############################################################################
//  BasicTemplate
//###############################################################################
class BasicTemplate{
public:
  void TimerUpdate();
  
  void startConnections();  
  void startPeriphery(); 
  void handle();
  
//Callback Events
  //WiFi   
  void on_wifiConnected();
  void on_x();

//classes
  BasicTemplate();
  Helpers h;
  FFS ffs;
  WIFI wifi;
  MQTT mqtt;
  WEBIF webServer;  
  I2C i2c;
  OWIRE oWire; 
 
private:

  long timerLastUpdate;
  long timerUpdateTime = 5000;
};
