#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
int n;
cout<<"\n-------------------------------------------------------\n";
cout<<"\n---------------------Write your data-------------------\n";
cout<<"\n-------------------------------------------------------\n";
 cout<< "Please enter an integer <100:" <<  endl;
 cin >>n;
 vector<int> tableau(n);
 for(int i=0;i<n;i++) {
tableau[i]=i*i;
 }
 ofstream text("data.txt");
 text << "Here is the square:" <<  endl;
for(int i=0;i<n;i++) {
 text << i <<": " <<tableau[i] <<  endl;
}
 text.close();


// print and read the file
  ifstream fichier("data.txt");
  
cout<<"\n-------------------------------------------------------\n";
cout<<"\n--------------------Read Your File---------------------\n";
cout<<"\n-------------------------------------------------------\n";


      if(fichier)
{
        string ligne;
        cout<<"
        while(getline(fichier, ligne))  
        {
                cout << ligne << endl;  
        }
}

        else
                cerr << "Impossible to open the file !" << endl;

        return 0;
}


