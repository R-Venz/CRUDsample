#pragma once
#include "ProductTableForm.h"

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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ imgProduct;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ txtProductName;
	private: System::Windows::Forms::Label^ lblProductName;
	private: System::Windows::Forms::Button^ btnAddProduct;


	private: System::Windows::Forms::RichTextBox^ txtProductDescription;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numProductStock;
	private: System::Windows::Forms::NumericUpDown^ numProductPrice;



	private: System::Windows::Forms::Label^ lblProductStock;
	private: System::Windows::Forms::Label^ lblProductPrice;


	private: System::Windows::Forms::Button^ btnAddImage;
	private: System::Windows::Forms::Button^ btnViewProduct;


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
			this->imgProduct = (gcnew System::Windows::Forms::PictureBox());
			this->txtProductName = (gcnew System::Windows::Forms::TextBox());
			this->lblProductName = (gcnew System::Windows::Forms::Label());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->txtProductDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numProductStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->numProductPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblProductStock = (gcnew System::Windows::Forms::Label());
			this->lblProductPrice = (gcnew System::Windows::Forms::Label());
			this->btnAddImage = (gcnew System::Windows::Forms::Button());
			this->btnViewProduct = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductPrice))->BeginInit();
			this->SuspendLayout();
			// 
			// imgProduct
			// 
			this->imgProduct->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProduct->Location = System::Drawing::Point(24, 12);
			this->imgProduct->Name = L"imgProduct";
			this->imgProduct->Size = System::Drawing::Size(120, 112);
			this->imgProduct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProduct->TabIndex = 0;
			this->imgProduct->TabStop = false;
			// 
			// txtProductName
			// 
			this->txtProductName->Location = System::Drawing::Point(173, 28);
			this->txtProductName->Multiline = true;
			this->txtProductName->Name = L"txtProductName";
			this->txtProductName->Size = System::Drawing::Size(304, 30);
			this->txtProductName->TabIndex = 1;
			// 
			// lblProductName
			// 
			this->lblProductName->AutoSize = true;
			this->lblProductName->Location = System::Drawing::Point(170, 12);
			this->lblProductName->Name = L"lblProductName";
			this->lblProductName->Size = System::Drawing::Size(75, 13);
			this->lblProductName->TabIndex = 2;
			this->lblProductName->Text = L"Product Name";
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddProduct->Location = System::Drawing::Point(173, 203);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(304, 86);
			this->btnAddProduct->TabIndex = 3;
			this->btnAddProduct->Text = L"ADD PRODUCT";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &MyForm::btnAddProduct_Click);
			// 
			// txtProductDescription
			// 
			this->txtProductDescription->Location = System::Drawing::Point(173, 87);
			this->txtProductDescription->Name = L"txtProductDescription";
			this->txtProductDescription->Size = System::Drawing::Size(304, 96);
			this->txtProductDescription->TabIndex = 4;
			this->txtProductDescription->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(170, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Product Description";
			// 
			// numProductStock
			// 
			this->numProductStock->Location = System::Drawing::Point(24, 220);
			this->numProductStock->Name = L"numProductStock";
			this->numProductStock->Size = System::Drawing::Size(120, 20);
			this->numProductStock->TabIndex = 6;
			// 
			// numProductPrice
			// 
			this->numProductPrice->DecimalPlaces = 2;
			this->numProductPrice->Location = System::Drawing::Point(24, 269);
			this->numProductPrice->Name = L"numProductPrice";
			this->numProductPrice->Size = System::Drawing::Size(120, 20);
			this->numProductPrice->TabIndex = 7;
			// 
			// lblProductStock
			// 
			this->lblProductStock->AutoSize = true;
			this->lblProductStock->Location = System::Drawing::Point(21, 203);
			this->lblProductStock->Name = L"lblProductStock";
			this->lblProductStock->Size = System::Drawing::Size(75, 13);
			this->lblProductStock->TabIndex = 8;
			this->lblProductStock->Text = L"Product Stock";
			// 
			// lblProductPrice
			// 
			this->lblProductPrice->AutoSize = true;
			this->lblProductPrice->Location = System::Drawing::Point(21, 253);
			this->lblProductPrice->Name = L"lblProductPrice";
			this->lblProductPrice->Size = System::Drawing::Size(71, 13);
			this->lblProductPrice->TabIndex = 9;
			this->lblProductPrice->Text = L"Product Price";
			// 
			// btnAddImage
			// 
			this->btnAddImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddImage->Location = System::Drawing::Point(33, 140);
			this->btnAddImage->Name = L"btnAddImage";
			this->btnAddImage->Size = System::Drawing::Size(102, 25);
			this->btnAddImage->TabIndex = 10;
			this->btnAddImage->Text = L"Add Image";
			this->btnAddImage->UseVisualStyleBackColor = true;
			this->btnAddImage->Click += gcnew System::EventHandler(this, &MyForm::btnAddImage_Click);
			// 
			// btnViewProduct
			// 
			this->btnViewProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewProduct->Location = System::Drawing::Point(24, 306);
			this->btnViewProduct->Name = L"btnViewProduct";
			this->btnViewProduct->Size = System::Drawing::Size(453, 55);
			this->btnViewProduct->TabIndex = 11;
			this->btnViewProduct->Text = L"VIEW PRODUCT";
			this->btnViewProduct->UseVisualStyleBackColor = true;
			this->btnViewProduct->Click += gcnew System::EventHandler(this, &MyForm::btnViewProduct_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 373);
			this->Controls->Add(this->btnViewProduct);
			this->Controls->Add(this->btnAddImage);
			this->Controls->Add(this->lblProductPrice);
			this->Controls->Add(this->lblProductStock);
			this->Controls->Add(this->numProductPrice);
			this->Controls->Add(this->numProductStock);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtProductDescription);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->lblProductName);
			this->Controls->Add(this->txtProductName);
			this->Controls->Add(this->imgProduct);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductPrice))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			String^ connString = "Server = localhost;Port = 3306;Database = dbshop;uid = root;Password = root";
			MySqlConnection^ conn = gcnew MySqlConnection(connString);

			void clearFields() {
				imgProduct->ImageLocation = "";
				txtProductName->Text = "";
				txtProductDescription->Text = "";
				numProductStock->Value = 0;
				numProductPrice->Value = 0;

			}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {



		try {
			conn->Open();
			MessageBox::Show("Connection Succeded");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Connection Error");
		}

	}

	private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ productName = txtProductName->Text;
		String^ productDescription = txtProductDescription->Text;
		int productStock = Convert::ToInt32(numProductStock->Value);
		double productPrice = Convert::ToDouble(numProductPrice->Value);
		array<unsigned char>^ productImage;

		String^ FileLocation = imgProduct->ImageLocation;

		try {
			FileStream^ fs = gcnew FileStream(FileLocation, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			productImage = br->ReadBytes(fs->Length);
		}
		catch (Exception^ e) {

		}

		bool isValid = true;

		if (productName->Trim()->Length <= 2) {
			MessageBox::Show("Enter a Proper Product Name");
			isValid = false;
		}

		if (productPrice <= 0) {
			MessageBox::Show("Enter a Proper Product Price");
			isValid = false;
		}

		if (isValid) {

			conn->Open();

			String^ cmdString = "INSERT INTO tblproducts(ProductName, ProductDescription, ProductStock, ProductPrice, ProductImage) VALUES (@productName, @productDescription, @productStock, @productPrice, @productImage)";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@productName", productName);
			cmd->Parameters->AddWithValue("@productDescription", productDescription);
			cmd->Parameters->AddWithValue("@productStock", productStock);
			cmd->Parameters->AddWithValue("@productPrice", productPrice);
			cmd->Parameters->AddWithValue("@productImage", productImage);

			try {
				cmd->ExecuteNonQuery();
				MessageBox::Show(productName +" Inserted Successfully");
				conn->Close();
				clearFields();
			}
			catch (Exception^ e) {
				MessageBox::Show("Inserting Data Failed");
			}
		}
	}
	private: System::Void btnAddImage_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			imgProduct->ImageLocation = ofd->FileName;
		}

	}
	private: System::Void btnViewProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductTableForm^ pft = gcnew ProductTableForm();
		pft->Visible = true;
		Hide();
	}
};
}
