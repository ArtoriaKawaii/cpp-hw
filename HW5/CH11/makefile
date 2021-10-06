cc = g++
target1 = f
target2 = g
target3 = 11-1
target4 = RainbowColor
target5 = 11-3
flag = -std=c++11 -Wall

all: $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp
	$(cc) $(flag) -c $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp
	$(cc) $(flag) -o $(target3) $(target1).o $(target2).o $(target3).o
	$(cc) $(flag) -o $(target5) $(target4).o $(target5).o
clean:
	rm -f $(target3) $(target5)
	rm -f $(target1).o $(target2).o $(target3).o $(target4).o $(target5).o
