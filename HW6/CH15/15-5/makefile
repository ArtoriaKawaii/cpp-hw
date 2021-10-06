Compiler = g++
target1 = Player
target2 = ComputerPlayer
target3 = HumanPlayer
target4 = 15-5
Flag = -std=c++11 -Wall

all: $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp
	$(Compiler) $(Flag) -c $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp
	$(Compiler) $(Flag) -o $(target4) $(target1).o $(target2).o $(target3).o $(target4).o
clean:
	rm -f $(target4) $(target1).o $(target2).o $(target3).o $(target4).o