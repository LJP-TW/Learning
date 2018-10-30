#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace GUITesting;

#include <map>
#include <string>

#include "Father.h"
#include "A.h"
#include "B.h"

[STAThread]

//void main()
//{
//	std::map<std::string, Father^> maps;
//	A^ a = gcnew A();
//	B^ b = gcnew B();
//	maps["a"] = a;
//	maps["b"] = b;
//}

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GUITesting::MainForm());
}