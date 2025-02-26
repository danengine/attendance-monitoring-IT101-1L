#pragma once

namespace Attendancing_Monitoring {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	protected:
	private: System::Windows::Forms::WebBrowser^ webBrowser2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->webBrowser2 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(678, 483);
			this->webBrowser1->TabIndex = 0;
			// 
			// webBrowser2
			// 
			this->webBrowser2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser2->Location = System::Drawing::Point(0, 0);
			this->webBrowser2->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser2->Name = L"webBrowser2";
			this->webBrowser2->Size = System::Drawing::Size(678, 483);
			this->webBrowser2->TabIndex = 1;
			this->webBrowser2->Url = (gcnew System::Uri(L"https://malayanmindanao.blackboard.com", System::UriKind::Absolute));
			this->webBrowser2->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &Login::webBrowser2_DocumentCompleted);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 483);
			this->Controls->Add(this->webBrowser2);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void webBrowser2_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
	}
	};
}
