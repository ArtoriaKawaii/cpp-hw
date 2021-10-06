#include"RainbowColor.h"
using std::cout;
using std::cin;
using std::endl;
using RC::RainbowColor;

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


