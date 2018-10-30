#include "MyForm.h"

namespace InheritControls
{
	System::Void MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Layer2^ l2 = gcnew Layer2();
		this->Controls->Add(l2);
	}
}
