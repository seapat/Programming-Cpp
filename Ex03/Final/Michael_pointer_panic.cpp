#include <iostream>

using namespace std;

int main() {
    int* funnyNumbers = new int[5];

    cout << sizeof(funnyNumbers) << endl;
    cout << sizeof(*funnyNumbers) << endl;

    // 5 ints a 4 byte => 20 Byte => 20 chars
    // loop through all chars
    for (int i = 0; i < 20; i++) {
        // convert the pointer to the int array to char pointer (interpret the 4 byte int as 1 byte chars)
        char* cp = (char*)funnyNumbers;

        // convert the pointer to the i'th char to int pointer
        int* ip = (int*) (cp + i);

        // assign i+1 to the address for the i'th char
        *ip = i+1;
    }

    for (int i = 0; i < 5; i++) {
        cout << funnyNumbers[i] << endl;
    }

    delete [] funnyNumbers;
}


/*
 * i)
 * sizeof(funnyNumbers) gibt die benötigten Bytes im Speicher für das Array funnyNumbers
 *
 * sizeof(*funnyNumbers) gibts die benötigten Bytes im Speicher für das erste Array Element. (Da funnyNumbers die Start-Speicheradresse
 * des Arrays beinhaltet und *funnyNumbers den Wert welcher an dieser Stelle im Speicher steht)
 *
 *
 * ii)
 * Das Programm interpretiert die fünf 4-Byte integer Werte als 20 1-Byte char Werte. Über diese 20 char Werte wird
 * iteriert und den chars werden aufsteigend die Zahlen 1 - 20 zugeordnet.
 * Final werden die chars wieder als 4 Byte integer interpretiert und ausgegeben.
 *
 * Anschaulich: Daten im Speicher nach der Zuweisung der Zahlen 1 - 20 (in hexadezimal)
 *                   ________
 *                  | 1 Byte|
 *                  |_______|_____________________________________________________________________
 *                  |       |       |       |       |       |     |       |       |       |       |
 * funnyNumbers --> | 0x01  | 0x02  | 0x03  | 0x04  | 0x05  | ... | 0x11  | 0x12  | 0x13  | 0x14  |
 *                  |_______|_______|_______|_______|_______|_____|_______|_______|_______|_______|
 *                  |                               |             |                               |
 *                  |            4 Byte             |             |            4 Byte             |
 *                  |_______________________________|             |_______________________________|
 *                                 |                                             |
 *                                 |                                             |
 *                             0x4030201                                     0x14131211
 *                             => 67305985                                   => 336794129
 *               (entspricht der Ausgabe von funnyNumbers[0])      (entspricht der Ausgabe von funnyNumbers[4])
 *
 * Ausgabe:
 * funnyNumbers[0] = 67305985 -> Hex: 0x4030201
 * funnyNumbers[1] = 134678021 -> Hex: 0x8070605
 * funnyNumbers[2] = 202050057 -> Hex: 0xC0B0A09
 * funnyNumbers[3] = 269422093 -> Hex: 0x100F0E0D
 * funnyNumbers[4] = 336794129 -> Hex: 0x14131211
 */
