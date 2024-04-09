#pragma once

namespace metroTicket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for payment
	/// </summary>
	public ref class payment : public System::Windows::Forms::Form
	{
	public:
		payment(void)
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
		~payment()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ dtlabel;
	private: System::Windows::Forms::Label^ pricelabel;



	private: System::Windows::Forms::Label^ from_label;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ to_label;
	private: System::Windows::Forms::Label^ ticketIDlabel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(payment::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ticketIDlabel = (gcnew System::Windows::Forms::Label());
			this->to_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pricelabel = (gcnew System::Windows::Forms::Label());
			this->from_label = (gcnew System::Windows::Forms::Label());
			this->dtlabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1363, 558);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(83, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 174);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel2->Controls->Add(this->ticketIDlabel);
			this->panel2->Controls->Add(this->to_label);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pricelabel);
			this->panel2->Controls->Add(this->from_label);
			this->panel2->Controls->Add(this->dtlabel);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(373, 52);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(617, 429);
			this->panel2->TabIndex = 0;
			// 
			// ticketIDlabel
			// 
			this->ticketIDlabel->AutoSize = true;
			this->ticketIDlabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticketIDlabel->Location = System::Drawing::Point(213, 243);
			this->ticketIDlabel->Name = L"ticketIDlabel";
			this->ticketIDlabel->Size = System::Drawing::Size(152, 27);
			this->ticketIDlabel->TabIndex = 6;
			this->ticketIDlabel->Text = L"Your TicketId ";
			// 
			// to_label
			// 
			this->to_label->AutoSize = true;
			this->to_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->to_label->Location = System::Drawing::Point(324, 316);
			this->to_label->Name = L"to_label";
			this->to_label->Size = System::Drawing::Size(25, 22);
			this->to_label->TabIndex = 5;
			this->to_label->Text = L"to";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(145, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(246, 172);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pricelabel
			// 
			this->pricelabel->AutoSize = true;
			this->pricelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricelabel->Location = System::Drawing::Point(218, 379);
			this->pricelabel->Name = L"pricelabel";
			this->pricelabel->Size = System::Drawing::Size(108, 22);
			this->pricelabel->TabIndex = 3;
			this->pricelabel->Text = L"Ticket price ";
			// 
			// from_label
			// 
			this->from_label->AutoSize = true;
			this->from_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->from_label->Location = System::Drawing::Point(190, 316);
			this->from_label->Name = L"from_label";
			this->from_label->Size = System::Drawing::Size(66, 22);
			this->from_label->TabIndex = 2;
			this->from_label->Text = L"From : ";
			// 
			// dtlabel
			// 
			this->dtlabel->AutoSize = true;
			this->dtlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtlabel->Location = System::Drawing::Point(217, 283);
			this->dtlabel->Name = L"dtlabel";
			this->dtlabel->Size = System::Drawing::Size(128, 22);
			this->dtlabel->TabIndex = 1;
			this->dtlabel->Text = L"Date and Time";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(217, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your Ticket ";
			// 
			// payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1363, 558);
			this->Controls->Add(this->panel1);
			this->Name = L"payment";
			this->Text = L"payment";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		public:
			void LoadTicketDetails(int id){
			// Connection string to connect to your SQL Server database
			String^ connectionString = "Data Source=cks_system\\sqlexpress;Initial Catalog=metroticket;Integrated Security=True;";

			try {
				// Establish connection to the database
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				connection->Open();

				// SQL command to retrieve ticket details based on the ticket ID
				String^ query = "SELECT DateTime, Start, Destination, TicketPrice FROM TicketData WHERE TicketID = @TicketID";
				SqlCommand^ command = gcnew SqlCommand(query, connection);
				command->Parameters->AddWithValue("@TicketID", id);

				// Execute the SQL command and read the data
				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					// Update the form controls with the retrieved ticket details
					dtlabel->Text = reader["DateTime"]->ToString();
					from_label->Text = "From: " + reader["Start"]->ToString();
					to_label->Text = "To: " + reader["Destination"]->ToString();
					pricelabel->Text = "Price: " + reader["TicketPrice"]->ToString();

					
				}

				// Close the connection
				connection->Close();
			}
			catch (Exception^ ex) {
				// Handle any exceptions that occur during database operations
				MessageBox::Show("Error: " + ex->Message);
			}
		}





};
}