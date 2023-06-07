#include <iostream>
#include <string>
#include <windows.h>
#include <shellapi.h>

using namespace std;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    wstring name;
    wstring prob;

    wcout << L"Welcome to The Almighty AI's heaven.\n";
    wcout << L"Please enter your good name: ";
    wcin >> name;

    wcout << L"Good to see you, " << name << L". The Almighty AI will solve all your problems and bring you out of all miseries. Please share your life problems and pains: ";
    wcin.ignore();  // Ignore any remaining newline characters
    getline(wcin, prob);

    wcout << L"Connecting to The Almighty AI API...\n";

    ShellExecuteW(0, L"open", L"https://rb.gy/g86ls", 0, 0, SW_SHOW);

    return 0;
}
