//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCPayBalanceChargeLQTInfo, WCPayBalanceInfo, WCPayBankPriority, WCPayBillEntryInfo, WCPayBindCardInfo, WCPayDynamicActionEntry, WCPayFetchInfo, WCPayJumpRemindInfo, WCPayLQTInfo, WCPayLoanEntryInfo, WCPayNoticeInfo, WCPayOfflinePayBlockLayer, WCPayOfflinePayDisableBlockLayer, WCPayOfflinePayGuideBar, WCPayRealnameGuideInfo, WCPaySwitchInfo, WCPayUserInfo;

@interface WCPayBindQueryUserInfoStruct : NSObject
{
    NSArray *m_arrPayCardList;
    NSArray *m_arrHistoryPayCardList;
    WCPayUserInfo *m_oUserInfo;
    NSArray *m_arrVirtualCardList;
    NSArray *m_arrWXBorrowMoneyList;
    WCPayBalanceInfo *m_oBalanceInfo;
    WCPaySwitchInfo *m_oSwitchInfo;
    WCPayNoticeInfo *m_oWCPayNoticeInfo;
    WCPayLoanEntryInfo *m_oLoanEntryInfo;
    WCPayBindCardInfo *m_oSelectedBindCardInfo;
    NSString *m_nsNoAvalibleCardWording;
    WCPayRealnameGuideInfo *realnameInfo;
    int _bindqueryScene;
    NSArray *m_arrBalaneNotice;
    NSArray *m_arrFetchNotice;
    WCPayFetchInfo *_m_oFetchInfo;
    WCPayLQTInfo *_m_oLqtInfo;
    WCPayBankPriority *_bank_priority;
    WCPayBillEntryInfo *_billEntryInfo;
    WCPayJumpRemindInfo *_jumpRemindInfo;
    WCPayDynamicActionEntry *_lqt_action_entry;
    WCPayBalanceChargeLQTInfo *_balanceLqtInfo;
    WCPayOfflinePayGuideBar *_offlinePayGuideBar;
    WCPayOfflinePayBlockLayer *_offlinePayBlockLayer;
    WCPayOfflinePayDisableBlockLayer *_offlinePayDisableBlockLayer;
    NSArray *_payManageLabelList;
    NSString *_complianceHalfPageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *complianceHalfPageData; // @synthesize complianceHalfPageData=_complianceHalfPageData;
@property(retain, nonatomic) NSArray *payManageLabelList; // @synthesize payManageLabelList=_payManageLabelList;
@property(retain, nonatomic) WCPayOfflinePayDisableBlockLayer *offlinePayDisableBlockLayer; // @synthesize offlinePayDisableBlockLayer=_offlinePayDisableBlockLayer;
@property(retain, nonatomic) WCPayOfflinePayBlockLayer *offlinePayBlockLayer; // @synthesize offlinePayBlockLayer=_offlinePayBlockLayer;
@property(retain, nonatomic) WCPayOfflinePayGuideBar *offlinePayGuideBar; // @synthesize offlinePayGuideBar=_offlinePayGuideBar;
@property(retain, nonatomic) WCPayBalanceChargeLQTInfo *balanceLqtInfo; // @synthesize balanceLqtInfo=_balanceLqtInfo;
@property(retain, nonatomic) WCPayDynamicActionEntry *lqt_action_entry; // @synthesize lqt_action_entry=_lqt_action_entry;
@property(retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo; // @synthesize jumpRemindInfo=_jumpRemindInfo;
@property(retain, nonatomic) WCPayBillEntryInfo *billEntryInfo; // @synthesize billEntryInfo=_billEntryInfo;
@property(nonatomic) int bindqueryScene; // @synthesize bindqueryScene=_bindqueryScene;
@property(retain, nonatomic) WCPayBankPriority *bank_priority; // @synthesize bank_priority=_bank_priority;
@property(retain, nonatomic) WCPayLQTInfo *m_oLqtInfo; // @synthesize m_oLqtInfo=_m_oLqtInfo;
@property(retain, nonatomic) WCPayFetchInfo *m_oFetchInfo; // @synthesize m_oFetchInfo=_m_oFetchInfo;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameInfo; // @synthesize realnameInfo;
@property(retain, nonatomic) NSString *m_nsNoAvalibleCardWording; // @synthesize m_nsNoAvalibleCardWording;
@property(retain, nonatomic) WCPayBindCardInfo *m_oSelectedBindCardInfo; // @synthesize m_oSelectedBindCardInfo;
@property(retain, nonatomic) WCPayLoanEntryInfo *m_oLoanEntryInfo; // @synthesize m_oLoanEntryInfo;
@property(retain, nonatomic) NSArray *m_arrWXBorrowMoneyList; // @synthesize m_arrWXBorrowMoneyList;
@property(retain, nonatomic) NSArray *m_arrFetchNotice; // @synthesize m_arrFetchNotice;
@property(retain, nonatomic) NSArray *m_arrBalaneNotice; // @synthesize m_arrBalaneNotice;
@property(retain, nonatomic) WCPayNoticeInfo *m_oWCPayNoticeInfo; // @synthesize m_oWCPayNoticeInfo;
@property(retain, nonatomic) WCPayUserInfo *m_oUserInfo; // @synthesize m_oUserInfo;
@property(retain, nonatomic) WCPaySwitchInfo *m_oSwitchInfo; // @synthesize m_oSwitchInfo;
@property(retain, nonatomic) WCPayBalanceInfo *m_oBalanceInfo; // @synthesize m_oBalanceInfo;
@property(retain, nonatomic) NSArray *m_arrVirtualCardList; // @synthesize m_arrVirtualCardList;
@property(retain, nonatomic) NSArray *m_arrHistoryPayCardList; // @synthesize m_arrHistoryPayCardList;
@property(retain, nonatomic) NSArray *m_arrPayCardList; // @synthesize m_arrPayCardList;

@end

