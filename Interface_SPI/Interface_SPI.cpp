#include "Interface_SPI.h"

Interface_SPI(short int socket, short int click){
    socketSelection = socket;
    clickSelection = click;
}

void Interface_SPI::setSocketSelection(short int socket){
    socketSelection = socket;
}

void Interface_SPI::setClickSelection(short int socket){
    clickSelection = click;
}

short int Interface_SPI::getSocketSelection(short int socket){
    return socketSelection;
}

short int Interface_SPI::getClickSelection(short int socket){
    return clickSelection;
}

string Interface_SPI::getPinSCK(short int socket){
    return "PTD5";
}

string Interface_SPI::getPinMISO(short int socket){
    return "PTD7";
}

string Interface_SPI::getPinMOSI(short int socket){
    return "PTD6";
}
