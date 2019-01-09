#include <iostream>
using namespace std; 
int main () 
{
        cout << "***** CHUONG TRINH TINH SO NAM GUI TIEN  -  LAI KEP******\n";
		int InAmount, ExpAmt ; 
        cout << "\nNhap so tien ban dau  = " ; 
        cin  >> InAmount ;
        cout << "\nNhap lai suat tiet kiem theo nam  = " ;
        double DepIntRate;
		cin  >> DepIntRate ;
		cout << "\nNhap so tien ky vong = " ; 
		cin  >> ExpAmt ;
    	int xyears, balance; 
		double Interest ;
	    xyears = 0;
	    balance = InAmount;
		Interest = 0.00;
		while(balance < ExpAmt) {
			xyears = xyears + 1;
			Interest = (DepIntRate / 100.00) * balance;
			balance = balance + Interest;
			//cout << "xyears "<< xyears <<" Interest " << Interest << " balance " << balance << " ExpAmt " << ExpAmt << " DepIntRate " << DepIntRate << "\n";
		};
        cout << "\nSo NAM de dat duoc so tien ky vong la:   "<< xyears <<" nam!\n";
        return 0;
}


