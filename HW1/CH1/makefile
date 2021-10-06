cc = g++
target1 = 1-6
target2 = 1-8
target3 = 1-13
flag = -std=c++11

all: $(target1).cpp $(target2).cpp $(target3).cpp
	$(cc) $(flag) -c $(target1).cpp $(target2).cpp $(target3).cpp
	$(cc) $(flag) -o $(target1) $(target1).o
	$(cc) $(flag) -o $(target2) $(target2).o
	$(cc) $(flag) -o $(target3) $(target3).o
clean:
	rm -f $(target1) $(target2) $(target3)
	rm -f $(target1).o $(target2).o $(target3).o
