#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <Bounce.h>

// GUItool: begin automatically generated code
AudioSynthSimpleDrum     drum1;          //xy=55,377.5834426879883
AudioSynthSimpleDrum     drum2;          //xy=55,413.25016021728516
AudioSynthSimpleDrum     drum3;          //xy=55,449.5834712982178
AudioSynthSimpleDrum     drum4;          //xy=55,485.25013891855883
AudioEffectDelay         delay1;         //xy=55,1021.3863639831543
AudioInputI2S            audioInput;     //xy=62.5,96.49998092651367
AudioSynthWaveform       waveform1;      //xy=64,696.3409509658813
AudioMixer4              mixer6;         //xy=201.54543685913086,430.91666412353516
AudioAmplifier           amp3; //xy=202.67418670654297,696.3409509658813
AudioSynthWaveform       waveform11; //xy=210.59087371826172,824.590950012207
AudioMixer4              mixer11; //xy=212.9999885559082,984.386360168457
AudioMixer4              mixer12; //xy=213.9999885559082,1053.386360168457
AudioSynthWaveform       waveform5;      //xy=346.3331871032715,239.16668128967285
AudioSynthWaveform       waveform7; //xy=365.7120933532715,518.9924812316895
AudioAmplifier           amp2; //xy=369.04540634155273,394.49246978759766
AudioAmplifier           amp1;           //xy=372.3333282470703,105.83335494995117
AudioEffectFreeverbStereo freeverbs7; //xy=404.42423248291016,787.3409261703491
AudioEffectWaveFolder    wavefolder7; //xy=415.5908966064453,830.5075902938843
AudioEffectBitcrusher    bitcrusher10;   //xy=455.11363983154297,892.613639831543
AudioEffectFreeverbStereo freeverbs1;     //xy=527.6665344238281,203.16668319702148
AudioEffectBitcrusher    bitcrusher1;    //xy=532.4998626708984,286.3333683013916
AudioEffectWaveFolder    wavefolder1;    //xy=538.8331985473633,246.33334732055664
AudioEffectFreeverbStereo freeverbs3; //xy=547.0454406738281,482.9924831390381
AudioEffectWaveFolder    wavefolder3; //xy=558.2121047973633,526.1591472625732
AudioEffectBitcrusher    bitcrusher4;    //xy=558.7121124267578,569.9166412353516
AudioMixer4              mixer8; //xy=593.2575759887695,707.3408803939819
AudioSynthWaveform       waveform12; //xy=616.4242553710938,829.1742582321167
AudioMixer4              mixer1;         //xy=723.1666870117188,122.33332061767578
AudioMixer4              mixer4; //xy=735.8787841796875,402.9924373626709
AudioSynthWaveform       waveform6;      //xy=739.6665573120117,245.00001525878906
AudioSynthWaveform       waveform9; //xy=759.0454635620117,524.8258152008057
AudioEffectFreeverbStereo freeverbs8; //xy=809.4242324829102,785.3409261703491
AudioEffectWaveFolder    wavefolder8; //xy=811.4242324829102,834.3409261703491
AudioEffectBitcrusher    bitcrusher11;   //xy=816.363655090332,897.6136560440063
AudioEffectFreeverbStereo freeverbs2;     //xy=932.6665344238281,201.16668319702148
AudioEffectWaveFolder    wavefolder2;    //xy=934.6665344238281,250.16668319702148
AudioEffectBitcrusher    bitcrusher2;    //xy=941.6665344238281,291.1666831970215
AudioEffectFreeverbStereo freeverbs5; //xy=952.0454406738281,480.9924831390381
AudioEffectWaveFolder    wavefolder5; //xy=954.0454406738281,529.9924831390381
AudioEffectBitcrusher    bitcrusher8;    //xy=963.8635940551758,590.1135940551758
AudioMixer4              mixer9; //xy=1119.4242706298828,820.3408260345459
AudioSynthWaveform       waveform13;  //xy=1122.4242706298828,888.3408260345459
AudioMixer4              mixer2;         //xy=1140.6665344238281,232.16668319702148
AudioSynthWaveform       waveform8;      //xy=1143.6665344238281,300.1666831970215
AudioMixer4              mixer5; //xy=1160.0454406738281,511.9924831390381
AudioSynthWaveform       waveform10; //xy=1163.0454406738281,579.9924831390381
AudioEffectFreeverbStereo freeverbs4;     //xy=1319.6665344238281,195.16668319702148
AudioEffectFreeverbStereo freeverbs9; //xy=1320.4241027832031,788.3409633636475
AudioEffectWaveFolder    wavefolder4;    //xy=1322.6665344238281,244.16668319702148
AudioEffectBitcrusher    bitcrusher12;   //xy=1322.613639831543,896.363639831543
AudioEffectWaveFolder    wavefolder9; //xy=1323.4241027832031,837.3409633636475
AudioEffectBitcrusher    bitcrusher3;    //xy=1329.6665344238281,285.1666831970215
AudioEffectFreeverbStereo freeverbs6; //xy=1339.0454406738281,474.9924831390381
AudioEffectWaveFolder    wavefolder6; //xy=1342.0454406738281,523.9924831390381
AudioEffectBitcrusher    bitcrusher9;    //xy=1351.363655090332,600.1135940551758
AudioMixer4              mixer7; //xy=1521.0909423828125,517.8409576416016
AudioMixer4              mixer10; //xy=1522.4696159362793,821.1893358230591
AudioMixer4              mixer3;         //xy=1552.6665344238281,235.16668319702148
AudioOutputI2S           i2s1;           //xy=1783.5000076293945,234.49999237060547
AudioConnection          patchCord1(drum1, 0, mixer6, 0);
AudioConnection          patchCord2(drum2, 0, mixer6, 1);
AudioConnection          patchCord3(drum3, 0, mixer6, 2);
AudioConnection          patchCord4(drum4, 0, mixer6, 3);
AudioConnection          patchCord5(delay1, 0, mixer11, 0);
AudioConnection          patchCord6(delay1, 1, mixer11, 1);
AudioConnection          patchCord7(delay1, 2, mixer11, 2);
AudioConnection          patchCord8(delay1, 3, mixer11, 3);
AudioConnection          patchCord9(delay1, 4, mixer12, 0);
AudioConnection          patchCord10(delay1, 5, mixer12, 1);
AudioConnection          patchCord11(delay1, 6, mixer12, 2);
AudioConnection          patchCord12(delay1, 7, mixer12, 3);
AudioConnection          patchCord13(audioInput, 1, amp1, 0);
AudioConnection          patchCord14(waveform1, amp3);
AudioConnection          patchCord15(mixer6, amp2);
AudioConnection          patchCord16(amp3, freeverbs7);
AudioConnection          patchCord17(amp3, 0, wavefolder7, 1);
AudioConnection          patchCord18(amp3, 0, mixer8, 0);
AudioConnection          patchCord19(amp3, bitcrusher10);
AudioConnection          patchCord20(waveform11, 0, wavefolder7, 0);
AudioConnection          patchCord21(waveform5, 0, wavefolder1, 0);
AudioConnection          patchCord22(waveform7, 0, wavefolder3, 0);
AudioConnection          patchCord23(amp2, freeverbs3);
AudioConnection          patchCord24(amp2, 0, wavefolder3, 1);
AudioConnection          patchCord25(amp2, 0, mixer4, 0);
AudioConnection          patchCord26(amp2, bitcrusher4);
AudioConnection          patchCord27(amp1, freeverbs1);
AudioConnection          patchCord28(amp1, bitcrusher1);
AudioConnection          patchCord29(amp1, 0, wavefolder1, 1);
AudioConnection          patchCord30(amp1, 0, mixer1, 0);
AudioConnection          patchCord31(freeverbs7, 0, mixer8, 1);
AudioConnection          patchCord32(wavefolder7, 0, mixer8, 2);
AudioConnection          patchCord33(bitcrusher10, 0, mixer8, 3);
AudioConnection          patchCord34(freeverbs1, 0, mixer1, 1);
AudioConnection          patchCord35(bitcrusher1, 0, mixer1, 3);
AudioConnection          patchCord36(wavefolder1, 0, mixer1, 2);
AudioConnection          patchCord37(freeverbs3, 0, mixer4, 1);
AudioConnection          patchCord38(wavefolder3, 0, mixer4, 2);
AudioConnection          patchCord39(bitcrusher4, 0, mixer4, 3);
AudioConnection          patchCord40(mixer8, freeverbs8);
AudioConnection          patchCord41(mixer8, 0, wavefolder8, 1);
AudioConnection          patchCord42(mixer8, 0, mixer9, 0);
AudioConnection          patchCord43(mixer8, bitcrusher11);
AudioConnection          patchCord44(waveform12, 0, wavefolder8, 0);
AudioConnection          patchCord45(mixer1, freeverbs2);
AudioConnection          patchCord46(mixer1, 0, wavefolder2, 1);
AudioConnection          patchCord47(mixer1, bitcrusher2);
AudioConnection          patchCord48(mixer1, 0, mixer2, 0);
AudioConnection          patchCord49(mixer4, freeverbs5);
AudioConnection          patchCord50(mixer4, 0, wavefolder5, 1);
AudioConnection          patchCord51(mixer4, 0, mixer5, 0);
AudioConnection          patchCord52(mixer4, bitcrusher8);
AudioConnection          patchCord53(waveform6, 0, wavefolder2, 0);
AudioConnection          patchCord54(waveform9, 0, wavefolder5, 0);
AudioConnection          patchCord55(freeverbs8, 1, mixer9, 1);
AudioConnection          patchCord56(wavefolder8, 0, mixer9, 2);
AudioConnection          patchCord57(bitcrusher11, 0, mixer9, 3);
AudioConnection          patchCord58(freeverbs2, 1, mixer2, 1);
AudioConnection          patchCord59(wavefolder2, 0, mixer2, 2);
AudioConnection          patchCord60(bitcrusher2, 0, mixer2, 3);
AudioConnection          patchCord61(freeverbs5, 1, mixer5, 1);
AudioConnection          patchCord62(wavefolder5, 0, mixer5, 2);
AudioConnection          patchCord63(bitcrusher8, 0, mixer5, 3);
AudioConnection          patchCord64(mixer9, freeverbs9);
AudioConnection          patchCord65(mixer9, 0, wavefolder9, 1);
AudioConnection          patchCord66(mixer9, bitcrusher12);
AudioConnection          patchCord67(waveform13, 0, wavefolder9, 0);
AudioConnection          patchCord68(mixer2, freeverbs4);
AudioConnection          patchCord69(mixer2, 0, wavefolder4, 1);
AudioConnection          patchCord70(mixer2, bitcrusher3);
AudioConnection          patchCord71(waveform8, 0, wavefolder4, 0);
AudioConnection          patchCord72(mixer5, freeverbs6);
AudioConnection          patchCord73(mixer5, 0, wavefolder6, 1);
AudioConnection          patchCord74(mixer5, bitcrusher9);
AudioConnection          patchCord75(waveform10, 0, wavefolder6, 0);
AudioConnection          patchCord76(freeverbs4, 1, mixer3, 0);
AudioConnection          patchCord77(freeverbs9, 1, mixer10, 0);
AudioConnection          patchCord78(wavefolder4, 0, mixer3, 1);
AudioConnection          patchCord79(bitcrusher12, 0, mixer10, 2);
AudioConnection          patchCord80(wavefolder9, 0, mixer10, 1);
AudioConnection          patchCord81(bitcrusher3, 0, mixer3, 2);
AudioConnection          patchCord82(freeverbs6, 1, mixer7, 0);
AudioConnection          patchCord83(wavefolder6, 0, mixer7, 1);
AudioConnection          patchCord84(bitcrusher9, 0, mixer7, 2);
AudioConnection          patchCord85(mixer3, 0, i2s1, 0);
AudioConnection          patchCord86(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=64.5,28
// GUItool: end automatically generated code

const int buttonPins[] = {36, 35, 34, 33, 37, 38};
const int potPins[] = {24, 25, 26, 27};
const int modeSwitchPin = 28; // Pin used for switching modes
const int effectTogglePin = 29; // Pin used for toggling effects
const int numButtons = 6;
const int numPots = 4;
bool effectsEnabled = false; // Global variable to track the state of effects
// Define a simple drum pattern (kick, snare, hihat)
const bool drumPattern[4][4] = {
  {true, false, false, false}, // Kick drum pattern
  {false, true, false, false}, // Snare drum pattern
  {false, false, true, false},   // Hihat pattern
  {false, false, false, true} // Additional percussion pattern
};
const int startStopButtonPin = 31; // Pin for starting/stopping the drum sequence
Bounce startStopButton = Bounce(startStopButtonPin, 5);
bool sequencerRunning = false; // Tracks whether the sequencer is running
unsigned long lastStepTime = 0; // When the last step was triggered
const int tempo = 25; // Tempo in beats per minute
const int stepsPerBeat = 4; // Number of steps per beat (for a 4/4 rhythm)
const int stepInterval = 60000 / (tempo * stepsPerBeat); // Time per step in milliseconds
int currentStep = 0; // Current step in the sequence

float getFrequency(int noteIndex) {
    float baseFrequencies[] = {65.41, 73.42, 82.41, 98.00, 110.00}; // Frequencies for C2, D2, E2, G2, A2

    int octave = noteIndex / 5; // Each octave has 5 notes
    int note = noteIndex % 5; // Which note within the octave

    return baseFrequencies[note] * pow(2, octave);
}

const int envelopeWaveformSwitchPin = 30; // Pin for switching between envelope and waveform control
int envelopeWaveformMode = 0; // 0 = envelope control, 1 = waveform control
Bounce envelopeWaveformSwitch = Bounce(envelopeWaveformSwitchPin, 5);

Bounce buttons[numButtons] = {
    Bounce(buttonPins[0], 5), Bounce(buttonPins[1], 5),
    Bounce(buttonPins[2], 5), Bounce(buttonPins[3], 5),
    Bounce(buttonPins[4], 5), Bounce(buttonPins[5], 5),
};
    Bounce modeSwitch = Bounce(modeSwitchPin, 5);
    Bounce effectToggle = Bounce(effectTogglePin, 5);

void configureAudioComponents() {
  amp1.gain(1.0);
  amp2.gain(1.0);
  amp3.gain(1.0);

  mixer1.gain(0, 0.0);
  mixer1.gain(1, 0.0);
  mixer1.gain(2, 0.0);
  mixer1.gain(3, 0.0);

  mixer2.gain(0, 1.0);
  mixer2.gain(1, 0.75);
  mixer2.gain(2, 0.50);
  mixer2.gain(3, 0.25);

  mixer3.gain(0, 1.0);
  mixer3.gain(1, 1.0);
  mixer3.gain(2, 1.0);
  mixer3.gain(3, 1.0);

  mixer5.gain(0, 1.0);
  mixer5.gain(1, 1.0);
  mixer5.gain(2, 1.0);
  mixer5.gain(3, 1.0);

  mixer6.gain(0, 1.0);
  mixer6.gain(1, 1.0);
  mixer6.gain(2, 1.0);
  mixer6.gain(3, 1.0);

  mixer7.gain(0, 1.0);
  mixer7.gain(1, 1.0);
  mixer7.gain(2, 1.0);
  mixer7.gain(3, 1.0);
  
  mixer8.gain(0, 1.0);
  mixer8.gain(1, 1.0);
  mixer8.gain(2, 1.0);
  mixer8.gain(3, 1.0);
  
  mixer9.gain(0, 1.0);
  mixer9.gain(1, 1.0);
  mixer9.gain(2, 1.0);
  mixer9.gain(3, 1.0);

  sine1.amplitude(1);
  sine1.frequency(5);  
  sine2.amplitude(1);
  sine2.frequency(5); 
  sine3.amplitude(1);
  sine3.frequency(5); 

  drum1.frequency(60);
  drum1.length(1500);
  drum1.secondMix(0.0);
  drum1.pitchMod(0.55);
  
  drum2.frequency(60);
  drum2.length(300);
  drum2.secondMix(0.0);
  drum2.pitchMod(1.0);
  
  drum3.frequency(550);
  drum3.length(400);
  drum3.secondMix(1.0);
  drum3.pitchMod(0.5);

  drum4.frequency(1200);
  drum4.length(150);
  drum4.secondMix(0.0);
  drum4.pitchMod(0.0);

  waveform1.begin(1.0 , 220 , WAVEFORM_SAWTOOTH);
  waveform2.begin(1.0 , 300 , WAVEFORM_SAWTOOTH);
  waveform3.begin(1.0 , 350 , WAVEFORM_SAWTOOTH);
  waveform4.begin(1.0 , 450 , WAVEFORM_SAWTOOTH);
  waveform1.frequency(200);
  waveform2.frequency(300);
  waveform3.frequency(400);
  waveform4.frequency(500);
  envelope1.delay(0);         // Set delay time in milliseconds
  envelope1.attack(10.5);     // Set attack time
  envelope1.hold(2.5);        // Set hold time
  envelope1.decay(35);        // Set decay time
  envelope1.sustain(0.7);     // Set sustain level (0 to 1.0)
  envelope1.release(300);     // Set release time
  
  envelope2.delay(0);         // Set delay time in milliseconds
  envelope2.attack(10.5);     // Set attack time
  envelope2.hold(2.5);        // Set hold time
  envelope2.decay(35);        // Set decay time
  envelope2.sustain(0.7);     // Set sustain level (0 to 1.0)
  envelope2.release(300);     // Set release time
  
  envelope3.delay(0);         // Set delay time in milliseconds
  envelope3.attack(10.5);     // Set attack time
  envelope3.hold(2.5);        // Set hold time
  envelope3.decay(35);        // Set decay time
  envelope3.sustain(0.7);     // Set sustain level (0 to 1.0)
  envelope3.release(300);     // Set release time
  
  envelope4.delay(0);         // Set delay time in milliseconds
  envelope4.attack(10.5);     // Set attack time
  envelope4.hold(2.5);        // Set hold time
  envelope4.decay(35);        // Set decay time
  envelope4.sustain(0.7);     // Set sustain level (0 to 1.0)
  envelope4.release(300);     // Set release time

  delay1.delay(0, 100);
  delay1.delay(1, 300);
  delay1.delay(2, 500);
  delay1.delay(3, 700);
  
  freeverbs1.roomsize(1.5); // Set the distortion amount (0.0 to 1.0)
  freeverbs2.roomsize(1.5); // Set the distortion amount (0.0 to 1.0)
  freeverbs3.roomsize(1.5); // Set the distortion amount (0.0 to 1.0)


}
int currentMode = 0; // 0 = input, 1 = drums, 2 = synth
int currentEffectState = 0; // State of effect channels

void deactivateAllMixers() {
  for (int i = 0; i < 4; i++) {
    mixer1.gain(i, 0.0);
    mixer6.gain(i, 0.0);
    mixer8.gain(i, 0.0);
  }
}
void activateAllMixers() {
  for (int i = 0; i < 4; i++) {
    mixer1.gain(i, 1.0);
    mixer6.gain(i, 1.0);
    mixer8.gain(i, 1.0);
  }
}
void activateEffectChannel(int channel) {
  // Activate the specified effect channel in the current mixer
  switch (currentMode) {
    case 0: mixer1.gain(channel, 1.0); break; // Input mode
    case 1: mixer6.gain(channel, 1.0); break; // Drums mode
    case 2: mixer8.gain(channel, 1.0); break; // Synth mode
    case 3: activateAllMixers(); break;
  }
}

void updateMixersForMode() {
  deactivateAllMixers(); // Deactivate all channels in all mixers
  // Activate only the dry channel of the current mixer
  switch (currentMode) {
    case 0: mixer1.gain(0, 1.0); break; // Input mode - Activate mixer1
    case 1: mixer6.gain(0, 1.0); break; // Drums mode - Activate mixer6
    case 2: mixer8.gain(0, 1.0); break; // Synth mode - Activate mixer8
  }
}

void updateMixerEffects() {
  // Reset effect channels for the current mixer
  for (int i = 1; i < 4; i++) {
    switch (currentMode) {
      case 0: mixer1.gain(i, 0.0); break;
      case 1: mixer6.gain(i, 0.0); break;
      case 2: mixer8.gain(i, 0.0); break;
    }
  }
  // Activate the appropriate effect channels
  switch (currentEffectState) {
    case 0: activateEffectChannel(1); break;
    case 1: activateEffectChannel(2); break;
    case 2: activateEffectChannel(3); break;
    case 3: activateEffectChannel(1); activateEffectChannel(2); break;
    case 4: activateEffectChannel(1); activateEffectChannel(3); break;
    case 5: activateEffectChannel(2); activateEffectChannel(3); break;
    case 6: for (int i = 1; i < 4; i++) activateEffectChannel(i); break;
    // case 7: All effects off, already handled by reset
  }
}
void triggerSequenceStep(int step) {
  // Trigger drum sounds based on the current step in the drum pattern
  for (int i = 0; i < 4; i++) { // Assuming 4 drums
    if (drumPattern[i][step % 4]) { // Check the pattern for the current step
      triggerDrum(i);
    }
  }
}

void setup() {
  Serial.begin(9600);
  AudioMemory(1024);
  pinMode(startStopButtonPin, INPUT_PULLUP);
  sgtl5000_1.enable();
  sgtl5000_1.volume(1);
  pinMode(envelopeWaveformSwitchPin, INPUT_PULLUP);

  for (int i = 0; i < numButtons; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  for (int i = 0; i < numPots; i++) {
    pinMode(potPins[i], INPUT);
  }
  pinMode(modeSwitchPin, INPUT_PULLUP);
  pinMode(effectTogglePin, INPUT_PULLUP);
  startStopButton.update();
  if (startStopButton.fallingEdge()) {
    sequencerRunning = !sequencerRunning;
    currentStep = 0; // Reset the step to 0 when starting
  }

  if (sequencerRunning && millis() - lastStepTime >= stepInterval) {
    triggerSequenceStep(currentStep);
    currentStep = (currentStep + 1) % 16; // Advance to next step and loop back after 16 steps
    lastStepTime = millis();
  }
  configureAudioComponents();
  deactivateAllMixers(); // Start with all mixers deactivated
  updateMixersForMode(); // Activate the dry channel in the initial mixer

}
void handleModeChange() {
  if (modeSwitch.fallingEdge()) {
    currentMode = (currentMode + 1) % 3;
    updateMixersForMode();
  }
}
unsigned long lastEffectToggleTime = 0;
const unsigned long effectToggleDebounceInterval = 200; // milliseconds

void handleEffectToggle() {
  if (effectToggle.fallingEdge()) {
    unsigned long currentTime = millis();
    if (currentTime - lastEffectToggleTime > effectToggleDebounceInterval) {
      currentEffectState = (currentEffectState + 1) % 8;
      lastEffectToggleTime = currentTime;
    updateMixerEffects();
  }
}}
void triggerDrum(int drumNumber) {

  if (drumNumber < 4) { // Assuming the first 4 buttons are for drums
    AudioSynthSimpleDrum *drums[] = {&drum1, &drum2, &drum3, &drum4};
    drums[drumNumber]->noteOn();
  }

  if (drumNumber < 4) { // Assuming the first 4 buttons are for envelopes
    AudioEffectEnvelope *envelopes[] = {&envelope1, &envelope2, &envelope3, &envelope4};
    envelopes[drumNumber]->noteOn();
    delay(10);
    envelopes[drumNumber]->noteOff();
  }}



void debugOutput() {
    Serial.println("------ Debug Information ------");
    Serial.print("Current Mode: "); Serial.println(currentMode);
    Serial.print("Effect State: "); Serial.println(currentEffectState);
    Serial.print("Envelope/Waveform Mode: "); Serial.println(envelopeWaveformMode);
    
    // Print potentiometer values
    for (int i = 0; i < numPots; i++) {
        Serial.print("Potentiometer "); Serial.print(i); 
        Serial.print(" Value: "); Serial.println(analogRead(potPins[i]));
    }

    // Add any other relevant debugging information here
    // For example, you can print out the state of the waveform generators, drum machines, etc.

    Serial.println("--------------------------------");
    Serial.println(digitalRead(28));
    Serial.println(digitalRead(29));
    Serial.println(digitalRead(30));
}

void applyPotValuesToEffects(int potValues[]) {
    if (currentMode == 2) { // Synth mode
        if (envelopeWaveformMode == 0) { // Envelope mode
            // Apply envelope parameters to all four envelopes
            for (int i = 0; i < 4; i++) {
                AudioEffectEnvelope *envelopes[] = {&envelope1, &envelope2, &envelope3, &envelope4};
                envelopes[i]->attack(map(potValues[0], 0, 1023, 0, 100.0));
                envelopes[i]->decay(map(potValues[1], 0, 1023, 0, 100.0));
                envelopes[i]->sustain(map(potValues[2], 0, 1023, 0, 100.0));
                envelopes[i]->release(map(potValues[3], 0, 1023, 0, 100.0));
            }
        } else if (envelopeWaveformMode == 1) { // Waveform mode
            // Apply frequency to all four waveforms based on pentatonic scale over 8 octaves
            int totalNotes = 40; // 5 notes per octave over 8 octaves

            for (int i = 0; i < 4; i++) {
                int noteIndex = map(potValues[i], 0, 1023, 0, totalNotes - 1);
                float frequency = getFrequency(noteIndex);

                switch (i) {
                    case 0: waveform1.frequency(frequency); break;
                    case 1: waveform2.frequency(frequency); break;
                    case 2: waveform3.frequency(frequency); break;
                    case 3: waveform4.frequency(frequency); break;
                }
            }
        }

    }
    // Existing code for other operations
    freeverbs1.roomsize(map(potValues[0], 0, 1023, 0, 2));
    sine1.frequency(potValues[1]);  
    bitcrusher1.bits(map(potValues[2], 0, 1023, 0, 8));
    freeverbs2.roomsize(map(potValues[0], 0, 1023, 0, 2));
    sine2.frequency(potValues[1]);  
    bitcrusher2.bits(map(potValues[2], 0, 1023, 0, 8));
    freeverbs3.roomsize(map(potValues[0], 0, 1023, 0, 2));
    sine3.frequency(potValues[1]);  
    bitcrusher3.bits(map(potValues[2], 0, 1023, 0, 8));

  handleModeChange();
  handleEffectToggle();

  delay(10); // Short delay for stability
}
char pentatonicScale[] = {'C', 'D', 'E', 'G', 'A'};
int scaleLength = 5; // 5 notes in the pentatonic scale
int currentNote = 0;
int currentOctave = 4; // Starting octave

void loop() {
  int potValues[numPots];
  for (int i = 0; i < numPots; i++) {
    potValues[i] = map(analogRead(potPins[i]), 0, 1023, 0, 2200);
  }

  modeSwitch.update();
  effectToggle.update();
  handleModeChange();
  handleEffectToggle();
  applyPotValuesToEffects(potValues);

  envelopeWaveformSwitch.update();
  if (envelopeWaveformSwitch.fallingEdge()) {
    envelopeWaveformMode = (envelopeWaveformMode + 1) % 2;
  }

  for (int i = 0; i < numButtons; i++) {
    buttons[i].update();
    if (buttons[i].fallingEdge()) {
      triggerDrum(i);
    }
  }

  // Sequencer logic
  startStopButton.update();
  if (startStopButton.fallingEdge()) {
    sequencerRunning = !sequencerRunning;
    currentStep = 0;
  }

  if (sequencerRunning && millis() - lastStepTime >= stepInterval) {
    triggerSequenceStep(currentStep);
    currentStep = (currentStep + 1) % 16; // assuming a 16-step sequence
    lastStepTime = millis();
  }

   debugOutput();
   delay(100);
}
