cc = g++
target1 = 4-3
target2 = 4-7
target3 = 4-8
target4 = 4-9
target5 = 4-14
target6 = 4-17
flag = -std=c++11 -Wall

all: $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp $(target6).cpp
	$(cc) $(flag) -c $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp $(target6).cpp
	$(cc) $(flag) -o $(target1) $(target1).o
	$(cc) $(flag) -o $(target2) $(target2).o
	$(cc) $(flag) -o $(target3) $(target3).o
	$(cc) $(flag) -o $(target4) $(target4).o
	$(cc) $(flag) -o $(target5) $(target5).o
	$(cc) $(flag) -o $(target6) $(target6).o
clean:
	rm -f $(target1) $(target2) $(target3) $(target4) $(target5) $(target6)
	rm -f $(target1).o $(target2).o $(target3).o $(target4).o $(target5).o $(target6).o
