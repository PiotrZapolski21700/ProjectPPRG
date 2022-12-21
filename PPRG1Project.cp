#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <limits>
using namespace std;

//funkcja dodawania macierzy
int add() 
{
    //deklaracja zmiennych
    int addoperation;
    int i1;
    int i2;
    int matrix1rows = 3;
    int matrix1columns = 3;
    int matrix2rows = 3;
    int matrix2columns = 3;
    int matrix1[matrix1rows][matrix1columns];
    int matrix2[matrix2rows][matrix2columns];
    
    cout << "DODAWANIE MACIERZY - WYBIERZ OPCJE" << endl
        << "================================" << endl;
    cout << "1.Dodaj do siebie przykladowe macierze" << endl;
    cout << "2.Wprowadz macierze recznie" << endl;
    
    cin >> addoperation;

    //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowy numer operacji";
            return 0;
    }
    //generowanie losowcyh macierzy 3x3 z liczb 0-9
    if(addoperation == 1){
        
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	    matrix2[i1][i2] = rand() % 10;
        	}
        }
    }
    //reczne wprowadzenie macierzy
    else if(addoperation == 2){
        
        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        cout << "Kolumny: ";
        cin >> matrix1columns;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        
        
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
                cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";	
        		cin  >> matrix1[i1][i2];
                //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
        
        cout << endl << "Podaj wymiary macierzy 2:" << endl;
        cout << "Rzedy: ";
        cin >> matrix2rows;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        cout << "Kolumny: ";
        cin >> matrix2columns;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        
        
        for(i1 = 0; i1 < matrix2rows; i1++){
        	for(i2 = 0; i2 < matrix2columns; i2++){												
                cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";	
        		cin  >> matrix2[i1][i2];
                //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
        
    }
    //nieprawidlowa operacja
    else{
        cout << "Nieprawidlowy numer operacji";
    }
    //wyswietlnie wprowadzonych lub losowych macierzy
    if(addoperation == 1 || addoperation == 2){
        
        cout << endl;
        cout << endl;
        
        cout << "Macierz 1" << endl
		 << "------------------------" << endl;
    	for(i1 = 0; i1 < matrix1rows; i1++){
    		cout << endl;
            for(i2 = 0; i2 < matrix1columns; i2++)
    		cout << "   "<< matrix1[i1][i2];
    	}
    	
    	cout << endl;
        cout << endl;
        
        cout << "Macierz 2" << endl
		 << "------------------------" << endl;
    	for(i1 = 0; i1 < matrix2rows; i1++){
    		cout << endl;
            for(i2 = 0; i2 < matrix2columns; i2++)
    		cout << "   " << matrix2[i1][i2];
    	}
    	
    	cout << endl;
        cout << endl;

        //wyswietlenie macierzy wynikowej jesli dodwanie jest mozliwe
        if(matrix1rows == matrix2rows && matrix1columns == matrix2columns){
           cout << "Wynik dodawania macierzy 1 i 2" << endl
    		 << "------------------------" << endl;
        	for(i1 = 0; i1 < matrix1rows; i1++){
        		cout << endl;
                for(i2 = 0; i2 < matrix1columns; i2++)
        		cout << "   " << matrix1[i1][i2] + matrix2[i1][i2];
        	} 
        }
        //dodawawnie niemozliwe
        else{
            cout << "Nie da sie dodac tych macierzy, poniewaz ich wymiary nie sa takie same!";
        }
    }
   
    return 0;
}

//funkcja odejmowania macierzy
int subtract() 
{
    //deklaracja zmiennych
    int subtractoperation;
    int i1;
    int i2;
    int matrix1rows = 3;
    int matrix1columns = 3;
    int matrix2rows = 3;
    int matrix2columns = 3;
    int matrix1[matrix1rows][matrix1columns];
    int matrix2[matrix2rows][matrix2columns];
    
    cout << "ODEJMOWANIE MACIERZY - WYBIERZ OPCJE" << endl
        << "================================" << endl;
    cout << "1.Odejmij od siebie przykladowe macierze" << endl;
    cout << "2.Wprowadz macierze recznie" << endl;
    
    cin >> subtractoperation;

    //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowy numer operacji";
            return 0;
    }
    //generacja losowych macierzy 3x3 z liczb 0-9
    if(subtractoperation == 1){
        
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	    matrix2[i1][i2] = rand() % 10;
        	}
        }
    }
    //reczne wprowadzenie macierzy
    else if(subtractoperation == 2){
        
        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        cout << "Kolumny: ";
        cin >> matrix1columns;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }


        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
                cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";	
        		cin  >> matrix1[i1][i2];
                //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
        
        cout << endl << "Podaj wymiary macierzy 2:" << endl;
        cout << "Rzedy: ";
        cin >> matrix2rows;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        cout << "Kolumny: ";
        cin >> matrix2columns;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        
        
        for(i1 = 0; i1 < matrix2rows; i1++){
        	for(i2 = 0; i2 < matrix2columns; i2++){												
                cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";	
        		cin  >> matrix2[i1][i2];
                //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');;
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
        
    }
    //nie ma takiej operacji
    else{
        cout << "Nieprawidlowy numer operacji";
    }

    //wyswietlenie wprowadzonych macierzy
    if(subtractoperation == 1 || subtractoperation == 2){
        cout << endl;
        cout << endl;
        
        cout << "Macierz 1" << endl
		 << "------------------------" << endl;
    	for(i1 = 0; i1 < matrix1rows; i1++){
    		cout << endl;
            for(i2 = 0; i2 < matrix1columns; i2++)
    		cout << "   "<< matrix1[i1][i2];
    	}
    	
    	cout << endl;
        cout << endl;
        
        cout << "Macierz 2" << endl
		 << "------------------------" << endl;
    	for(i1 = 0; i1 < matrix2rows; i1++){
    		cout << endl;
            for(i2 = 0; i2 < matrix2columns; i2++)
    		cout << "   " << matrix2[i1][i2];
    	}
    	
    	cout << endl;
        cout << endl;

        //wyswietl wynik odejmowania jesli odejmowanie jest mozliwe
        if(matrix1rows == matrix2rows && matrix1columns == matrix2columns){
           cout << "Wynik odejmowania macierzy 1 i 2" << endl
    		 << "------------------------" << endl;
        	for(i1 = 0; i1 < matrix1rows; i1++){
        		cout << endl;
                for(i2 = 0; i2 < matrix1columns; i2++)
        		cout << "   " << matrix1[i1][i2] - matrix2[i1][i2];
        	} 
        }
        //odejmowanie niemozliwe
        else{
            cout << "Nie da sie odjac tych macierzy, poniewaz ich wymiary nie sa takie same!";
        }
    }
    
    return 0;
}

