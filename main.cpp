#include "stdafx.h"
#include "main.h"
#include <thread>
#include <ctime>
#include <chrono>
#include"traderSpi.h"


/*
包含关系说明:
CTraderApi* pUserApi   子类CSimpleHandler sh
CThostFtdcMdApi* pUserMdApi   子类  CSimpleMdHandler ash



*/

int main()
{
	cout << 10085 << endl;
	return 0;
	
	

}


//
//int main()
//{
//
//	std::cout << 10084 << endl;
//	return;
//	int  k1 = 0;
//	//初始化dll
//	for (int i = 0; i < 4; i++)
//	{
//		memo_buffer[i] = 0;
//	}
//	
//	init_dll();
//
//
//	//初始化必要的数组
//	for (int i = 0; i < 20; i++)
//	{
//		price_buffer[i] = 0;
//	}
//
//	
//
//
//	system("COLOR 0A");
//
//	//命名日志文件
//	SYSTEMTIME sys;
//	GetLocalTime(&sys);
//	std::stringstream ss;
//	ss << "syslog" << sys.wYear << sys.wMonth << sys.wDay << sys.wHour << sys.wMinute << sys.wSecond << ".txt";
//	string temp = ss.str();
//	const char* filestr = temp.c_str();
//	cout << filestr << endl;
//	logfile = fopen(filestr, "w");
//	if (logfile == nullptr) {
//		// 打开文件失败  
//		perror("Error opening file");
//		return 1;
//	}
//
//	
//		//从config里面读取信息
//		string g_chFrontaddr = getConfig("config", "FrontAddr");
//		strcpy_s(g_chBrokerID, getConfig("config", "BrokerID").c_str());
//		strcpy_s(g_chUserID, getConfig("config", "UserID").c_str());
//		strcpy_s(g_chPassword, getConfig("config", "Password").c_str());
//		strcpy_s(g_chInvestorID, getConfig("config", "InvestorID").c_str());
//		strcpy_s(g_chAuthCode, getConfig("config", "AuthCode").c_str());
//		strcpy_s(g_chAppID, getConfig("config", "AppID").c_str());
//		strcpy_s(g_chInstrumentID, getConfig("config", "InstrumentID").c_str());
//		strcpy_s(g_chExchangeID, getConfig("config", "ExchangeID").c_str());
//		g_chover_price = stoi(getConfig("config", "over_price").c_str());
//		g_chjump_tick_now = stoi(getConfig("config", "jump_tick_now").c_str());
//		g_chjump_tick_before = stoi(getConfig("config", "jump_tick_before").c_str());
//		g_chbig_trigger= atof(getConfig("config", "big_trigger").c_str());
//		g_chsmall_trigger= atof(getConfig("config", "small_trigger").c_str());
//		g_chsix_trigger= atof(getConfig("config", "six_trigger").c_str());
//
//		g_chholdtime_ms= stoi(getConfig("config", "holdtime_ms").c_str());
//		g_chlongest_hold_ms = stoi(getConfig("config", "longest_hold_ms").c_str());
//
//
//
//
//
//
//		
//		//注册tdapi 和tdspi
//		cout << "g_chFrontaddr = " << g_chFrontaddr << "\n" << endl;
//		CTraderApi* pUserApi = new CTraderApi;//--------------------------
//		pUserApi->CreateFtdcTraderApi(".\\flow\\");
//		LOG("\napi版本: \n%s", pUserApi->GetApiVersion());
//		LOG("\n采集库版本：\n%s", CTP_GetDataCollectApiVersion());
//		
//		cout << endl;
//		CSimpleHandler tdapi(pUserApi);
//
//		global_tdapi = &tdapi;//全局tdspi//需要优化
//		pUserApi->RegisterSpi(&tdapi);
//		pUserApi->SubscribePrivateTopic(THOST_TERT_QUICK);
//		pUserApi->SubscribePublicTopic(THOST_TERT_QUICK);
//		pUserApi->RegisterFront(const_cast<char*>(g_chFrontaddr.c_str()));
//		pUserApi->Init();
//		
//		WaitForSingleObject(g_hEvent, INFINITE);//没看懂
//		
//
//
//		//直连模式		
//		tdapi.ReqAuthenticate();
//		WaitForSingleObject(g_hEvent, INFINITE);
//		tdapi.ReqUserLogin();
//		WaitForSingleObject(g_hEvent, INFINITE);
//		
//
//		//注册mdapi 和mdspi
//		string g_chFrontMdaddr = getConfig("config", "FrontMdAddr");
//		LOG("g_chFrontMdaddr = %s\n", g_chFrontMdaddr.c_str());
//
//		CThostFtdcMdApi* pUserMdApi =
//			CThostFtdcMdApi::CreateFtdcMdApi(".\\flow\\", false, false);
//		CSimpleMdHandler mdapi(pUserMdApi);
//		global_mdapi = &mdapi;
//		
//		pUserMdApi->RegisterSpi(&mdapi);
//		pUserMdApi->RegisterFront(const_cast<char*>(g_chFrontMdaddr.c_str()));
//		pUserMdApi->Init();
//		
//		WaitForSingleObject(xinhao, INFINITE);
//		mdapi.ReqUserLogin();
//		WaitForSingleObject(xinhao, INFINITE);
//		//开始获取合约
//		md_InstrumentID.clear();
//		string New_instrument = getConfig("config", "InstrumentID").c_str();
//
//		md_InstrumentID = split(New_instrument, ":");
//		mdapi.SubscribeMarketData();//订阅行情
//		
//		/*thread thread_loop_time(loop1);
//		
//		thread thread_send_order(workerThread);*/
//
//
//		_getch();
//		pUserMdApi->Release();
//		return 0;
//		exit(-1);
//
//	
//}

