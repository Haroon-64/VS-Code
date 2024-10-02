#include <Windows.h>
#include<iostream>
using namespace std;

int main(void){

  int x =  MessageBoxW(// returns interger corresponding to button pressed W refers to wide char*(2bytes) /unicode   MessageBoxA -> ANSII encoding(1 byte char) etc   MessageBox(Ex) ex funtions have more parameters
        NULL,  // attach to a process/ owner window
        L"MESSAGE", // message to display
        L"notitle", // default title error   L -> wide char macro
        MB_YESNO | MB_ICONEXCLAMATION       // buttons and icons to diplay(predefined)  
    ); 

STARTUPINFOW si={0}; 
PROCESS_INFORMATION lpi={0};

bool y = CreateProcessW( //returns bool
    L"C:\\Windows\\System32\\notepad.exe", //path of program  (some are not starting ex. ones in user directory)
    NULL, //for comand line parameters
    NULL,  //define if a process can be inherited by child
    NULL, //thread attr
    FALSE, //to not inherit handles
    BELOW_NORMAL_PRIORITY_CLASS, //set priority of process (normal is 0)
    NULL, //pointer to environment / by default use that of calling process
    NULL, //path of process/ default use of calling
    &si, //pointer to a structure of type STARTUPINFO or STARTUPINFOEX
    &lpi//pointer to PROCESS_INFORMATION struct
  );

if(!y)
{
  cout<<"(-) failed to start process  error "<<GetLastError(); //return error code of calling thread
  return EXIT_FAILURE;
}

cout<<"button "<<x<<" was pressed\n";
cout<<"pid is "<<lpi.dwProcessId;
return EXIT_SUCCESS;
}

