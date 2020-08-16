#include "pch.h"
#include "addCourse.xaml.h"

using namespace Teksyn_DataBase_TestAPP;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

addCourse::addCourse()
{
	InitializeComponent();
}


void Teksyn_DataBase_TestAPP::addCourse::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	prerequisite->Children->Append(ref new TextBox());
}


void Teksyn_DataBase_TestAPP::addCourse::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	TextBlock^ msgText = ref new TextBlock();
	msgText->Text = "Course has been added successfully.";
	msgText->Height = 32;

	ContentDialog^ msg = ref new ContentDialog();
	msg->Content = msgText;
	msg->Title = "Add Course Saved";
	msg->PrimaryButtonText = "Okay";
	msg->ShowAsync();
}
