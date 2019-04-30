#include "Form1.h"
#include <fcntl.h>
#include <io.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ComProProject2::Form1 form;
	Application::Run(%form);
	
}