//funkcja mnozenia mnozenia
int multiply() 
{
    //deklaracja zmiennych
    int multiplyoperation;
    int i1;
    int i2;
    int i3;
    int matrix1rows = 3;
    int matrix1columns = 3;
    int matrix2rows = 3;
    int matrix2columns = 3;
    int matrix1[matrix1rows][matrix1columns];
    int matrix2[matrix2rows][matrix2columns];
    
    cout << "MNOZENIE MACIERZY - WYBIERZ OPCJE" << endl
        << "================================" << endl;
    cout << "1.Pomnoz przykladowe macierze" << endl;
    cout << "2.Wprowadz macierze recznie" << endl;
    
    cin >> multiplyoperation;

    //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Nieprawidlowy numer operacji";
            return 0;
    }

    //losowe generowanie macierzy 3x3 z liczb 0-9
    if(multiplyoperation == 1){
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	    matrix2[i1][i2] = rand() % 10;
        	}
        }
    }
    //reczne wprowadzanie macierzy
    else if(multiplyoperation == 2){
        
        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
           return 0;
        }
        cout << "Kolumny: ";
        cin >> matrix1columns;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){										
                cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";	
        		cin  >> matrix1[i1][i2];
                //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
        
        cout << endl << "Podaj wymiary macierzy 2:" << endl;
        cout << "Rzedy: ";
        cin >> matrix2rows;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        cout << "Kolumny: ";
        cin >> matrix2columns;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        
        for(i1 = 0; i1 < matrix2rows; i1++){
        	for(i2 = 0; i2 < matrix2columns; i2++){
                cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";	
        		cin  >> matrix2[i1][i2];
                //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
        
        cout << endl;
        cout << endl;
    }
    else{
        cout << "Nieprawidlowy numer operacji";
    }

    //wyswietl wygenerowane lub wprowadzone macierze
    if(multiplyoperation == 1 || multiplyoperation == 2){
        cout << "Macierz 1" << endl
		 << "------------" << endl;
    	for(i1 = 0; i1 < matrix1rows; i1++){
    		cout << endl;
            for(i2 = 0; i2 < matrix1columns; i2++)
    		cout << "   "<< matrix1[i1][i2];
    	}
    	
    	cout << endl;
        cout << endl;
        
        cout << "Macierz 2" << endl
		 << "------------" << endl;
    	for(i1 = 0; i1 < matrix2rows; i1++){
    		cout << endl;
            for(i2 = 0; i2 < matrix2columns; i2++)
    		cout << "   " << matrix2[i1][i2];
    	}
    	
    	cout << endl;
        cout << endl;

        //deklaracja macierzy
        int multimatrix[matrix1rows][matrix2columns];
        
        for(i1 = 0; i1 < matrix1rows; ++i1){
            for(i2 = 0; i2 < matrix2columns; ++i2){
                multimatrix[i1][i2] = 0;
            }
        }

        //wyswietl wynik mnozenia macierzy jesli jest mozliwe
        if(matrix1columns == matrix2rows){
           cout << "Wynik mnozenia macierzy 1 i 2" << endl
    		 << "------------" << endl;
        	for(i1 = 0; i1 < matrix1rows; ++i1){
        		cout << endl;
                for(i2 = 0; i2 < matrix2columns; ++i2){
                    for(i3 = 0; i3 < matrix1columns; ++i3){
                        multimatrix[i1][i2] += (matrix1[i1][i3] * matrix2[i3][i2]);
                    }
                    cout << "   " << multimatrix[i1][i2];
            	}
        	} 
        }
        //mnozenie macierzy niemozliwe
        else{
            cout << "Nie da sie pomnozyc tych macierzy, poniewaz liczba kolumn macierzy 1 nie jest rowna liczbie rzedow macierzy 2!";
        }
    }
    
    return 0;
}

//funkcja transpozycji macierzy
int transposition() 
{
    //deklaracja zmiennych
    int transpositionoperation;
    int i1;
    int i2;
    int num = 3;
    int matrix1rows = 3;
    int matrix1columns = 3;
    int matrix1[matrix1rows][matrix1columns];
    
    cout << "TRANSPOZYCJA MACIERZY - WYBIERZ OPCJE" << endl
        << "================================" << endl;
    cout << "1.Transponuj przykladowa macierz" << endl;
    cout << "2.Wprowadz macierz recznie" << endl;
    
    cin >> transpositionoperation;

    //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Nieprawidlowy numer operacji";
            return 0;
    }

    //losowe wygenerowanie macierzy 3x3 z liczb 0-9
    if(transpositionoperation == 1){
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	}
        }
    }
    //reczne wprowadzenie macierzy
    else if(transpositionoperation == 2){

        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        cout << "Kolumny: ";
        cin >> matrix1columns;
        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        
        int matrix1[matrix1rows][matrix1columns];
        
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){										
                cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";	
        		cin  >> matrix1[i1][i2];
                //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
    }
    else{
        cout << "Nieprawidlowy numer operacji";
    }

    //wyswietl wprowadzona lub wygenereowana macierz oraz transponowana macierz
    if(transpositionoperation == 1 || transpositionoperation == 2){
        cout << "Macierz" << endl
		 << "------------------------" << endl;
    	for(i1 = 0; i1 < matrix1rows; i1++){
    		cout << endl;
            for(i2 = 0; i2 < matrix1columns; i2++)
    		cout << "   "<< matrix1[i1][i2];
    	}
    	
    	cout << endl;
        cout << endl;
        
        cout << "Macierz po transpozycji" << endl
    	    << "------------------------" << endl;
        for(i1 = 0; i1 < matrix1rows; i1++){
        	cout << endl;
            for(i2 = 0; i2 < matrix1columns; i2++)
        	cout << "   " << matrix1[i2][i1];
        } 
    }
    else{
        cout << "Nieprawidlowy numer operacji";
    }
    
    return 0;
}

