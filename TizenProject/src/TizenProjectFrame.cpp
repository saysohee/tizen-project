#include <new>
#include "TizenProjectFrame.h"
#include "TizenProjectForm.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;

TizenProjectFrame::TizenProjectFrame(void)
{
}

TizenProjectFrame::~TizenProjectFrame(void)
{
}

result
TizenProjectFrame::OnInitializing(void)
{
	result r = E_SUCCESS;

	// Create a form
	TizenProjectForm* pTizenProjectForm = new (std::nothrow) TizenProjectForm();
	TryReturn(pTizenProjectForm != null, false, "The memory is insufficient.");
	pTizenProjectForm->Initialize();

	// Add the form to the frame
	AddControl(pTizenProjectForm);

	// Set the current form
	SetCurrentForm(pTizenProjectForm);

	// Draw the form
	pTizenProjectForm->Invalidate(true);

	// TODO: Add your frame initialization code here.

	return r;
}

result
TizenProjectFrame::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your frame termination code here.
	return r;
}


