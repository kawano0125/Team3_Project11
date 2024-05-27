#pragma once
#include "PublicData.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// SearchResultForm の概要
	/// </summary>
	public ref class SearchResultForm : public System::Windows::Forms::Form
	{
	public:
		SearchResultForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
			Result();

		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~SearchResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_SearchResultReturn;
	private: System::Windows::Forms::Button^ b_Room1;
	private: System::Windows::Forms::Button^ b_Room2;
	private: System::Windows::Forms::Button^ b_Room4;
	protected:

	protected:



	private: System::Windows::Forms::Button^ b_Room3;
	private: System::Windows::Forms::Button^ b_Room5;
	private: System::Windows::Forms::Button^ b_Room6;






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
			this->b_SearchResultReturn = (gcnew System::Windows::Forms::Button());
			this->b_Room1 = (gcnew System::Windows::Forms::Button());
			this->b_Room2 = (gcnew System::Windows::Forms::Button());
			this->b_Room4 = (gcnew System::Windows::Forms::Button());
			this->b_Room3 = (gcnew System::Windows::Forms::Button());
			this->b_Room5 = (gcnew System::Windows::Forms::Button());
			this->b_Room6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b_SearchResultReturn
			// 
			this->b_SearchResultReturn->BackColor = System::Drawing::Color::LawnGreen;
			this->b_SearchResultReturn->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_SearchResultReturn->Location = System::Drawing::Point(26, 12);
			this->b_SearchResultReturn->Name = L"b_SearchResultReturn";
			this->b_SearchResultReturn->Size = System::Drawing::Size(109, 50);
			this->b_SearchResultReturn->TabIndex = 0;
			this->b_SearchResultReturn->Text = L"戻る";
			this->b_SearchResultReturn->UseVisualStyleBackColor = false;
			this->b_SearchResultReturn->Click += gcnew System::EventHandler(this, &SearchResultForm::b_SearchResultReturn_Click);
			// 
			// b_Room1
			// 
			this->b_Room1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room1->Location = System::Drawing::Point(74, 154);
			this->b_Room1->Name = L"b_Room1";
			this->b_Room1->Size = System::Drawing::Size(162, 77);
			this->b_Room1->TabIndex = 1;
			this->b_Room1->Text = L"Room1";
			this->b_Room1->UseVisualStyleBackColor = true;
			this->b_Room1->Visible = false;
			// 
			// b_Room2
			// 
			this->b_Room2->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room2->Location = System::Drawing::Point(316, 154);
			this->b_Room2->Name = L"b_Room2";
			this->b_Room2->Size = System::Drawing::Size(162, 77);
			this->b_Room2->TabIndex = 2;
			this->b_Room2->Text = L"Room2";
			this->b_Room2->UseVisualStyleBackColor = true;
			this->b_Room2->Visible = false;
			// 
			// b_Room4
			// 
			this->b_Room4->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room4->Location = System::Drawing::Point(316, 258);
			this->b_Room4->Name = L"b_Room4";
			this->b_Room4->Size = System::Drawing::Size(162, 77);
			this->b_Room4->TabIndex = 3;
			this->b_Room4->Text = L"Room4";
			this->b_Room4->UseVisualStyleBackColor = true;
			this->b_Room4->Visible = false;
			// 
			// b_Room3
			// 
			this->b_Room3->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room3->Location = System::Drawing::Point(74, 258);
			this->b_Room3->Name = L"b_Room3";
			this->b_Room3->Size = System::Drawing::Size(162, 77);
			this->b_Room3->TabIndex = 4;
			this->b_Room3->Text = L"Room3";
			this->b_Room3->UseVisualStyleBackColor = true;
			this->b_Room3->Visible = false;
			// 
			// b_Room5
			// 
			this->b_Room5->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room5->Location = System::Drawing::Point(74, 369);
			this->b_Room5->Name = L"b_Room5";
			this->b_Room5->Size = System::Drawing::Size(162, 77);
			this->b_Room5->TabIndex = 5;
			this->b_Room5->Text = L"Room5";
			this->b_Room5->UseVisualStyleBackColor = true;
			this->b_Room5->Visible = false;
			// 
			// b_Room6
			// 
			this->b_Room6->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room6->Location = System::Drawing::Point(316, 369);
			this->b_Room6->Name = L"b_Room6";
			this->b_Room6->Size = System::Drawing::Size(162, 77);
			this->b_Room6->TabIndex = 6;
			this->b_Room6->Text = L"Room6";
			this->b_Room6->UseVisualStyleBackColor = true;
			this->b_Room6->Visible = false;
			// 
			// SearchResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->b_Room6);
			this->Controls->Add(this->b_Room5);
			this->Controls->Add(this->b_Room3);
			this->Controls->Add(this->b_Room4);
			this->Controls->Add(this->b_Room2);
			this->Controls->Add(this->b_Room1);
			this->Controls->Add(this->b_SearchResultReturn);
			this->Name = L"SearchResultForm";
			this->Text = L"検索結果";
			this->Load += gcnew System::EventHandler(this, &SearchResultForm::SearchResultForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		void Result()
		{
			for (int i = 1; i < 7; i++) {
				int res = PublicData::ResearchReserve(i, PublicData::Date, StartHour, EndHour, Num);
				if (res) {
					switch (i) {
					case 1:
						b_Room1->Visible = true;
						break;
					case 2:
						b_Room1->Visible = true;
						break;
					case 3:
						b_Room1->Visible = true;
						break;
					case 4:
						b_Room1->Visible = true;
						break;
					case 5:
						b_Room1->Visible = true;
						break;
					case 6:
						b_Room1->Visible = true;
						break;
					}
				}
			}
		}

	private: System::Void SearchResultForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ path;
		//PublicData::ReadDataFromFile("room1data.txt", PublicData::Room1Array,PublicData::Room1Index);
	}
	private: System::Void b_SearchResultReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
