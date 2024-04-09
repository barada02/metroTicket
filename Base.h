#pragma once
#include <map>
#include<string>
#include <msclr/marshal_cppstd.h>
#include "MapExample.h"
#include "payment.h"


namespace metroTicket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Base
	/// </summary>
	/// 

	public ref class Base : public System::Windows::Forms::Form
	{
	public:
		Base(void)
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
		~Base()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ Destination_comboBox;

	private: System::Windows::Forms::ComboBox^ start_box;
	private: System::Windows::Forms::Button^ confirm_button;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ price_label;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ total_price_label;
	private: System::Windows::Forms::Label^ label3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Base::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->total_price_label = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->price_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->confirm_button = (gcnew System::Windows::Forms::Button());
			this->Destination_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->start_box = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1411, 774);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1007, 41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(343, 484);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(98, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 174);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->total_price_label);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->price_label);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->numericUpDown);
			this->panel2->Controls->Add(this->confirm_button);
			this->panel2->Controls->Add(this->Destination_comboBox);
			this->panel2->Controls->Add(this->start_box);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(358, 41);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(622, 618);
			this->panel2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(342, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 15);
			this->label3->TabIndex = 12;
			this->label3->Text = L"10% Discount on Retunr journy";
			// 
			// total_price_label
			// 
			this->total_price_label->AutoSize = true;
			this->total_price_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->total_price_label->Location = System::Drawing::Point(323, 448);
			this->total_price_label->Name = L"total_price_label";
			this->total_price_label->Size = System::Drawing::Size(89, 23);
			this->total_price_label->TabIndex = 11;
			this->total_price_label->Text = L"Total price";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(368, 116);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(118, 20);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Return Journey";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(113, 116);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(117, 20);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Single Journey";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// price_label
			// 
			this->price_label->AutoSize = true;
			this->price_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_label->Location = System::Drawing::Point(137, 444);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(110, 23);
			this->price_label->TabIndex = 8;
			this->price_label->Text = L"Price\\Persion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(123, 419);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"No of passanger";
			// 
			// numericUpDown
			// 
			this->numericUpDown->Location = System::Drawing::Point(308, 423);
			this->numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown->Name = L"numericUpDown";
			this->numericUpDown->Size = System::Drawing::Size(120, 22);
			this->numericUpDown->TabIndex = 6;
			this->numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown->ValueChanged += gcnew System::EventHandler(this, &Base::numericUpDown_ValueChanged);
			// 
			// confirm_button
			// 
			this->confirm_button->BackColor = System::Drawing::Color::LavenderBlush;
			this->confirm_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_button->Location = System::Drawing::Point(141, 506);
			this->confirm_button->Name = L"confirm_button";
			this->confirm_button->Size = System::Drawing::Size(271, 44);
			this->confirm_button->TabIndex = 5;
			this->confirm_button->Text = L"Pay and Generate";
			this->confirm_button->UseVisualStyleBackColor = false;
			this->confirm_button->Click += gcnew System::EventHandler(this, &Base::confirm_button_Click);
			// 
			// Destination_comboBox
			// 
			this->Destination_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Destination_comboBox->ForeColor = System::Drawing::Color::Crimson;
			this->Destination_comboBox->FormattingEnabled = true;
			this->Destination_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(22) {
				L"Nagole", L"Uppal", L"Stadium", L"NGRI",
					L"Habsiguda", L"Tarnaka", L"Mettuguda", L"Secunderabad", L"Parade Grounds ", L"Paradise", L"Rasoolpura", L"Prakash Nagar", L"Begumpet",
					L"Ameerpet ", L"Madhura Nagar", L"Yousufguda", L"Jubilee Hills", L"Jubilee Hills Check post", L"Peddamma Temple", L"Madhapur",
					L"Durgam Cheruvu", L"Hi-tech City"
			});
			this->Destination_comboBox->Location = System::Drawing::Point(128, 290);
			this->Destination_comboBox->Name = L"Destination_comboBox";
			this->Destination_comboBox->Size = System::Drawing::Size(284, 35);
			this->Destination_comboBox->TabIndex = 4;
			this->Destination_comboBox->Text = L"DESTINATION";
			this->Destination_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Base::Destination_comboBox_SelectedIndexChanged);
			// 
			// start_box
			// 
			this->start_box->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start_box->ForeColor = System::Drawing::Color::Green;
			this->start_box->FormattingEnabled = true;
			this->start_box->Items->AddRange(gcnew cli::array< System::Object^  >(22) {
				L"Nagole", L"Uppal", L"Stadium", L"NGRI", L"Habsiguda",
					L"Tarnaka", L"Mettuguda", L"Secunderabad", L"Parade Grounds ", L"Paradise", L"Rasoolpura", L"Prakash Nagar", L"Begumpet", L"Ameerpet ",
					L"Madhura Nagar", L"Yousufguda", L"Jubilee Hills", L"Jubilee Hills Check post", L"Peddamma Temple", L"Madhapur", L"Durgam Cheruvu",
					L"Hi-tech City"
			});
			this->start_box->Location = System::Drawing::Point(128, 180);
			this->start_box->Name = L"start_box";
			this->start_box->Size = System::Drawing::Size(284, 35);
			this->start_box->TabIndex = 3;
			this->start_box->Text = L"START";
			this->start_box->SelectedIndexChanged += gcnew System::EventHandler(this, &Base::start_box_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(422, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO HYDERABAD METRO RAIL";
			// 
			// Base
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1411, 774);
			this->Controls->Add(this->panel1);
			this->Name = L"Base";
			this->Text = L"Base";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// Method to calculate the ticket price based on distance, journey type, and number of passengers
		double CalculateTicketPrice(int distance, bool isSingleJourney, int numOfPassengers) {
			// Calculate the base ticket price per kilometer
			double basePricePerKilometer = 5; // Assuming 5 rupees per kilometer

			// Calculate the ticket price based on journey type and number of passengers
			double ticketPrice = 0;
			if (isSingleJourney) {
				ticketPrice = distance * basePricePerKilometer * numOfPassengers;
			}
			else {
				// Assuming a discount of 10% for return journey
				ticketPrice = distance * basePricePerKilometer * numOfPassengers * 2 * 0.9;
			}
			return ticketPrice;
		}

		double CalculateTicketPricePerPerson(int distance, bool isSingleJourney) {
			// Calculate the base ticket price per kilometer
			double basePricePerKilometer = 5; // Assuming 5 rupees per kilometer

			// Calculate the ticket price per person based on journey type
			double ticketPrice = 0;
			if (isSingleJourney) {
				ticketPrice = distance * basePricePerKilometer;
			}
			else {
				// Assuming a discount of 10% for return journey
				ticketPrice = distance * basePricePerKilometer * 2 * 0.9;
			}
			return ticketPrice;
		}

		
private: System::Void Destination_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (start_box->SelectedItem == nullptr) {
		MessageBox::Show("Please select a start point.");
		return; // Exit the method if no start point is selected
	}

	// Check if at least one of the radio buttons is checked
	if (!(radioButton1->Checked || radioButton2->Checked)) {
		MessageBox::Show("Please select a journey type (Single or Return).");
		return; // Exit the method if no radio button is checked
	}

	String^ startPoint = start_box->SelectedItem->ToString();
	String^ destination = Destination_comboBox->SelectedItem->ToString();

	// Create an instance of MapExample to access its static methods
	metroTicket::MapExample^ mapExample = gcnew metroTicket::MapExample();
	double distance = mapExample->GetDistance(startPoint, destination);

	if (distance >= 0) {
		// Determine if it's a single journey or return journey
		bool isSingleJourney = radioButton1->Checked;
		bool isReturnJourney = radioButton2->Checked;

		

		// Calculate the ticket price.
		double ticketPrice = CalculateTicketPricePerPerson(distance, isSingleJourney); // Assuming 5 rupees per kilometer.

		// Display the ticket price in the label.
		// Display the ticket price in the label.
		price_label->Text = ticketPrice.ToString() + "/Persion";
	}
	else {
		// Handle the case where distance calculation failed
		price_label->Text = "Error: Unable to calculate distance";
	}

	


	
}
private: System::Void numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ startPoint = start_box->SelectedItem->ToString();
	String^ destination = Destination_comboBox->SelectedItem->ToString();

	// Create an instance of MapExample to access its static methods
	metroTicket::MapExample^ mapExample = gcnew metroTicket::MapExample();
	double distance = mapExample->GetDistance(startPoint, destination);

	// Check if at least one of the radio buttons is checked
	if (!(radioButton1->Checked || radioButton2->Checked)) {
		MessageBox::Show("Please select a journey type (Single or Return).");
		return; // Exit the method if no radio button is checked
	}

	if (distance >= 0) {
		
		
		bool isSingleJourney = radioButton1->Checked;
		int numOfPassengers = (int)numericUpDown->Value;

		// Calculate the ticket price.
		double ticketPrice = CalculateTicketPrice(distance, isSingleJourney, numOfPassengers); // Assuming 5 rupees per kilometer.

		// Display the ticket price in the label.
		// Display the ticket price in the label.
		total_price_label->Text = "Total Price: " + ticketPrice.ToString(); // Displaying currency format
	}
	else {
		// Handle the case where distance calculation failed
		total_price_label->Text = "Error: Unable to calculate distance";
	}
}
private: System::Void start_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Check if at least one of the radio buttons is checked
	if (!(radioButton1->Checked || radioButton2->Checked)) {
		MessageBox::Show("Please select a journey type (Single or Return).");
		return; // Exit the method if no radio button is checked
	}
}
	   //Method to inset ticket data into database

	   int InsertTicketDataIntoDatabase(String^ journeyType, String^ start, String^ destination, int numOfPassengers, double ticketPrice) {

		   

		   // Connection string to connect to your SQL Server database
		   String^ connectionString = "Data Source=cks_system\\sqlexpress;Initial Catalog=metroticket;Integrated Security=True;";

		   try {
			   // Establish connection to the database
			   SqlConnection^ connection = gcnew SqlConnection(connectionString);
			   connection->Open();

			   // SQL command to insert data into the table
			   String^ query = "INSERT INTO TicketData (JourneyType, DateTime, Start, Destination, NumOfPassengers, TicketPrice) VALUES (@JourneyType, GETDATE(), @Start, @Destination, @NumOfPassengers, @TicketPrice);SELECT SCOPE_IDENTITY();";
			   SqlCommand^ command = gcnew SqlCommand(query, connection);

			   // Add parameters to the SQL command
			   command->Parameters->AddWithValue("@JourneyType", journeyType);
			   command->Parameters->AddWithValue("@Start", start);
			   command->Parameters->AddWithValue("@Destination", destination);
			   command->Parameters->AddWithValue("@NumOfPassengers", numOfPassengers);
			   command->Parameters->AddWithValue("@TicketPrice", ticketPrice);

			   // Execute the SQL command
			  //command->ExecuteNonQuery();

			   // Execute the SQL command and retrieve the generated ticket ID
			   int ticketID = Convert::ToInt32(command->ExecuteScalar());

			  

			   // Close the connection
			   connection->Close();

			   return ticketID;
		   }
		   catch (Exception^ ex) {
			   // Handle any exceptions that occur during database operations
			   MessageBox::Show("Error: " + ex->Message);
		   }
		   
		  

	   }



private: System::Void confirm_button_Click(System::Object^ sender, System::EventArgs^ e) {
	// Retrieve ticket generation data
	String^ journeyType = radioButton1->Checked ? "Single Journey" : "Return Journey";

	String^ start = start_box->SelectedItem->ToString();
	String^ destination = Destination_comboBox->SelectedItem->ToString();
	int numOfPassengers = (int)numericUpDown->Value;
	String^ priceText = total_price_label->Text->Replace("Total Price: ", ""); // Remove the "Total Price: " prefix
	
	priceText = priceText->Replace(",", ""); // Remove commas if present
	double ticketPrice = Convert::ToDouble(priceText);
	// Assuming label text is in the format "Total Price: $xx.xx"

	// Store the data in SQL Server
	int ticketid = InsertTicketDataIntoDatabase(journeyType, start, destination, numOfPassengers, ticketPrice);
	

	

	payment^ paymentpage = gcnew payment();
	paymentpage->LoadTicketDetails(ticketid);
	paymentpage->ShowDialog();
}
};
}
