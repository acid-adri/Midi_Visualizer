#include <cstdio>
#include <iostream>
#include <RtMidi.h>
#include <ostream>

// open Midi Ports
int main() {
	printf("starting!\n");
	RtMidiIn *midiin = new RtMidiIn();
	int i = 0, midiports = midiin->getPortCount();
	
	printf("Choose MidiPort");
	for (i = 0; i < midiports ; i++) {	
		std::string portName = midiin->getPortName(i);
		std::cout << "Port " << i << ":" << portName << "\n";
	
	}
	int j;
	std::cin >> j;
	midiin->openPort(j);
	while(true){
		std::vector<unsigned char> message;
		midiin->getMessage(&message);

		if(!message.empty()){
			std::cout << "Message: ";
			for(unsigned char byte : message){
				std::cout << std::hex << static_cast<int>(byte) << " ";
			}
			std::cout << std::endl;
		}
	}	
}
