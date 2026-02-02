//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, WCMallBroadCastInfo, WCMallFunctionActivity;

@interface WCMallControlData : NSObject
{
    WCMallBroadCastInfo *m_structBroadCastInfo;
    WCMallFunctionActivity *selectedFunctionActivity;
    NSMutableDictionary *selectedProductsFilledInfoDic;
    NSArray *m_arrGlobalActivityList;
    NSArray *m_arrFunctionActivityList;
    NSArray *m_arrFunctionProductsList;
    NSArray *m_arrOldTelephoneList;
    NSDictionary *m_dicAllTelephoneList;
    NSDictionary *m_dicCandidateTelephoneList;
    _Bool m_bNotShowTutorial;
    _Bool m_bFunctionListDataFromLocalCache;
    NSString *m_balanceLink;
    NSString *m_rechargeLink;
    NSString *m_balanceWord;
    NSString *m_rechargeWord;
    NSDictionary *m_structEmptyPhoneChargeList;
    NSDictionary *m_structHasPhoneChargeList;
    NSDictionary *m_functionTypeMap;
    _Bool _m_bIsShowSetting;
    NSArray *_bannerDics;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsShowSetting; // @synthesize m_bIsShowSetting=_m_bIsShowSetting;
@property(retain, nonatomic) NSArray *bannerDics; // @synthesize bannerDics=_bannerDics;
@property(retain, nonatomic) NSDictionary *m_functionTypeMap; // @synthesize m_functionTypeMap;
@property(retain, nonatomic) NSDictionary *m_structHasPhoneChargeList; // @synthesize m_structHasPhoneChargeList;
@property(retain, nonatomic) NSDictionary *m_structEmptyPhoneChargeList; // @synthesize m_structEmptyPhoneChargeList;
@property(retain, nonatomic) NSString *m_rechargeWord; // @synthesize m_rechargeWord;
@property(retain, nonatomic) NSString *m_balanceWord; // @synthesize m_balanceWord;
@property(retain, nonatomic) NSString *m_rechargeLink; // @synthesize m_rechargeLink;
@property(retain, nonatomic) WCMallBroadCastInfo *m_structBroadCastInfo; // @synthesize m_structBroadCastInfo;
@property(nonatomic) _Bool m_bFunctionListDataFromLocalCache; // @synthesize m_bFunctionListDataFromLocalCache;
@property(nonatomic) _Bool m_bNotShowTutorial; // @synthesize m_bNotShowTutorial;
@property(retain, nonatomic) NSDictionary *m_dicAllTelephoneList; // @synthesize m_dicAllTelephoneList;
@property(retain, nonatomic) NSDictionary *m_dicCandidateTelephoneList; // @synthesize m_dicCandidateTelephoneList;
@property(retain, nonatomic) NSArray *m_arrOldTelephoneList; // @synthesize m_arrOldTelephoneList;
@property(retain, nonatomic) NSMutableDictionary *selectedProductsFilledInfoDic; // @synthesize selectedProductsFilledInfoDic;
@property(retain, nonatomic) WCMallFunctionActivity *selectedFunctionActivity; // @synthesize selectedFunctionActivity;
@property(retain, nonatomic) NSArray *m_arrGlobalActivityList; // @synthesize m_arrGlobalActivityList;
@property(retain, nonatomic) NSArray *m_arrFunctionProductsList; // @synthesize m_arrFunctionProductsList;
@property(retain, nonatomic) NSArray *m_arrFunctionActivityList; // @synthesize m_arrFunctionActivityList;
@property(retain, nonatomic) NSString *m_balanceLink; // @synthesize m_balanceLink;

@end

