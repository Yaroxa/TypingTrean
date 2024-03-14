#include "MyForm.h"
using namespace Laba4;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
	return 0;
}

//int main(array<System::String^>^ args) 
//{
//	
//}