#include <Arduino.h>
#include <BLEMIDI_Transport.h>
#include <hardware/BLEMIDI_ESP32.h>
BLEMIDI_CREATE_INSTANCE("E-Drum", MIDI);

int tempo = 280;
void setup()
{
  MIDI.begin(10);
}

void loop()
{
  MIDI.sendNoteOn(36, 100, 10);
  MIDI.sendNoteOff(36, 0, 10);
  MIDI.sendNoteOn(44, 100, 10);
  MIDI.sendNoteOff(44, 0, 10);
  delay(tempo);

  MIDI.sendNoteOn(44, 100, 10);
  MIDI.sendNoteOff(44, 0, 10);
  delay(tempo);

  MIDI.sendNoteOn(38, 100, 10);
  MIDI.sendNoteOff(38, 0, 10);
  MIDI.sendNoteOn(44, 100, 10);
  MIDI.sendNoteOff(44, 0, 10);
  delay(tempo);

  MIDI.sendNoteOn(44, 100, 10);
  MIDI.sendNoteOff(44, 0, 10);
  delay(tempo);
}