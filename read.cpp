#include <iostream>
#include<fstream>

using namespace std;


int main()
{



 ifstream fichier("data.txt");

 ifstream fichier1("config.dat"); 
 string line;
 int a=0;
while( getline(fichier1,line1))

fichier1.close();
int tableau[40][40];

getline(fichier,line);// jump the first line
 for(int i=0;i<line.size();i++){

    getline(fichier,line);

    for(int j=0;j<a;j++ ){
      if(line[j]=='*')
        tableau[i][j]=1;
        else
             tableau[i][j]=0;

    }
 }
 fichier.close();

 cout<<"\n---------------------------------------------\n";
 cout<<"\n-------------print out the tab---------------\n";
cout<<"\n----------------------------------------------\n";

 for(int i=0;i<40;i++){


    for(int j=0;j<40;j++ ){

        cout<<tableau[i][j];
    }
    cout<<endl;
 }




    return 0;
}