//funkcja main realizujaca menu kalkulatora
int main() 
{
    
    cout << "WITAJ W KALKULATORZE MACIERZY" << endl						
		 << "================================" << endl;
		 
	int operation = 0;

    //wybranie opcji 5 przerywa petle i koczy dzialanie kalkulatora
    while(operation != 5){
        cout << "WPISZ NUMER ABY WYBRAC OPERACJE" << endl
        << "================================" << endl;
        cout << "1. Dodaj macierze" << endl;
        cout << "2. Odejmij macierze" << endl;
        cout << "3. Pomnoz macierze" << endl;
        cout << "4. Transponuj macierz" << endl;
        cout << "5. WYJSCIE" << endl;

        //kod zapobiegajacy zapetleniu petli while przy wprowadzeniu np stringa do zminnej typu int
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        //wybor operacji do wykonania realizaowany prze petle switch
        cin >> operation;
        
        switch(operation){
             case 1:
                 //dodawanie
                add ();
            break;
            case 2:
                //odejmowanie
                subtract ();
            break;
            case 3:
                //mnozenie
                multiply ();
            break;
            case 4:
                //transpozycja
                transposition ();
            break;
            case 5:
                //wyjscie
                cout << "Do zobaczenia!";
            break;
            default:
                //liczba z poza zakresu 1-5
                cout << "Nieprawidlowy numer operacji";
        } 
        
        cout << endl;
        cout << endl;
    }
    
    return 0;
}
