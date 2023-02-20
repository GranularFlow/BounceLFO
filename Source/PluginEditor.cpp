/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BounceLFOAudioProcessorEditor::BounceLFOAudioProcessorEditor (BounceLFOAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    addAndMakeVisible(audioProcessor.bounceLfo);
    TODO: setSize (W_WIDTH, W_HEIGHT);
}

BounceLFOAudioProcessorEditor::~BounceLFOAudioProcessorEditor()
{
}

//==============================================================================
void BounceLFOAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll(C_DARK);
}

void BounceLFOAudioProcessorEditor::resized()
{
   audioProcessor.bounceLfo.setBounds(getLocalBounds());
}
