main_out.exe: main.cpp
	g++ -std=c++17 -D__WINDOWS_MM__ -IC:/Users/marco/Desktop/Programme/Tools/libs/rtmidi main.cpp C:/Users/marco/Desktop/Programme/Tools/libs/rtmidi/RtMidi.cpp -o main_out.exe -lwinmm
