/*
  ==============================================================================

    BounceLFO.h
    Created: 16 Feb 2023 7:29:42pm
    Author:  honza

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "../Constants.h"
#include "BounceSettings/BounceSettings.h"
#include "BounceCanvas/BounceCanvas.h"


class BounceLFO : public Component, public Slider::Listener, public Timer, public Button::Listener
{
public:
    // Class
	BounceLFO();
	~BounceLFO();
    // GUI
    void paintLogoOnce(Graphics&);
    void paint(Graphics&) override;
    void resized() override;
    // Listeners
    void addListeners();
    void removeListeners();
    void timerCallback();
    void sliderValueChanged(Slider*);
    void buttonClicked(Button*);
    // Getters
    float getOutputValue();
    // Tools
    void checkNextCoordinate();

private:
    BounceSettings settings;
    BounceCanvas canvas;
    float outputValue = 1.0f;
};
