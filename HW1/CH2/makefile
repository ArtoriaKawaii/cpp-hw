cc = g++
target1 = 2-2
target2 = 2-4
target3 = 2-7
target4 = 2-8
flag = -std=c++11

all: $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp
	$(cc) $(flag) -c $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp
	$(cc) $(flag) -o $(target1) $(target1).o
	$(cc) $(flag) -o $(target2) $(target2).o
	$(cc) $(flag) -o $(target3) $(target3).o
	$(cc) $(flag) -o $(target4) $(target4).o	
clean:
	rm -f $(target1) $(target2) $(target3) $(target4)
	rm -f $(target1).o $(target2).o $(target3).o $(target4).o
