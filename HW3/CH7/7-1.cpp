#include<iostream>

using namespace std;

class RainbowColor{
	public:
		RainbowColor(char color_char);
		RainbowColor(int color_int);
		RainbowColor();
		static int getRainbowColorByName(char color_char);//return -1 means not a RainbowColor
		void outputRainbowColor();
		RainbowColor nextRainbowColor();
	private:
		char color_char;
		int color_int;
};

int main(){
	cout << "Testing constructor RainbowColor(char)\n";
	RainbowColor r1('R');
	r1.outputRainbowColor();
	RainbowColor r2('O');
	r2.outputRainbowColor();
	RainbowColor r3('Y');
	r3.outputRainbowColor();
	RainbowColor r4('G');
	r4.outputRainbowColor();
	RainbowColor r5('B');
	r5.outputRainbowColor();
	RainbowColor r6('I');
	r6.outputRainbowColor();
	RainbowColor r7('P');
	r7.outputRainbowColor();	
	cout << "\nTesting constructor RainbowColor(int)\n";
	RainbowColor r8(1);
	r8.outputRainbowColor();
	RainbowColor r9(2);
	r9.outputRainbowColor();
	RainbowColor r10(3);
	r10.outputRainbowColor();
	RainbowColor r11(4);
	r11.outputRainbowColor();
	RainbowColor r12(5);
	r12.outputRainbowColor();
	RainbowColor r13(6);
	r13.outputRainbowColor();
	RainbowColor r14(7);
	r14.outputRainbowColor();
	char color_char;
	int color_int;
	cout << endl;
	while(true){
		cout << "Testing the getRainbowColorByName and outputRainbowColor\n";
		cin >> color_char;
		color_int = RainbowColor::getRainbowColorByName(color_char);
		if(color_int == -1){
			cout << color_char << " is not a RainbowColor. Exiting.\n\nEnd of loops.\n\n";
			break;	
		}
		else{
			RainbowColor r15(color_int);
			r15.outputRainbowColor();
		}
	}
	cout << "Testing nextRainbowColor.\n";
	while(true){
		cin >> color_char;
		color_int = RainbowColor::getRainbowColorByName(color_char);
		if(color_int == -1){
			cout << color_char << " is not a RainbowColor. Exiting.\n";
			break;
		}
		else{
			cout << "current RainbowColor ";
			RainbowColor r16(color_char);
			r16.outputRainbowColor();
			cout << "next RainbowColor ";
			r16.nextRainbowColor().outputRainbowColor();
		}
	}
	return 0;
}

RainbowColor::RainbowColor(char color_char){
	this->color_char = color_char;
	switch(this->color_char){
		case 'R':
			color_int = 1;
			break;
		case 'O':
			color_int = 2;
			break;
		case 'Y':
			color_int = 3;
			break;
		case 'G':
			color_int = 4;
			break;
		case 'B':
			color_int = 5;
			break;
		case 'I':
			color_int = 6;
			break;
		case 'P':
			color_int = 7;
			break;
	}
}
RainbowColor::RainbowColor(int color_int){
	this->color_int = color_int;	
	switch(this->color_int){
		case 1:
			color_char = 'R';
			break;
		case 2:
			color_char = 'O';
			break;
		case 3:
			color_char = 'Y';
			break;
		case 4:
			color_char = 'G';
			break;
		case 5:
			color_char = 'B';
			break;
		case 6:
			color_char = 'I';
			break;
		case 7:
			color_char = 'P';
			break;
	}
}
RainbowColor::RainbowColor(){

}
int RainbowColor::getRainbowColorByName(char color_char){
	switch(color_char){
		case 'R':
			return 1;
		case 'O':
			return 2;
		case 'Y':
			return 3;
		case 'G':
			return 4;
		case 'B':
			return 5;
		case 'I':
			return 6;
		case 'P':
			return 7;
		default:
			return -1;//return -1 means not a RainbowColor
	}
}
void RainbowColor::outputRainbowColor(){
	cout << color_int << " " << color_char << endl;
}
RainbowColor RainbowColor::nextRainbowColor(){
	if(color_int == 7){
		RainbowColor temp(1);
		return temp;
	}
	else{
		RainbowColor temp(color_int + 1);
		return temp;
	}
}
