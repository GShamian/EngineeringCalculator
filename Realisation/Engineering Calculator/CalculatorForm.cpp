#include "CalculatorForm.h"

using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void Main() {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	EngineeringCalculator::CalculatorForm form;

	Application::Run(%form);

}