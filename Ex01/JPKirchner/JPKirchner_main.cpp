#include <iostream>
#include <cmath>

using namespace std;

void mitternachtsFormel(int a, int b, int c);

int ggT(int a, int b);

int main()
{

	int someNumber = 4;
	cout << "Enter a number: " << endl;
	cin >> someNumber;
	cout << (someNumber / 2) << endl;
    /*
	int a = 0;
	int b = 0;
	int c = 0;

	while (a < 1) {
		cout << "waehlen Sie einen Wert > 0 fuer a: " << endl;
		cin >> a;
	}

	cout << "waehlen Sie einen Wert fuer b: " << endl;
	cin >> b;

	cout << "waehlen Sie einen Wert fuer c: " << endl;
	cin >> c;

	mitternachtsFormel(a, b, c);

	cout << "Der ggT von 65 und 25 ist: "<< ggT(65, 25) << endl;
	*/ 

	int a;
	int b;
	int c;

	cout << "Formula to be solved: ax^2 + bx + c = 0 " << endl;

	while (a != 0) {
		cout << "Enter a number for a: ";
		cin >> a;
		if (a == 0)
		{
			cout << "Invalid number: division by zero";
		}
	}
	cout << "Enter a number for b: ";
	cin >> b;
	cout << "Enter a number for c: ";
	cin >> c;

	mitternachtsFormel(a, b, c);

	cout << "Der ggT von 65 und 25 ist: " << ggT(65, 25) << endl;
}

static void mitternachtsFormel(int a, int b, int c) {

	/* 
	
	double temp2;
	double x1;
	double x2;

	
	
		temp2 = b * (-1) + std::sqrt(temp1);
		x1 = temp2 / (2 * a);
		

	if (temp1 == 0) {

		cout << "Ergebnis fuer x1 und x2: " << x1 << endl;
	}
	else {

		temp2 = b * (-1) - std::sqrt(temp1);

		x2 = temp2 / (2 * a);


		cout << "Ergebnis fuer x1: " << x1 << " und fuer x2: " << x2 << endl;
	}
	*/

	double discriminant = (b * b) - 4 * a * c;

	if (discriminant <= 0) {
		cout << "Fuer die Werte a: " << a << ", b: " << b << ", c: " << c << " gibt es kein Ergebnis!" << endl;
		return;
	}

	cout << "Your result is: " << endl;
	cout << "x_1 = " << ((-1 * b) + sqrt(discriminant) / (2 * a)) << endl;
	cout << "x_2 = " << ((-1 * b) - sqrt(discriminant) / (2 * a)) << endl;


}

static int ggT(int a, int b) {

	a = abs(a);
	b = abs(b);

	if (a == b) {
	
		return (a);
	}

	if (a > b) {
		
		return ggT(a - b, b);
	}

	if (a < b) {
		
		return ggT(a, b - a);
	}

}



/*
Aufgabe 1.1

Fehler 1:
Zeile	11
Fehler (aktiv)	E0065	Es wurde ein ";" erwartet.

Zeile	11
Fehler	C2146	Syntaxfehler: Fehlendes ";" vor Bezeichner "cout"



Fehler 2:
Zeile	11
Fehler (aktiv)	E0008	Fehlende schlie??ende Anf??hrungszeichen

Zeile	12
Fehler (aktiv)	E0065	Es wurde ein ";" erwartet.

Zeile	11
Fehler	C2001	Zeilenvorschub in Konstante.

Zeile	12
Fehler	C2146	Syntaxfehler: Fehlendes ";" vor Bezeichner "cin"

Here, i would look at the first error first since the next one is following just one line later.  Also, since theerror message says ???newline in constant???, it is likely, that both errors are related.


Fehler 3:
Zeile	11
Fehler (aktiv)	E0020	Der Bezeichner ""cout"" ist nicht definiert.

Zeile	12
Fehler (aktiv)	E0020	Der Bezeichner ""cin"" ist nicht definiert.

Zeile	11
Fehler	C2065	"cout": nichtdeklarierter Bezeichner

Zeile	12
Fehler	C2065	"cin": nichtdeklarierter Bezeichner

Zeile	13
Fehler	C2065	"cout": nichtdeklarierter Bezeichner

Since  all  errors  have  the  same  error  code  and  message,  we  can  assume  that  the  order  of  foxing  does  notmatter.  Either, multiple issues can be resolved by same fix (which is the case here with using the standardlibrary) or not when identifiers have different origins.


Fehler 4:
Zeile	10
Fehler (aktiv)	E0257	Die Konstante "Variable "someNumber"" erfordert einen Initialisierer.

Zeile	12
Fehler (aktiv)	E0349	Kein ">>"-Operator stimmt mit diesen Operanden ??berein.

Zeile	10
Fehler	C2734	"someNumber": "const"-Objekt muss initialisiert werden, wenn es nicht extern ist

Zeile	12
Fehler	C2678	Bin??rer Operator ">>": Es konnte kein Operator gefunden werden, der einen linksseitigen Operanden vom Typ "std::istream" akzeptiert (oder keine geeignete Konvertierung m??glich)

This is likely caused because the compiler does not allow changing the content of a constant, which is whyerrors related to the corresponding operator are put out.


Fehler 5:
Zeile	1
Fehler (aktiv)	E1696	Die Datei "Quelle" kann nicht ge??ffnet werden: "iostream.h".

Zeile	7
Fehler (aktiv)	E0135	"namespace "std"" hat keinen Member ""cout"".

Zeile	11
Fehler (aktiv)	E0020	Der Bezeichner ""cout"" ist nicht definiert.

Zeile	12
Fehler (aktiv)	E0020	Der Bezeichner ""cin"" ist nicht definiert.

Zeile	1
Fehler	C1083	Datei (Include) kann nicht ge??ffnet werden: "iostream.h": No such file or directory

This error occurs since the file iostream which does not has any file extension.  Thus a file named ???iostream.h???cannot be found.


*/

/*
Aufgabe 1.2

int i;
short s;
float f;
char a;
double d;
long l;
char b;

l = i;			// kein Risiko
i = l + 90;		// wenn Zahl + 90 > 2.147.483.647 wird -> ??berlauf
d = f;			// kein Problem, da double viel gr????ere Werte speichern kann
f = s;			// kein Problem, da Short nur von ???32.768 bis 32.767
b = d;			// Kein Error, aber evtl. ungewollt: Wertebereich nur von -128 bis 127 (??berlauf), Wert wird als ASCII Wert interpretiert
a = i;			// Kein Error, aber evtl. ungewollt: Wertebereich nur von -128 bis 127 (??berlauf), Wert wird als ASCII Wert interpretiert
i = d;			// Kein Error, aber evtl. ungewollt: Wertebereich nur von -2.147.483.648 bis 2.147.483.647 (??berlauf)

*/

/*
Aufgabe 1.4

ggT(65, 25)
if 65 > 25
ggT(65-25=40, 25)
if 40 > 25
ggT(40-25=15, 25)
if 15 < 25
ggT(15, 25-15=10)
if 15 > 10
ggT(15-10=5, 10)
if 5 < 10
ggT(5, 10-5=5)
if 5==5
return 5

*/