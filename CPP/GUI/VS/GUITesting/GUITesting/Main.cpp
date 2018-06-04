#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace GUITesting;

[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GUITesting::MainForm());
}