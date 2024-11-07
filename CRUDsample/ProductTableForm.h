#pragma once

namespace CRUDsample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for ProductTableForm
	/// </summary>
	public ref class ProductTableForm : public System::Windows::Forms::Form
	{
	public:
		ProductTableForm(void)
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
		~ProductTableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tblProduct;
	private: System::Windows::Forms::PictureBox^ imgProductImage;
	private: System::Windows::Forms::RichTextBox^ txtProductDescription;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::TabPage^ TabPage1;
	private: System::Windows::Forms::Button^ btnChangeimage;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Label^ lblProductPrice;
	private: System::Windows::Forms::Label^ lblProductStock;
	private: System::Windows::Forms::NumericUpDown^ numPrice;
	private: System::Windows::Forms::NumericUpDown^ numStock;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ lblProductName;
	private: System::Windows::Forms::TabControl^ tabControl1;























	protected:

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tblProduct = (gcnew System::Windows::Forms::DataGridView());
			this->imgProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->txtProductDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->TabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblProductName = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->numPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblProductStock = (gcnew System::Windows::Forms::Label());
			this->lblProductPrice = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnChangeimage = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->TabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tblProduct
			// 
			this->tblProduct->AllowUserToAddRows = false;
			this->tblProduct->AllowUserToDeleteRows = false;
			this->tblProduct->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblProduct->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblProduct->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tblProduct->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->tblProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblProduct->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblProduct->Location = System::Drawing::Point(392, 12);
			this->tblProduct->MultiSelect = false;
			this->tblProduct->Name = L"tblProduct";
			this->tblProduct->ReadOnly = true;
			this->tblProduct->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblProduct->Size = System::Drawing::Size(352, 495);
			this->tblProduct->TabIndex = 0;
			this->tblProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductTableForm::tblProduct_CellClick);
			// 
			// imgProductImage
			// 
			this->imgProductImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProductImage->Location = System::Drawing::Point(1, 12);
			this->imgProductImage->Name = L"imgProductImage";
			this->imgProductImage->Size = System::Drawing::Size(150, 150);
			this->imgProductImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProductImage->TabIndex = 1;
			this->imgProductImage->TabStop = false;
			// 
			// txtProductDescription
			// 
			this->txtProductDescription->Location = System::Drawing::Point(157, 12);
			this->txtProductDescription->Name = L"txtProductDescription";
			this->txtProductDescription->ReadOnly = true;
			this->txtProductDescription->Size = System::Drawing::Size(225, 150);
			this->txtProductDescription->TabIndex = 2;
			this->txtProductDescription->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage2->Controls->Add(this->btnDelete);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(377, 313);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Delete Item";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(5, 242);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(362, 61);
			this->btnDelete->TabIndex = 0;
			this->btnDelete->Text = L"DELETE ITEM";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductTableForm::btnDelete_Click);
			// 
			// TabPage1
			// 
			this->TabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TabPage1->Controls->Add(this->btnChangeimage);
			this->TabPage1->Controls->Add(this->btnUpdate);
			this->TabPage1->Controls->Add(this->lblProductPrice);
			this->TabPage1->Controls->Add(this->lblProductStock);
			this->TabPage1->Controls->Add(this->numPrice);
			this->TabPage1->Controls->Add(this->numStock);
			this->TabPage1->Controls->Add(this->label2);
			this->TabPage1->Controls->Add(this->txtDescription);
			this->TabPage1->Controls->Add(this->txtName);
			this->TabPage1->Controls->Add(this->lblProductName);
			this->TabPage1->Location = System::Drawing::Point(4, 22);
			this->TabPage1->Name = L"TabPage1";
			this->TabPage1->Padding = System::Windows::Forms::Padding(3);
			this->TabPage1->Size = System::Drawing::Size(377, 313);
			this->TabPage1->TabIndex = 0;
			this->TabPage1->Text = L"Update Item";
			this->TabPage1->UseVisualStyleBackColor = true;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(6, 19);
			this->txtName->Multiline = true;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(361, 30);
			this->txtName->TabIndex = 6;
			// 
			// lblProductName
			// 
			this->lblProductName->AutoSize = true;
			this->lblProductName->Location = System::Drawing::Point(3, 3);
			this->lblProductName->Name = L"lblProductName";
			this->lblProductName->Size = System::Drawing::Size(75, 13);
			this->lblProductName->TabIndex = 7;
			this->lblProductName->Text = L"Product Name";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(6, 78);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(361, 96);
			this->txtDescription->TabIndex = 8;
			this->txtDescription->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Product Description";
			// 
			// numStock
			// 
			this->numStock->Location = System::Drawing::Point(6, 202);
			this->numStock->Name = L"numStock";
			this->numStock->Size = System::Drawing::Size(120, 20);
			this->numStock->TabIndex = 10;
			// 
			// numPrice
			// 
			this->numPrice->DecimalPlaces = 2;
			this->numPrice->Location = System::Drawing::Point(247, 202);
			this->numPrice->Name = L"numPrice";
			this->numPrice->Size = System::Drawing::Size(120, 20);
			this->numPrice->TabIndex = 11;
			// 
			// lblProductStock
			// 
			this->lblProductStock->AutoSize = true;
			this->lblProductStock->Location = System::Drawing::Point(3, 185);
			this->lblProductStock->Name = L"lblProductStock";
			this->lblProductStock->Size = System::Drawing::Size(75, 13);
			this->lblProductStock->TabIndex = 12;
			this->lblProductStock->Text = L"Product Stock";
			// 
			// lblProductPrice
			// 
			this->lblProductPrice->AutoSize = true;
			this->lblProductPrice->Location = System::Drawing::Point(244, 186);
			this->lblProductPrice->Name = L"lblProductPrice";
			this->lblProductPrice->Size = System::Drawing::Size(71, 13);
			this->lblProductPrice->TabIndex = 13;
			this->lblProductPrice->Text = L"Product Price";
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(6, 241);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(361, 67);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"UPDATE ITEM";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductTableForm::btnUpdate_Click);
			// 
			// btnChangeimage
			// 
			this->btnChangeimage->Location = System::Drawing::Point(132, 202);
			this->btnChangeimage->Name = L"btnChangeimage";
			this->btnChangeimage->Size = System::Drawing::Size(109, 23);
			this->btnChangeimage->TabIndex = 15;
			this->btnChangeimage->Text = L"Change Image";
			this->btnChangeimage->UseVisualStyleBackColor = true;
			this->btnChangeimage->Click += gcnew System::EventHandler(this, &ProductTableForm::btnChangeimage_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->TabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 168);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(385, 339);
			this->tabControl1->TabIndex = 3;
			// 
			// ProductTableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(756, 519);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->txtProductDescription);
			this->Controls->Add(this->imgProductImage);
			this->Controls->Add(this->tblProduct);
			this->Name = L"ProductTableForm";
			this->Text = L"ProductTableForm";
			this->Load += gcnew System::EventHandler(this, &ProductTableForm::ProductTableForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->TabPage1->ResumeLayout(false);
			this->TabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ connString = "Server = localhost;Port = 3306;Database = dbshop;uid = root;Password = root";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

		void populateTable() {
			try {
				conn->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT PID, ProductName, ProductStock, ProductPrice FROM tblProducts", conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				tblProduct->DataSource = dt;
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to read products.");
			}
		}

	private: System::Void ProductTableForm_Load(System::Object^ sender, System::EventArgs^ e) {

		populateTable();

	}
	private: System::Void tblProduct_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		String^ currPID = tblProduct->Rows[tblProduct->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		try {
			conn->Open();

			imgProductImage->Image = nullptr;
			txtProductDescription->Text = "";
			txtName->Text = "";
			txtDescription->Text = "";
			numStock->Value = 0;
			numPrice->Value = 0;

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT ProductImage, ProductDescription FROM tblProducts WHERE PID =" + currPID, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			String^ productDescription = dt->Rows[0]->ItemArray[1]->ToString();
			txtProductDescription->Text = productDescription;

			txtDescription->Text = productDescription;
			txtName->Text = tblProduct->Rows[tblProduct->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
			numStock->Value = Convert::ToInt32(tblProduct->Rows[tblProduct->CurrentCell->RowIndex]->Cells[2]->Value);
			numPrice->Value = Convert::ToDecimal(tblProduct->Rows[tblProduct->CurrentCell->RowIndex]->Cells[3]->Value);

			array<unsigned char>^ productImage = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
			MemoryStream^ ms = gcnew MemoryStream(productImage);
			imgProductImage->Image = Image::FromStream(ms);

			conn->Close();

		}
		catch (Exception^ e) {
			conn->Close();
		}

	}
	

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ currPID = tblProduct->Rows[tblProduct->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		String^ productName = txtName->Text;
		String^ productDescription = txtDescription->Text;
		int productStock = Convert::ToInt32(numStock->Value);
		double productPrice = Convert::ToDouble(numPrice->Value);
		array<unsigned char>^ productImage;

		try {
			MemoryStream^ ms = gcnew MemoryStream();
			if (imgProductImage->Image != nullptr) {
				imgProductImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				productImage = ms->ToArray();
			}
		}
		catch (Exception^ e) {
		
		}

		try {
			conn->Open();

			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tblProducts SET ProductName = @productName, ProductDescription = @productDescription, ProductStock = @productStock, ProductPrice = @productPrice, ProductImage = @productImage WHERE PID = " + currPID,conn);
			
			cmd->Parameters->AddWithValue("@productNAme", productName);
			cmd->Parameters->AddWithValue("@productDescription", productDescription);
			cmd->Parameters->AddWithValue("@productStock", productStock);
			cmd->Parameters->AddWithValue("@productPrice", productPrice);
			cmd->Parameters->AddWithValue("@productImage", productImage);
			
			cmd->ExecuteNonQuery();
			MessageBox::Show(productName + " Successfully Updated.");
			
			conn->Close();
			populateTable();
		}
		catch (Exception^ e) {
			MessageBox::Show(productName + " Update Unsuccessful.");
		}
		}
	private: System::Void btnChangeimage_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			imgProductImage->ImageLocation = ofd->FileName;
		}
		}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ currPID = tblProduct->Rows[tblProduct->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		try {
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tblProducts WHERE PID = " + currPID, conn);
			cmd->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("Successfully Deleted.");
			populateTable();
		}
		catch (Exception^ e) {
			MessageBox::Show("The deletion was unsuccessful.");
		}
	}
};
}
