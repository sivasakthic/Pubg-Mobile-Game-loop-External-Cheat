#pragma once
#include "..\Includes.h"
#include"imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"
namespace Settings {
	extern bool Login;
	extern bool FightMode;
	extern bool Injected;
	extern bool ShowMenu;
	extern bool ShowMenu2;
	extern int Mode;
	extern int SecondMenuMode;
	extern int Tab;
	extern int curraim;

	//aim
	extern int MaxAimDistence;
	extern int AimKey;
	extern bool SkipBots;
	extern bool knocked;
	extern bool AimBot;
	extern bool Legitrack;
	extern bool MagicBullet;
	extern bool Fovbased;
	extern bool FovShow;
	extern ImVec4 FovColor;
	extern float fovcircleredus;
	extern float AimSpeed;


	//Memory 
	extern bool AntiStream;
	extern bool IpadView;
	extern bool NoRecoil;
	extern bool ForceTpp;
	extern bool Xeffect;
	extern bool InstantHit;
	extern bool NoSpread;
	extern bool FastSwitch;
	extern bool RepidFire;
	extern bool Magic360;
	extern int IpadValue;
	extern int InstantValue;
	extern float RepidFireValue;
	extern bool ModSKin;

	//setting 
	extern int UpdateTick;



	extern int AlivePlayers;
	extern int TimeRemind;
	extern int AliveTeams;
	extern int RealPls;
	extern int ZoneID;
	extern int MyTeamID;
	extern int GameID;

	extern string GameState;
	//esp
	extern bool YourInfo;
	extern bool GameInfo;
	extern bool PlayerName;
	extern bool PlayerSkeleton;
	extern bool PlayerLine;
	extern bool PlayerDistance;
	extern bool PlayerHealth;
	extern bool PlayerWeapon;
	extern bool PlayerFlag;
	extern bool PlayerBox;
	extern bool PlayerState;
	extern bool Items;
	extern bool TotalEnemy;
	extern bool Vehicle;
	extern bool Lootbox;
	extern bool LootboxItems;
	extern bool AirDrop;
	extern bool AirDropItems;
	extern bool GrandeWarning;
	extern bool AimWarning;
	extern bool Redzone;
	extern bool Dots;
	extern bool Radar;
	extern ImVec4 PlayerNameColor;
	extern ImVec4 PlayerSkeletonColor;
	extern ImVec4 PlayerLineColor;
	extern ImVec4 PlayerBoxColor;
	extern ImVec4 PlayerStateColor;
	extern ImVec4 VehicleColor;
	extern int PlayerNameSize;
	extern int PlayerStateSize;
	extern int VehicleSize;
	extern int RadarSize;
	extern int DotsSize;
	extern int PlayerSkeletonMode;
	extern int PlayerLineMode;
#pragma region Items 
	extern bool Akm;
	extern bool M16A4;
	extern bool SCARL;
	extern bool M416;
	extern bool GROZA;
	extern bool AUG;
	extern bool QBZ;
	extern bool M762;
	extern bool MK47;
	extern bool G36C;
	extern bool HONEY;
	extern bool FAMAS;
	extern bool KAR98;
	extern bool M24;
	extern bool AWM;
	extern bool WIN94;
	extern bool MOSIN;
	extern bool AMR;
	extern bool SKS;
	extern bool VSS;
	extern bool MINI14;
	extern bool MK14;
	extern bool SLR;
	extern bool QBU;
	extern bool MK12;
	extern bool UZI;
	extern bool UMP45;
	extern bool VECTOR;
	extern bool THOMPSON;
	extern bool BIZON;
	extern bool MP5K;
	extern bool P90;
	extern bool S686;
	extern bool S1897;
	extern bool S12K;
	extern bool DBS;
	extern bool M1014;
	extern bool NS2000;
	extern bool M249;
	extern bool DP28;
	extern bool MG3;
	extern bool FLARE;
	extern bool FRAG;
	extern bool SMOKE;
	extern bool MOLOTOF;
	extern bool MedKit;
	extern bool FirstAidKit;
	extern bool Painkiller;
	extern bool EnergyDrink;
	extern bool Adrenalin;
	extern bool Bag1;
	extern bool Bag2;
	extern bool Bag3;
	extern bool Helmet1;
	extern bool Helmet2;
	extern bool Helmet3;
	extern bool Armor1;
	extern bool Armor2;
	extern bool Armor3;
	extern bool a762mm;
	extern bool a556mm;
	extern bool a9mm;
	extern bool a45ACP;
	extern bool a12Gauege;
	extern bool AwmAmmo;
	extern bool AmrAmmo;
	extern bool Scope_x2;
	extern bool Scope_x3;
	extern bool Scope_x4;
	extern bool Scope_x6;
	extern bool Scope_x8;
	extern bool ShopToken;


