#include "Interface_PWM.h"

Interface_PWM(short int socket, short int click){
    socketSelection = socket;
    clickSelection = click;
}

void Interface_PWM::setSocketSelection(short int socket){
    socketSelection = socket;
}

void Interface_PWM::setClickSelection(short int socket){
    clickSelection = click;
}

short int Interface_PWM::getSocketSelection(short int socket){
    return socketSelection;
}

short int Interface_PWM::getClickSelection(short int socket){
    return clickSelection;
}

string Interface_PWM::getPinPWM(short int socket){
    switch (socket){
        case 0:
            return "PTC9";
            break;
        case 1:
            return "PTC8";
            break;
        case 2:
            return "PTA5";
            break;
        case 3:
            return "PTA4";
            break;
        default:
            return "Invalid socket in Interface_PWM object.";
            break;
    }
}
