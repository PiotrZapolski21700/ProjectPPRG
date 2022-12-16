#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <limits>
using namespace std;

int add() 
{
    
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
    
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowy numer operacji";
            return 0;
    }
    
    if(addoperation == 1){
        
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	    matrix2[i1][i2] = rand() % 10;
        	}
        }
    }
    else if(addoperation == 2){
        
        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
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
        
        if(matrix1rows == matrix2rows && matrix1columns == matrix2columns){
           cout << "Wynik dodawania macierzy 1 i 2" << endl
    		 << "------------------------" << endl;
        	for(i1 = 0; i1 < matrix1rows; i1++){
        		cout << endl;
                for(i2 = 0; i2 < matrix1columns; i2++)
        		cout << "   " << matrix1[i1][i2] + matrix2[i1][i2];
        	} 
        }
        else{
            cout << "Nie da sie dodac tych macierzy, poniewaz ich wymiary nie sa takie same!";
        }
    }
   
    return 0;
}

int subtract() 
{
    
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
    
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowy numer operacji";
            return 0;
    }
    
    if(subtractoperation == 1){
        
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	    matrix2[i1][i2] = rand() % 10;
        	}
        }
    }
    else if(subtractoperation == 2){
        
        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
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
        		if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');;
                    cout << endl << "Nieprawidlowa warosc";
                    return 0;
                }
        	}
        }
        
    }
    else{
        cout << "Nieprawidlowy numer operacji";
    }
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
        
        if(matrix1rows == matrix2rows && matrix1columns == matrix2columns){
           cout << "Wynik odejmowania macierzy 1 i 2" << endl
    		 << "------------------------" << endl;
        	for(i1 = 0; i1 < matrix1rows; i1++){
        		cout << endl;
                for(i2 = 0; i2 < matrix1columns; i2++)
        		cout << "   " << matrix1[i1][i2] - matrix2[i1][i2];
        	} 
        }
        else{
            cout << "Nie da sie odjac tych macierzy, poniewaz ich wymiary nie sa takie same!";
        }
    }
    
    return 0;
}

int multiply() 
{
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
    
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Nieprawidlowy numer operacji";
            return 0;
    }
    
    if(multiplyoperation == 1){
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	    matrix2[i1][i2] = rand() % 10;
        	}
        }
    }
    else if(multiplyoperation == 2){
        
        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
           return 0;
        }
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
        
        int multimatrix[matrix1rows][matrix2columns];
        
        for(i1 = 0; i1 < matrix1rows; ++i1){
            for(i2 = 0; i2 < matrix2columns; ++i2){
                multimatrix[i1][i2] = 0;
            }
        }
            
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
        else{
            cout << "Nie da sie pomnozyc tych macierzy, poniewaz liczba kolumn macierzy 1 nie jest rowna liczbie rzedow macierzy 2!";
        }
    }
    
    return 0;
}

int transposition() 
{
    
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
    
    if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Nieprawidlowy numer operacji";
            return 0;
    }
    
    if(transpositionoperation == 1){
        for(i1 = 0; i1 < matrix1rows; i1++){
        	for(i2 = 0; i2 < matrix1columns; i2++){												
        	    matrix1[i1][i2] = rand() % 10;
        	}
        }
    }
    else if(transpositionoperation == 2){

        cout << "Podaj wymiary macierzy 1:" << endl;
        cout << "Rzedy: ";
        cin >> matrix1rows;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl << "Nieprawidlowa warosc";
            return 0;
        }
        cout << "Kolumny: ";
        cin >> matrix1columns;
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

int main() 
{
    
    cout << "WITAJ W KALKULATORZE MACIERZY" << endl						
		 << "================================" << endl;
		 
	int operation = 0;
	
    while(operation != 5){
        cout << "WPISZ NUMER ABY WYBRAC OPERACJE" << endl
        << "================================" << endl;
        cout << "1. Dodaj macierze" << endl;
        cout << "2. Odejmij macierze" << endl;
        cout << "3. Pomnoz macierze" << endl;
        cout << "4. Transponuj macierz" << endl;
        cout << "5. WYJSCIE" << endl;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        
        cin >> operation;
        
        switch(operation){
             case 1:
                add ();
            break;
            case 2:
                subtract ();
            break;
            case 3:
                multiply ();
            break;
            case 4:
                transposition ();
            break;
            case 5:
                cout << "Do zobaczenia!";
            break;
            default:
                cout << "Nieprawidlowy numer operacji";
        } 
        
        cout << endl;
        cout << endl;
    }
    
    return 0;
}
