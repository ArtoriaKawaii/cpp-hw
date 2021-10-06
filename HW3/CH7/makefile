cc = g++
target1 = 7-1
target2 = 7-5
target3 = 7-6
target4 = 7-8
target5 = 7-11
flag = -std=c++11 -Wall

all: $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp
	$(cc) $(flag) -c $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp
	$(cc) $(flag) -o $(target1) $(target1).o
	$(cc) $(flag) -o $(target2) $(target2).o
	$(cc) $(flag) -o $(target3) $(target3).o
	$(cc) $(flag) -o $(target4) $(target4).o
	$(cc) $(flag) -o $(target5) $(target5).o
clean:
	rm -f $(target1) $(target2) $(target3) $(target4) $(target5)
	rm -f $(target1).o $(target2).o $(target3).o $(target4).o $(target5).o
