#pragma once
#include <msclr/marshal_cppstd.h>
#include "AllroomForm.h"
#include "NewEntryForm.h"
#include "PublicData.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cli;
	using namespace System::Text;

	/// <summary>
	/// LoginForm の概要
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			LoadFile();
			//
			//TODO: ここにコンストラクター コードを追加します
			//

		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_UserName;
	private: System::Windows::Forms::Label^ l_UserPassword;
	private: System::Windows::Forms::TextBox^ tb_UserName;
	private: System::Windows::Forms::TextBox^ tb_UserPassword;
	private: System::Windows::Forms::Button^ b_AllRoom;
	private: System::Windows::Forms::Button^ b_NewEntry;
	private: System::Windows::Forms::Button^ b_Login;





	protected:


	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ label1;
		   int Index = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->l_UserName = (gcnew System::Windows::Forms::Label());
			this->l_UserPassword = (gcnew System::Windows::Forms::Label());
			this->tb_UserName = (gcnew System::Windows::Forms::TextBox());
			this->tb_UserPassword = (gcnew System::Windows::Forms::TextBox());
			this->b_AllRoom = (gcnew System::Windows::Forms::Button());
			this->b_NewEntry = (gcnew System::Windows::Forms::Button());
			this->b_Login = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// l_UserName
			// 
			this->l_UserName->AutoSize = true;
			this->l_UserName->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_UserName->Location = System::Drawing::Point(60, 194);
			this->l_UserName->Name = L"l_UserName";
			this->l_UserName->Size = System::Drawing::Size(109, 15);
			this->l_UserName->TabIndex = 0;
			this->l_UserName->Text = L"ユーザー名：";
			// 
			// l_UserPassword
			// 
			this->l_UserPassword->AutoSize = true;
			this->l_UserPassword->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_UserPassword->Location = System::Drawing::Point(91, 277);
			this->l_UserPassword->Name = L"l_UserPassword";
			this->l_UserPassword->Size = System::Drawing::Size(78, 15);
			this->l_UserPassword->TabIndex = 1;
			this->l_UserPassword->Text = L"パスワード：";
			// 
			// tb_UserName
			// 
			this->tb_UserName->Location = System::Drawing::Point(209, 194);
			this->tb_UserName->Name = L"tb_UserName";
			this->tb_UserName->Size = System::Drawing::Size(308, 22);
			this->tb_UserName->TabIndex = 2;
			// 
			// tb_UserPassword
			// 
			this->tb_UserPassword->Location = System::Drawing::Point(209, 270);
			this->tb_UserPassword->Name = L"tb_UserPassword";
			this->tb_UserPassword->Size = System::Drawing::Size(308, 22);
			this->tb_UserPassword->TabIndex = 3;
			// 
			// b_AllRoom
			// 
			this->b_AllRoom->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_AllRoom->Location = System::Drawing::Point(324, 104);
			this->b_AllRoom->Name = L"b_AllRoom";
			this->b_AllRoom->Size = System::Drawing::Size(114, 51);
			this->b_AllRoom->TabIndex = 4;
			this->b_AllRoom->Text = L"研修室表示";
			this->b_AllRoom->UseVisualStyleBackColor = true;
			this->b_AllRoom->Click += gcnew System::EventHandler(this, &LoginForm::b_AllRoom_Click);
			// 
			// b_NewEntry
			// 
			this->b_NewEntry->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_NewEntry->Location = System::Drawing::Point(444, 105);
			this->b_NewEntry->Name = L"b_NewEntry";
			this->b_NewEntry->Size = System::Drawing::Size(114, 50);
			this->b_NewEntry->TabIndex = 5;
			this->b_NewEntry->Text = L"新規作成";
			this->b_NewEntry->UseVisualStyleBackColor = true;
			this->b_NewEntry->Click += gcnew System::EventHandler(this, &LoginForm::b_NewEntry_Click);
			// 
			// b_Login
			// 
			this->b_Login->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Login->Location = System::Drawing::Point(198, 396);
			this->b_Login->Name = L"b_Login";
			this->b_Login->Size = System::Drawing::Size(189, 64);
			this->b_Login->TabIndex = 6;
			this->b_Login->Text = L"ログイン";
			this->b_Login->UseVisualStyleBackColor = true;
			this->b_Login->Click += gcnew System::EventHandler(this, &LoginForm::b_Login_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(43, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 30);
			this->label1->TabIndex = 7;
			this->label1->Text = L"研修室予約管理システム";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->b_Login);
			this->Controls->Add(this->b_NewEntry);
			this->Controls->Add(this->b_AllRoom);
			this->Controls->Add(this->tb_UserPassword);
			this->Controls->Add(this->tb_UserName);
			this->Controls->Add(this->l_UserPassword);
			this->Controls->Add(this->l_UserName);
			this->Name = L"LoginForm";
			this->Text = L"ログインページ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ReadDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% RoomIndex) {
			try {
				//StreamReaderを使ってファイルから読み込む
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(Filename ,Encoding::UTF8);
				String^ line;

				while ((line = sr->ReadLine()) != nullptr) {
					cli::array<String^>^ parts = line->Split(',');
					if (parts->Length == 6) {
						DataArray[Index, 0] = parts[0];
						DataArray[Index, 1] = parts[1];
						DataArray[Index, 2] = parts[2];
						DataArray[Index, 3] = parts[3];
						DataArray[Index, 4] = parts[4];
						DataArray[Index, 5] = parts[5];
						RoomIndex++;
						Index++;
						
					}
					else {
						System::Diagnostics::Debug::WriteLine("配列の総数" + parts->Length);
						throw gcnew Exception("データ配列がいっぱいです");
						
					}
				}
				sr->Close();
			}
			catch (Exception^ e)
			{
				// エラーメッセージを表示
				MessageBox::Show("ファイルを読み込む際にエラーが発生しました: " + e->Message, "エラー", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		};
		void LoadFile() {
			//ファイル1からデータを読み込んでリストボックス2に表示
			ReadDataFromFile("room1data.txt", PublicData::Room1Array, PublicData::Room1Index);
			System::Diagnostics::Debug::WriteLine("部屋１の内容" + PublicData::Room1Array[0,1]);
			//PublicData::LoadDataToListBox(PublicData::Room1Array, Index, listBox1);

			// ファイル2からデータを読み込んでリストボックス2に表示
			ReadDataFromFile("room2data.txt", PublicData::Room2Array, PublicData::Room2Index);
			System::Diagnostics::Debug::WriteLine("部屋２の内容" + PublicData::Room2Index);
			//PublicData::LoadDataToListBox(PublicData::Room2Array, Index, listBox1);

			// ファイル3からデータを読み込んでリストボックス3に表示
			ReadDataFromFile("room3data.txt", PublicData::Room3Array, PublicData::Room3Index);
			//PublicData::LoadDataToListBox(PublicData::Room3Array, Index, listBox1);

			// ファイル4からデータを読み込んでリストボックス4に表示
			ReadDataFromFile("room4data.txt", PublicData::Room4Array, PublicData::Room4Index);
			//PublicData::LoadDataToListBox(PublicData::Room4Array, Index, listBox1);

			// ファイル5からデータを読み込んでリストボックス5に表示
			ReadDataFromFile("room5data.txt", PublicData::Room5Array, PublicData::Room5Index);
			//PublicData::LoadDataToListBox(PublicData::Room5Array, Index, listBox1);

			// ファイル6からデータを読み込んでリストボックス6に表示
			ReadDataFromFile("room6data.txt", PublicData::Room6Array, PublicData::Room6Index);
			//PublicData::LoadDataToListBox(PublicData::Room6Array, Index, listBox1);
		}

	private: System::Void b_NewEntry_Click(System::Object^ sender, System::EventArgs^ e) {
		//ログイン画面を非表示
		this->Visible = false;

		//NewEntryFormを表示
		NewEntryForm^ newenrtyform = gcnew NewEntryForm();
		newenrtyform->ShowDialog();

		//ログイン画面を表示
		this->Visible = true;
	}
	private: System::Void b_AllRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		//非会員フラグを設定
		flag = 1;
		flag = !flag;	//フラグを反転させる
		if (!flag) {
			//ログイン画面を非表示
			this->Visible = false;

			//AllRoomFormを表示
			AllRoomForm^ allroomform = gcnew AllRoomForm();
			allroomform->ShowDialog();
		}
	}
	private: System::Void b_Login_Click(System::Object^ sender, System::EventArgs^ e) {
		
		

		//ログインを試す処理
		String^ Name;
		String^ Password;
		Name = this->tb_UserName->Text;
		Password = this->tb_UserPassword->Text;
		//ユーザー名の欄とパスワードの欄が空欄でログインボタンが押された時のエラー処理
		if (Name == "" || Password == "") {
			MessageBox::Show("ユーザー名とパスワードを入力してください", "エラー", MessageBoxButtons::OK);
			return;
		}


		flag = 1;
		AllRoomForm^ frmAll = gcnew AllRoomForm();
		frmAll->ShowDialog();

		
		

		

		//テキストボックスのデータの取得
		try {
			//ユーザー名とパスワードを格納するuserdata.txtを開く
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./userdata.txt");
			//userdata.txtに中身がある場合、その値を読み取る
			if (!reader->EndOfStream) {
				this->tb_UserName->Text = reader->ReadToEnd();
				this->tb_UserPassword->Text = reader->ReadToEnd();
			}
			//userdata.txtを閉じる
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//ファイルが存在しない場合、初期値0で新たなテキストファイルを作成
			System::IO::File::AppendAllText("./userdata.txt", "0");
			System::Diagnostics::Debug::WriteLine("---エラーメッセージ---\n" + ex->Message);
		}
	}
	};
}
