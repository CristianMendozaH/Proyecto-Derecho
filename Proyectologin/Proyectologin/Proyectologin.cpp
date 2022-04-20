#include "Proyectologin.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyectologin::Proyectologin form;
	Application::Run(% form);
	return 0;
}

