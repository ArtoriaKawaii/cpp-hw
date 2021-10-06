Compiler = g++
target1 = UniversityStaff
target2 = Student
target3 = ScienceStudent
target4 = 14-4
target5 = Payment
taregt6 = CashPayment
target7 = CreditCardPayment
target8 = 14-6
target9 = Blog
target10 = Viewer
target11 = Owner
target12 = 14-8
Flag = -std=c++11 -Wall

all: $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp $(target6).cpp $(target7).cpp $(target8).cpp $(target9).cpp $(target10).cpp $(target11).cpp $(target12).cpp
	$(Compiler) $(Flag) -c $(target1).cpp $(target2).cpp $(target3).cpp $(target4).cpp $(target5).cpp $(target6).cpp $(target7).cpp $(target8).cpp $(target9).cpp $(target10).cpp $(target11).cpp $(target12).cpp
	$(Compiler) $(Flag) -o $(target4) $(target1).o $(target2).o $(target3).o $(target4).o
	$(Compiler) $(Flag) -o $(target8) $(target5).o $(target6).o $(target7).o $(target8).o
	$(Compiler) $(Flag) -o $(target12) $(target9).o $(target10).o $(target11).o $(target12).o

clean: 
	rm -f $(target4) $(target8) $(target12)
	rm -f $(target1).o $(target2).o $(target3).o $(target4).o $(target5).o $(target6).o $(target7).o $(target8).o $(target9).o $(target10).o $(target11).o $(target12).o