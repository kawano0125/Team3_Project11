#pragma once
#include<fstream>
static int RoomNumber;
static int StartHour;
static int StartMin;
static int EndHour;
static int EndMin;
static int Num;
static int Id;
static int flag;
namespace Project3 {
	using namespace System;
	ref class PublicData
	{
		static property PublicData^ Instance {
			PublicData^ get() {
				if (instance == nullptr) {
					instance = gcnew  PublicData();
				}
				return instance;
			}
		}

	private:
		static  PublicData^ instance = nullptr;
	public:
		static int Start;
		static int End;
		//ログインで使用する変数
		static String^ Id = "";
		static String^ PassWord;
		static int Flag = 1;

		//新規登録で使用する変数
		static String^ NewId = "";
		static String^ NewPassword = "";

		//選択部屋番号を保管する変数
		static int RoomNumber = 0;

		//予約で使用する変数
		static String^ Date = "";
		static String^ StartHour = "";
		static String^ StartMin = "";
		static String^ EndHour = "";
		static String^ EndMin = "";
		static int Num = 0;

		//認証情報を保管する配列
		static cli::array<String^, 1>^ UserArray = gcnew cli::array<String^, 1>(100);

		//認証情報配列の最後の要素を指す要素番号
		static int UserInfoIndex = 0;

		//部屋それぞれのテキストデータを保管する配列
		static cli::array<String^, 2>^ Room1Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room2Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room3Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room4Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room5Array = gcnew cli::array<String^, 2>(100, 6);
		static cli::array<String^, 2>^ Room6Array = gcnew cli::array<String^, 2>(100, 6);

		//部屋配列の最後の要素を指す要素番号
		static int Room1Index = 0;
		static int Room2Index = 0;
		static int Room3Index = 0;
		static int Room4Index = 0;
		static int Room5Index = 0;
		static int Room6Index = 0;


		//部屋のファイルからデータを読み込む関数
		static void ReadDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% RoomIndex);

		//認証情報ファイルからデータを読み込む関数
		static void UserDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% UserIndex);

		//データが重複していないかの関数
		static int ResearchReserve(int RoomNumber, String^ Date, int Start, int End, int people);

		// 配列をリストボックスに表示する関数
		static void LoadDataToListBox(array<String^, 2>^ dataArray, int currentIndex, System::Windows::Forms::ListBox^ listBox);

		// ファイルにデータを書き込む関数


	};
};