#include "pch.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

#include "Form1.h"

[STAThread]
int main()
{
  HANDLE hMutex = CreateMutex(NULL, TRUE, L"CppCLRWinFormsProjectInstance");
  if (GetLastError() == ERROR_ALREADY_EXISTS)
  {
    MessageBox::Show("Another instance is already running.", "Attendance Monitoring", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
    return 1;
  }

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());

  ReleaseMutex(hMutex);
  CloseHandle(hMutex);
  return 0;
}