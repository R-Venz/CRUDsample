#include "MyForm.h"

using namespace CRUDsample;

[STAThreadAttribute]
int main() {
    Application::Run(gcnew MyForm());
    return 0;
}