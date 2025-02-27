#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
        Form1(void)
        {
        InitializeComponent();
        this->HelpButtonClicked += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::Form1_HelpButtonClicked);
        try {
			this->pictureBox1->Load("https://files.danengine.tech/attendance/mcm-ccis.png");
			System::Net::WebClient^ client = gcnew System::Net::WebClient();
			array<Byte>^ iconData = client->DownloadData("https://files.danengine.tech/attendance/app.ico");
			System::IO::MemoryStream^ iconStream = gcnew System::IO::MemoryStream(iconData);
			this->Icon = gcnew System::Drawing::Icon(iconStream);
        }
        catch (Exception^ ex) {
                MessageBox::Show("Error loading image or icon: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                this->Close();
        }
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: bool dragging = false;
	private: System::Drawing::Point offset;






	private: System::Windows::Forms::Button^ markattendance;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ studentList;




	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ studentid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;


















































































	private: System::ComponentModel::IContainer^ components;









	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->markattendance = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->studentList = (gcnew System::Windows::Forms::DataGridView());
			this->studentid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentList))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(753, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Auto Fill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(611, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(608, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Student ID";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(611, 210);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(334, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(612, 302);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(608, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(609, 286);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Program";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(609, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(719, 286);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Year";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(721, 302);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(611, 256);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(334, 20);
			this->textBox5->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->ImageLocation = L"https://files.danengine.tech/attendance/mcm-ccis.png";
			this->pictureBox1->Location = System::Drawing::Point(12, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(278, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// markattendance
			// 
			this->markattendance->Location = System::Drawing::Point(827, 293);
			this->markattendance->Name = L"markattendance";
			this->markattendance->Size = System::Drawing::Size(118, 36);
			this->markattendance->TabIndex = 7;
			this->markattendance->Text = L"Mark Attendance";
			this->markattendance->UseVisualStyleBackColor = true;
			this->markattendance->Click += gcnew System::EventHandler(this, &Form1::markattendance_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 124);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(278, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(9, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Search Student";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click_2);
			// 
			// studentList
			// 
			this->studentList->AllowUserToAddRows = false;
			this->studentList->AllowUserToDeleteRows = false;
			this->studentList->AllowUserToResizeColumns = false;
			this->studentList->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::LightGray;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			this->studentList->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->studentList->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->studentList->BackgroundColor = System::Drawing::Color::White;
			this->studentList->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->studentList->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->studentList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->studentList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->studentList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->studentid,
					this->name, this->Column1, this->Column2, this->Date, this->Time
			});
			this->studentList->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->studentList->EnableHeadersVisualStyles = false;
			this->studentList->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->studentList->Location = System::Drawing::Point(12, 150);
			this->studentList->Name = L"studentList";
			this->studentList->ReadOnly = true;
			this->studentList->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->studentList->RowHeadersVisible = false;
			this->studentList->Size = System::Drawing::Size(585, 390);
			this->studentList->TabIndex = 0;
			this->studentList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// studentid
			// 
			this->studentid->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->studentid->DefaultCellStyle = dataGridViewCellStyle3;
			this->studentid->FillWeight = 60;
			this->studentid->HeaderText = L"Student ID";
			this->studentid->Name = L"studentid";
			this->studentid->ReadOnly = true;
			this->studentid->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column1->FillWeight = 50;
			this->Column1->HeaderText = L"Program";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column2->FillWeight = 40;
			this->Column2->HeaderText = L"Year";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Date
			// 
			this->Date->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Date->FillWeight = 60;
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Time
			// 
			this->Time->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Time->FillWeight = 60;
			this->Time->HeaderText = L"Time";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(650, 74);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(276, 26);
			this->dateTimePicker1->TabIndex = 17;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 554);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->studentList);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->markattendance);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Attendance Monitoring";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void LoadAttendance() {
	}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		for each (DataGridViewColumn ^ column in this->studentList->Columns) {
			column->ReadOnly = true;
		}
		this->studentList->Columns["studentid"]->Width = 100;
		this->studentList->Columns["name"]->Width = 250;
		String^ exeDirectory = Application::StartupPath;
		String^ filePath = System::IO::Path::Combine(exeDirectory, "attendance.csv");

		// Ensure the attendance.txt file exists
		if (System::IO::File::Exists(filePath)) {
			System::IO::StreamReader^ reader = nullptr;
			try {
				reader = gcnew System::IO::StreamReader(filePath);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr) {
					array<String^>^ parts = line->Split(',');
					if (parts->Length >= 3) {
						String^ studentName = parts[1] + "," + parts[2];
						studentList->Rows->Add(parts[0], studentName, parts[3], parts[4]);
					}
				}
			}
			catch (Exception^ ex) {
				// Handle file read exceptions if necessary
				MessageBox::Show("Error reading attendance file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
			finally {
				if (reader != nullptr) {
					reader->Close();
				}
				this->studentList->Sort(this->studentList->Columns["Time"], System::ComponentModel::ListSortDirection::Descending);
			}
		}
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->Cursor = Cursors::WaitCursor;

			String^ studentId = textBox1->Text;

			String^ url = "https://api.danengine.tech/v1/student/project?studentId=" + studentId;

			System::Net::HttpWebRequest^ request = (System::Net::HttpWebRequest^)System::Net::WebRequest::Create(url);
			request->Method = "GET";

			System::Net::HttpWebResponse^ response = (System::Net::HttpWebResponse^)request->GetResponse();
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(response->GetResponseStream());
			String^ jsonResponse = reader->ReadToEnd();

			reader->Close();
			response->Close();

			String^ studentIdStr = ExtractValue(jsonResponse, "\"id\":\"", "\"");
			String^ studentName = ExtractValue(jsonResponse, "\"name\":\"", "\"");
			String^ studentLevel = ExtractValue(jsonResponse, "\"level\":\"", "\"");
			String^ studentProgram = ExtractValue(jsonResponse, "\"program\":\"", "\"");
			String^ studentEmail = ExtractValue(jsonResponse, "\"email\":\"", "\"");

			textBox2->Text = studentName;
			textBox3->Text = studentProgram;
			textBox4->Text = studentLevel;
			textBox5->Text = studentEmail;

		}
		catch (Exception^ ex) {
            MessageBox::Show(this, "Student Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
		}
		finally {
			// Change cursor back to default
			this->Cursor = Cursors::Default;
		}
    }

    String^ ExtractValue(String^ source, String^ startDelimiter, String^ endDelimiter) {
		int startIndex = source->IndexOf(startDelimiter);
		if (startIndex == -1) {
		MessageBox::Show("Delimiter not found: " + startDelimiter, "Debug", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return "N/A"; // Not found
		}

		startIndex += startDelimiter->Length;
		int endIndex = source->IndexOf(endDelimiter, startIndex);

		if (endIndex == -1) {
		MessageBox::Show("End delimiter not found: " + endDelimiter, "Debug", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return "N/A"; // Not found
		}

		return source->Substring(startIndex, endIndex - startIndex);
    }
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void markattendance_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(textBox2->Text) &&
			!String::IsNullOrEmpty(textBox3->Text) &&
			!String::IsNullOrEmpty(textBox4->Text) &&
			!String::IsNullOrEmpty(textBox5->Text)) {

			String^ studentId = textBox1->Text;
			String^ studentName = textBox2->Text;
			String^ currentDate = DateTime::Now.ToString("yyyy-MM-dd");
			String^ currentTime = DateTime::Now.ToString("hh:mm:ss tt");

			// Get the path of the directory where the executable is located
			String^ exeDirectory = Application::StartupPath;
			String^ filePath = System::IO::Path::Combine(exeDirectory, "attendance.csv");

			// Ensure the attendance.txt file exists
			if (!System::IO::File::Exists(filePath)) {
				System::IO::File::Create(filePath)->Close();
			}

			// Read existing attendance records
			bool alreadyMarked = false;
			System::IO::StreamReader^ reader = nullptr;
			try {
				reader = gcnew System::IO::StreamReader(filePath);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr) {
					array<String^>^ parts = line->Split(',');
					if (parts->Length >= 3 && parts[0] == studentId && parts[2] == currentDate) {
						alreadyMarked = true;
						break;
					}
				}
			}
			catch (Exception^ ex) {
				// Handle file read exceptions if necessary
				MessageBox::Show("Error reading attendance file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (reader != nullptr) {
					reader->Close();
				}
			}

			if (alreadyMarked) {
				MessageBox::Show("Attendance already marked for today", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				// Write to attendance.txt
				System::IO::StreamWriter^ writer = nullptr;
				try {
					writer = gcnew System::IO::StreamWriter(filePath, true);
					writer->WriteLine(studentId + "," + studentName + "," + currentDate + "," + currentTime);
					// Add to DataGridView after writing to file
					studentList->Rows->Add(studentId, studentName, currentDate, currentTime);
					this->studentList->Sort(this->studentList->Columns["Time"], System::ComponentModel::ListSortDirection::Descending);
					MessageBox::Show("Attendance marked successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error writing to attendance file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally {
					if (writer != nullptr) {
						writer->Close();
					}
				}
			}
		}
		else {
			MessageBox::Show("Please fill in all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

        private: System::Void Form1_HelpButtonClicked(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
            MessageBox::Show("Credits:\n\nDeveloped by: Group 2\n\nThis is Summative Assesment for IT101-L", "Credits", MessageBoxButtons::OK, MessageBoxIcon::Information);
            e->Cancel = true; // Prevent default help button behavior
        }
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = textBox6->Text->ToLower();
		for each (DataGridViewRow ^ row in studentList->Rows) {
			bool isVisible = false;
			for each (DataGridViewCell ^ cell in row->Cells) {
				if (cell->Value != nullptr && cell->Value->ToString()->ToLower()->Contains(searchText)) {
					isVisible = true;
					break;
				}
			}
			row->Visible = isVisible;
		}
	}
private: System::Void label6_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
};
}
