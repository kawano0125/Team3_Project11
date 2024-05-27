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
	/// LoginForm �̊T�v
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			LoadFile();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//

		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
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
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ label1;
		   int Index = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
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
			this->l_UserName->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_UserName->Location = System::Drawing::Point(60, 194);
			this->l_UserName->Name = L"l_UserName";
			this->l_UserName->Size = System::Drawing::Size(109, 15);
			this->l_UserName->TabIndex = 0;
			this->l_UserName->Text = L"���[�U�[���F";
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
			this->l_UserPassword->Text = L"�p�X���[�h�F";
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
			this->b_AllRoom->Text = L"���C���\��";
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
			this->b_NewEntry->Text = L"�V�K�쐬";
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
			this->b_Login->Text = L"���O�C��";
			this->b_Login->UseVisualStyleBackColor = true;
			this->b_Login->Click += gcnew System::EventHandler(this, &LoginForm::b_Login_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(43, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 30);
			this->label1->TabIndex = 7;
			this->label1->Text = L"���C���\��Ǘ��V�X�e��";
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
			this->Text = L"���O�C���y�[�W";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ReadDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% RoomIndex) {
			try {
				//StreamReader���g���ăt�@�C������ǂݍ���
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
						System::Diagnostics::Debug::WriteLine("�z��̑���" + parts->Length);
						throw gcnew Exception("�f�[�^�z�񂪂����ς��ł�");
						
					}
				}
				sr->Close();
			}
			catch (Exception^ e)
			{
				// �G���[���b�Z�[�W��\��
				MessageBox::Show("�t�@�C����ǂݍ��ލۂɃG���[���������܂���: " + e->Message, "�G���[", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		};
		void LoadFile() {
			//�t�@�C��1����f�[�^��ǂݍ���Ń��X�g�{�b�N�X2�ɕ\��
			ReadDataFromFile("room1data.txt", PublicData::Room1Array, PublicData::Room1Index);
			System::Diagnostics::Debug::WriteLine("�����P�̓��e" + PublicData::Room1Array[0,1]);
			//PublicData::LoadDataToListBox(PublicData::Room1Array, Index, listBox1);

			// �t�@�C��2����f�[�^��ǂݍ���Ń��X�g�{�b�N�X2�ɕ\��
			ReadDataFromFile("room2data.txt", PublicData::Room2Array, PublicData::Room2Index);
			System::Diagnostics::Debug::WriteLine("�����Q�̓��e" + PublicData::Room2Index);
			//PublicData::LoadDataToListBox(PublicData::Room2Array, Index, listBox1);

			// �t�@�C��3����f�[�^��ǂݍ���Ń��X�g�{�b�N�X3�ɕ\��
			ReadDataFromFile("room3data.txt", PublicData::Room3Array, PublicData::Room3Index);
			//PublicData::LoadDataToListBox(PublicData::Room3Array, Index, listBox1);

			// �t�@�C��4����f�[�^��ǂݍ���Ń��X�g�{�b�N�X4�ɕ\��
			ReadDataFromFile("room4data.txt", PublicData::Room4Array, PublicData::Room4Index);
			//PublicData::LoadDataToListBox(PublicData::Room4Array, Index, listBox1);

			// �t�@�C��5����f�[�^��ǂݍ���Ń��X�g�{�b�N�X5�ɕ\��
			ReadDataFromFile("room5data.txt", PublicData::Room5Array, PublicData::Room5Index);
			//PublicData::LoadDataToListBox(PublicData::Room5Array, Index, listBox1);

			// �t�@�C��6����f�[�^��ǂݍ���Ń��X�g�{�b�N�X6�ɕ\��
			ReadDataFromFile("room6data.txt", PublicData::Room6Array, PublicData::Room6Index);
			//PublicData::LoadDataToListBox(PublicData::Room6Array, Index, listBox1);
		}

	private: System::Void b_NewEntry_Click(System::Object^ sender, System::EventArgs^ e) {
		//���O�C����ʂ��\��
		this->Visible = false;

		//NewEntryForm��\��
		NewEntryForm^ newenrtyform = gcnew NewEntryForm();
		newenrtyform->ShowDialog();

		//���O�C����ʂ�\��
		this->Visible = true;
	}
	private: System::Void b_AllRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		//�����t���O��ݒ�
		flag = 1;
		flag = !flag;	//�t���O�𔽓]������
		if (!flag) {
			//���O�C����ʂ��\��
			this->Visible = false;

			//AllRoomForm��\��
			AllRoomForm^ allroomform = gcnew AllRoomForm();
			allroomform->ShowDialog();
		}
	}
	private: System::Void b_Login_Click(System::Object^ sender, System::EventArgs^ e) {
		
		

		//���O�C������������
		String^ Name;
		String^ Password;
		Name = this->tb_UserName->Text;
		Password = this->tb_UserPassword->Text;
		//���[�U�[���̗��ƃp�X���[�h�̗����󗓂Ń��O�C���{�^���������ꂽ���̃G���[����
		if (Name == "" || Password == "") {
			MessageBox::Show("���[�U�[���ƃp�X���[�h����͂��Ă�������", "�G���[", MessageBoxButtons::OK);
			return;
		}


		flag = 1;
		AllRoomForm^ frmAll = gcnew AllRoomForm();
		frmAll->ShowDialog();

		
		

		

		//�e�L�X�g�{�b�N�X�̃f�[�^�̎擾
		try {
			//���[�U�[���ƃp�X���[�h���i�[����userdata.txt���J��
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./userdata.txt");
			//userdata.txt�ɒ��g������ꍇ�A���̒l��ǂݎ��
			if (!reader->EndOfStream) {
				this->tb_UserName->Text = reader->ReadToEnd();
				this->tb_UserPassword->Text = reader->ReadToEnd();
			}
			//userdata.txt�����
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//�t�@�C�������݂��Ȃ��ꍇ�A�����l0�ŐV���ȃe�L�X�g�t�@�C�����쐬
			System::IO::File::AppendAllText("./userdata.txt", "0");
			System::Diagnostics::Debug::WriteLine("---�G���[���b�Z�[�W---\n" + ex->Message);
		}
	}
	};
}
