/*
  ==============================================================================

    BounceSettings.h
    Created: 16 Feb 2023 7:29:50pm
    Author:  honza

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "../../Constants.h"
#include "../../Utils/Utils.h"
#include "../../CustomSetting/RadioBox.h"
#include "../../CustomSetting/Knob.h"
#include "../../CustomSetting/Separator.h"

class BounceSettings : public Component
{
public:
    static enum Coordinate {
        X,
        Y
    };

    // Class
    BounceSettings();
    ~BounceSettings();

    // GUI
    void paint(Graphics&) override;
    void resized()override;

    // Getters
    bool isCurrentSelectedCoordinate(Coordinate);

    int getRate();
    int getDepth();

    Knob ballSpeedKnob{ "BALL SPEED", C_BILLS, 1, 10, 1, 1 };
    Knob rateKnob{ "RATE", C_BILLS, 1, 20, 1, 2 };
    Knob depthKnob{ "DEPTH", C_BILLS, 1, 100, 1, 50 };
    RadioBox coordinateRadioBox{ "DIRECTION", C_BARARED, COORDINATE };
    TextButton clearButton { "Clear" };

private:
    OwnedArray<Separator> separators;


};
