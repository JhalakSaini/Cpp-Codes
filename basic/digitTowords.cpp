#include<iostream>
using namespace std;
int main(){

   int n;
    cout<<"enter the number ";
    cin>>n;
    int rev = 0;

    while (n>0)
    {
        int r = n%10;
        n = n/10;
        rev = rev *10 + r;
        
        
    }
    while (rev>0)
    {
        int r = rev%10;
        rev = rev/10;

        switch (r)
        {
        case 1:
            cout<<"one ";
            break;
        case 2:
            /* code */cout<<"two ";
            break;
        case 3:
            /* code */cout<<"three ";
            break;
        case 4:
            /* code */cout<<"four ";
            break;
        case 5:
            /* code */cout<<"five ";
            break;
        case 6:
            /* code */cout<<"six ";
            break;
        case 7:
            /* code */cout<<"seven ";
            break;
        case 8:
            /* code */cout<<"eight ";
            break;
        case 9:
            /* code */cout<<"nine ";
            break;
        default:
            cout<<"zero ";
            break;
        }
    }
    
    
    
    
    return 0;
}
















    
    













