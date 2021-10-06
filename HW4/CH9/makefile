cc = g++
target1 = 9-2
target2 = 9-4
target4 = 9-10
flag = -std=c++11 -Wall

all: $(target1).cpp $(target2).cpp $(target4).cpp
	$(cc) $(flag) -c $(target1).cpp $(target2).cpp $(target4).cpp
	$(cc) $(flag) -o $(target1) $(target1).o
	$(cc) $(flag) -o $(target2) $(target2).o
	$(cc) $(flag) -o $(target4) $(target4).o
clean:
	rm -f $(target1) $(target2) $(target4)
	rm -f $(target1).o $(target2).o $(target4).o
