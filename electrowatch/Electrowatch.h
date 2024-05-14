#ifndef ELECTROWATCH_H
#define ELECTROWATCH_H

#include <Watchy.h>
#include "Seven_Segment10pt7b.h"
#include "DSEG7_Classic_Regular_15.h"
#include "DSEG7_Classic_Bold_25.h"
#include "DSEG7_Classic_Regular_39.h"
#include "icons.h"
#include "parameters.h"

#include "sendData.h"
#include "dataFile.h"

class Watchy7SEG : public Watchy{
    using Watchy::Watchy;
    public:
        bool connectWiFi();
        void drawWatchFace();
        void drawTime();
        void drawDate();
        void drawSteps();
        void drawWeather();
        void drawBattery();
        void setupFS();
        void syncAPI();
};

#endif