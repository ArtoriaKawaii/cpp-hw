cc = g++
target1 = 12-2
target2 = 12-3
target3 = 12-5
flag = -std=c++11 -Wall

all: $(target1).cpp $(target2).cpp $(target3).cpp
	$(cc) $(flag) -c $(target1).cpp $(target2).cpp $(target3).cpp
	$(cc) $(flag) -o $(target1) $(target1).o
	$(cc) $(flag) -o $(target2) $(target2).o
	$(cc) $(flag) -o $(target3) $(target3).o
clean:
	rm -f $(target1) $(target2) $(target3)
	rm -f $(target1).o $(target2).o $(target3).o
