#include "MyForm.h"
#include<chrono>

using namespace System;
using namespace System::Windows::Forms;



[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GUII::MyForm form;
	Application::Run(%form);
}