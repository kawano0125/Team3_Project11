#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// NewEntryForm の概要
	/// </summary>
	public ref class NewEntryForm : public System::Windows::Forms::Form
	{
	public:
		NewEntryForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~NewEntryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_NewName;
	private: System::Windows::Forms::Label^ l_NewPassword;
	private: System::Windows::Forms::TextBox^ tb_NewName;
	private: System::Windows::Forms::TextBox^ tb_NewPassword;
	private: System::Windows::Forms::Button^ b_Entry;
	private: System::Windows::Forms::Button^ b_EntryReturn;
	protected:


	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->l_NewName = (gcnew System::Windows::Forms::Label());
			this->l_NewPassword = (gcnew System::Windows::Forms::Label());
			this->tb_NewName = (gcnew System::Windows::Forms::TextBox());
			this->tb_NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->b_Entry = (gcnew System::Windows::Forms::Button());
			this->b_EntryReturn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_NewName
			// 
			this->l_NewName->AutoSize = true;
			this->l_NewName->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_NewName->Location = System::Drawing::Point(60, 227);
			this->l_NewName->Name = L"l_NewName";
			this->l_NewName->Size = System::Drawing::Size(84, 15);
			this->l_NewName->TabIndex = 0;
			this->l_NewName->Text = L"ユーザー名：";
			// 
			// l_NewPassword
			// 
			this->l_NewPassword->AutoSize = true;
			this->l_NewPassword->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_NewPassword->Location = System::Drawing::Point(65, 327);
			this->l_NewPassword->Name = L"l_NewPassword";
			this->l_NewPassword->Size = System::Drawing::Size(78, 15);
			this->l_NewPassword->TabIndex = 1;
			this->l_NewPassword->Text = L"パスワード：";
			// 
			// tb_NewName
			// 
			this->tb_NewName->Location = System::Drawing::Point(189, 227);
			this->tb_NewName->Name = L"tb_NewName";
			this->tb_NewName->Size = System::Drawing::Size(322, 22);
			this->tb_NewName->TabIndex = 2;
			// 
			// tb_NewPassword
			// 
			this->tb_NewPassword->Location = System::Drawing::Point(189, 322);
			this->tb_NewPassword->Name = L"tb_NewPassword";
			this->tb_NewPassword->Size = System::Drawing::Size(321, 22);
			this->tb_NewPassword->TabIndex = 3;
			// 
			// b_Entry
			// 
			this->b_Entry->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Entry->Location = System::Drawing::Point(207, 427);
			this->b_Entry->Name = L"b_Entry";
			this->b_Entry->Size = System::Drawing::Size(133, 64);
			this->b_Entry->TabIndex = 4;
			this->b_Entry->Text = L"新規作成";
			this->b_Entry->UseVisualStyleBackColor = true;
			this->b_Entry->Click += gcnew System::EventHandler(this, &NewEntryForm::b_Entry_Click);
			// 
			// b_EntryReturn
			// 
			this->b_EntryReturn->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_EntryReturn->Location = System::Drawing::Point(42, 67);
			this->b_EntryReturn->Name = L"b_EntryReturn";
			this->b_EntryReturn->Size = System::Drawing::Size(124, 43);
			this->b_EntryReturn->TabIndex = 5;
			this->b_EntryReturn->Text = L"戻る";
			this->b_EntryReturn->UseVisualStyleBackColor = true;
			// 
			// NewEntryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->b_EntryReturn);
			this->Controls->Add(this->b_Entry);
			this->Controls->Add(this->tb_NewPassword);
			this->Controls->Add(this->tb_NewName);
			this->Controls->Add(this->l_NewPassword);
			this->Controls->Add(this->l_NewName);
			this->Name = L"NewEntryForm";
			this->Text = L"NewEntryForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ newname;
		String^ newpass;
	private: System::Void b_Entry_Click(System::Object^ sender, System::EventArgs^ e) {
		//テキストボックスのデータの取得
		try {
			//ユーザー名とパスワードを格納するuserdata.txtを開く
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./userdata.txt", true);
			//userdata.txtに中身がある場合、その値を読み取る
			newname = tb_NewName->Text;
			newpass = tb_NewPassword->Text;
			if (newname->Length < 8 || newpass->Length < 8) {
				MessageBox::Show("パスワードを8文字以上にしてください。", "エラー", MessageBoxButtons::OK);
			}
			else if (newname->Length > 16 || newpass->Length > 16) {
				MessageBox::Show("パスワードを16文字以下にしてください。", "エラー", MessageBoxButtons::OK);
			}


			writer->WriteLine(newname + newpass);
			//userdata.txtを閉じる
			writer->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//ファイルが存在しない場合、初期値0で新たなテキストファイルを作成
			System::IO::File::AppendAllText("./userdata.txt", "0");
			System::Diagnostics::Debug::WriteLine("---エラーメッセージ---\n" + ex->Message);
		}
	}
	};
}
