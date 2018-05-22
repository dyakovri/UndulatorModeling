#include "qParticle.cpp"
#include "Graph.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UndulatorModeling::MyForm form;
	Application::Run(%form);
}