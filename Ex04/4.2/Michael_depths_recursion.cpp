/*
 *  a)
 */

double functionA(int n) {
    int m = n + 12;
    m += functionA(n-1) * 0.5;
    return m;
}
/*
 * Problematische Zeile: 7  (Zeile 3 in der Angabe)
 * Die Funktion besitzt keine Abbruchbedingung und würde daher nie ein Ende erreichen.
 * Eine Lösung wäre Zeile 7 in eine if-Bedingung zu packen welche bspw. auf n > 0 prüft.
 * if(n > 0)
 *     m += functionA(n-1) * 0.5;
 */





/*
 *  b)
 */

double functionB(int n) {
    if (n == 0)
        return 42;
    return 2 * functionB(n);
}
/*
 * Problematische Zeile: 29 (Zeile 4 in der Angabe)
 * Der rekursive Aufruf ändert den Parameter n nicht, weshalb die Abbruchbedingung nie erreicht wird.
 * Eine Lösung wäre den Aufruf durch functionB(n < 0? n+1 : n-1) zu ersetzen, somit erreicht die Funktion irgendwann
 * den Fall n = 0 und beendet die Rekursion.
 */





/*
 *  c)
 */

double functionC_worker(int n1, int n2, int n, int i) {
    if (n <= 0)
        return 0;
    else if(i >= n)
        return n1;

    return functionC_worker(n1 + n2 + n1, n1, n, i+1);
}

double functionC(int n) {
    if (n == 0)
        return 0;
    return functionC(n-1) + functionC(n-2) + functionC(n-1);
}
/*
 * Problematische Zeile: 49 (Zeile 4 in der Angabe)
 * Da die Funktion nicht endrekursive ist und innerhalb der Funktion drei rekursive Aufrufe gemacht werden bekommen wir
 * hier sehr schnell einen Stack Overflow. Die trivialste Lösung wäre hier die letzte Zeile durch return 0 zu ersetzen,
 * da die Funktion immer zu 0 evaluiert. Für eine mehr generische Lösung könnte man eine Worker-Methode ergänzen
 * welche einen weiteren Parameter als Akkumulator verwendet. Dadurch könnte die Funktion endrekursiv gemacht werden wodruch
 * kein Overflow mehr auftritt.
 */

int main() {
    functionA(2);
    functionB(2);
    functionC(10048);
}
