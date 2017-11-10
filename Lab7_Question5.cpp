#include <iostream>
using namespace std;

class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); 
      char* reptName ();
      void Create(char *n, int a1, int a2, int a3);
      int daysSinceLastWeighed (int today);
   }; 
   
   void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }

 
   void ZooAnimal::Create(char *n,int a1, int a2, int a3)
      {
         name=n;
         cageNumber=a1;
         weightDate=a2;
         weight=a3;
      }
      
        char* ZooAnimal::reptName ()
   {
    return name;
   }
   
   int ZooAnimal::daysSinceLastWeighed(int today)
   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);
   }



   int main ()
   {
       ZooAnimal bozo;
       char name[50] = "Bozo";
   
    bozo.Create (name, 408, 1027, 400);
    cout << "This animal's name is " << bozo.reptName() << endl;
    bozo.Destroy ();
   }
