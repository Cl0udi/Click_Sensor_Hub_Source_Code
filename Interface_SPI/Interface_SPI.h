#ifndef Interface_SPI_H
#define Interface_SPI

class Interface_SPI {
 public:
    Interface_SPI(short int socket, short int click);
    
    void setSocketSelection(short int socket);
    void setClickSelection(short int click);
    
    short int getSocketSelection();
    short int getClickSelection();
    string getPinSCK();
    string getPinMISO();
    string getPinMOSI();
    
 private:
    short int socketSelection;
    short int clickSelection;
 };
 
 #endif // Interface_SPI_H