	extern ImVec4 colorcode;

	extern ImVec4 AkmColor;
	extern ImVec4 M16A4Color;
	extern ImVec4 SCARLColor;
	extern ImVec4 M416Color;
	extern ImVec4 GROZAColor;
	extern ImVec4 AUGColor;
	extern ImVec4 QBZColor;
	extern ImVec4 M762Color;
	extern ImVec4 MK47Color;
	extern ImVec4 G36CColor;
	extern ImVec4 HONEYColor;
	extern ImVec4 FAMASColor;
	extern ImVec4 KAR98Color;
	extern ImVec4 M24Color;
	extern ImVec4 AWMColor;
	extern ImVec4 WIN94Color;
	extern ImVec4 MOSINColor;
	extern ImVec4 AMRColor;
	extern ImVec4 SKSColor;
	extern ImVec4 VSSColor;
	extern ImVec4 MINI14Color;
	extern ImVec4 MK14Color;
	extern ImVec4 SLRColor;
	extern ImVec4 QBUColor;
	extern ImVec4 MK12Color;
	extern ImVec4 UZIColor;
	extern ImVec4 UMP45Color;
	extern ImVec4 VECTORColor;
	extern ImVec4 THOMPSONColor;
	extern ImVec4 BIZONColor;
	extern ImVec4 MP5KColor;
	extern ImVec4 P90Color;
	extern ImVec4 S686Color;
	extern ImVec4 S1897Color;
	extern ImVec4 S12KColor;
	extern ImVec4 DBSColor;
	extern ImVec4 M1014Color;
	extern ImVec4 NS2000Color;
	extern ImVec4 M249Color;
	extern ImVec4 DP28Color;
	extern ImVec4 MG3Color;
	extern ImVec4 FLAREColor;
	extern ImVec4 FRAGColor;
	extern ImVec4 SMOKEColor;
	extern ImVec4 MOLOTOFColor;
	extern ImVec4 MedKitColor;
	extern ImVec4 FirstAidKitColor;
	extern ImVec4 PainkillerColor;
	extern ImVec4 EnergyDrinkColor;
	extern ImVec4 AdrenalinColor;
	extern ImVec4 Bag1Color;
	extern ImVec4 Bag2Color;
	extern ImVec4 Bag3Color;
	extern ImVec4 Helmet1Color;
	extern ImVec4 Helmet2Color;
	extern ImVec4 Helmet3Color;
	extern ImVec4 Armor1Color;
	extern ImVec4 Armor2Color;
	extern ImVec4 Armor3Color;
	extern ImVec4 a762mmColor;
	extern ImVec4 a556mmColor;
	extern ImVec4 a9mmColor;
	extern ImVec4 a45ACPColor;
	extern ImVec4 a12GauegeColor;
	extern ImVec4 AwmAmmoColor;
	extern ImVec4 AmrAmmoColor;
	extern ImVec4 Scope_x2Color;
	extern ImVec4 Scope_x3Color;
	extern ImVec4 Scope_x4Color;
	extern ImVec4 Scope_x6Color;
	extern ImVec4 Scope_x8Color;
	extern ImVec4 ShopTokenColor;
#pragma endregion 
}
namespace ModSkin {
	extern int Suit;
	extern int Helmet;
	extern int BackBack;
	extern int Akm;
	extern int M16a4;
	extern int Scar;
	extern int M416;
	extern int M762;
	extern int Ump;
	extern int Kar98;
	extern int M24;
	extern int AWM;
	extern int SKS;
	extern int Mini14;
	extern int S12k;
	extern int M249;
	extern int Pan;
	extern int UZI;
	extern int Vector;
	extern int DP28;
}