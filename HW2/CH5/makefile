cc = g++
target1 = 5-4
target2 = 5-8
target3 = 5-10
target4 = 5-14
target5 = 5-17
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
