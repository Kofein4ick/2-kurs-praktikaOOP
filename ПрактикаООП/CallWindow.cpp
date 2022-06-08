#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main(array <System::String^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ПрактикаООП::MainForm mainform;
	Application::Run(% mainform);
	return 0;
}