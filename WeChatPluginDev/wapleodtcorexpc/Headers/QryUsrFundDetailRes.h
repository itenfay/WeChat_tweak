//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ComonPromptInfo, DocumentItem, FinancialInfo, LQTDetailButton, LctOperationInfo, LqtDialog, MiniAppsItem, NSMutableArray, NSString, NewDocumentItem, PopUpWithHalfDialog, PopUpsItem;

@interface QryUsrFundDetailRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) NSMutableArray *actionSheet; // @dynamic actionSheet;
@property(retain, nonatomic) NewDocumentItem *activityBtn; // @dynamic activityBtn;
@property(nonatomic) _Bool autoPullFinancialInfo; // @dynamic autoPullFinancialInfo;
@property(nonatomic) unsigned int balance; // @dynamic balance;
@property(retain, nonatomic) NSString *balanceUrl; // @dynamic balanceUrl;
@property(retain, nonatomic) NSString *balanceUrlDesc; // @dynamic balanceUrlDesc;
@property(retain, nonatomic) DocumentItem *banner; // @dynamic banner;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *blockUrl; // @dynamic blockUrl;
@property(retain, nonatomic) DocumentItem *bottomFaqDesc; // @dynamic bottomFaqDesc;
@property(retain, nonatomic) ComonPromptInfo *bottomOpenFofEntrance; // @dynamic bottomOpenFofEntrance;
@property(retain, nonatomic) NSString *bottomWording; // @dynamic bottomWording;
@property(nonatomic) unsigned int buyValid; // @dynamic buyValid;
@property(retain, nonatomic) NSString *closeLqtTips; // @dynamic closeLqtTips;
@property(retain, nonatomic) LqtDialog *dialog; // @dynamic dialog;
@property(retain, nonatomic) FinancialInfo *financialInfo; // @dynamic financialInfo;
@property(retain, nonatomic) NSString *financialInfoWording; // @dynamic financialInfoWording;
@property(retain, nonatomic) PopUpWithHalfDialog *firstPurchaseDialog; // @dynamic firstPurchaseDialog;
@property(retain, nonatomic) NSString *fundCode; // @dynamic fundCode;
@property(retain, nonatomic) NSString *fundName; // @dynamic fundName;
@property(retain, nonatomic) NSString *gainRateDesc; // @dynamic gainRateDesc;
@property(retain, nonatomic) NSString *gainRateUrl; // @dynamic gainRateUrl;
@property(retain, nonatomic) NSString *gainRateVal; // @dynamic gainRateVal;
@property(retain, nonatomic) NSString *greyCloseLqtTips; // @dynamic greyCloseLqtTips;
@property(retain, nonatomic) PopUpWithHalfDialog *halfDialog; // @dynamic halfDialog;
@property(retain, nonatomic) NSMutableArray *infoNodeLst; // @dynamic infoNodeLst;
@property(retain, nonatomic) NSString *invalidAmountHint; // @dynamic invalidAmountHint;
@property(nonatomic) _Bool isHideCloseAccountBtn; // @dynamic isHideCloseAccountBtn;
@property(nonatomic) int isProtocolDefault; // @dynamic isProtocolDefault;
@property(nonatomic) _Bool isShowPopups; // @dynamic isShowPopups;
@property(nonatomic) int isShowProtocol; // @dynamic isShowProtocol;
@property(retain, nonatomic) LctOperationInfo *lctOperationInfo; // @dynamic lctOperationInfo;
@property(nonatomic) unsigned int maxAmountPerRedeem; // @dynamic maxAmountPerRedeem;
@property(retain, nonatomic) NewDocumentItem *middleNoticeBanner; // @dynamic middleNoticeBanner;
@property(retain, nonatomic) MiniAppsItem *miniapps; // @dynamic miniapps;
@property(retain, nonatomic) NSMutableArray *newActionSheet; // @dynamic newActionSheet;
@property(retain, nonatomic) NSMutableArray *newInfoNodeLst; // @dynamic newInfoNodeLst;
@property(retain, nonatomic) NSMutableArray *operationInfo; // @dynamic operationInfo;
@property(nonatomic) unsigned int pageStyle; // @dynamic pageStyle;
@property(retain, nonatomic) PopUpsItem *popupsItem; // @dynamic popupsItem;
@property(retain, nonatomic) NSString *profitDate; // @dynamic profitDate;
@property(retain, nonatomic) NSMutableArray *protocolLst; // @dynamic protocolLst;
@property(retain, nonatomic) NSString *realnameGuideInfo; // @dynamic realnameGuideInfo;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *spid; // @dynamic spid;
@property(retain, nonatomic) NewDocumentItem *subtitleBanner; // @dynamic subtitleBanner;
@property(retain, nonatomic) NSString *totalGainDesc; // @dynamic totalGainDesc;
@property(retain, nonatomic) NSString *totalGainUrl; // @dynamic totalGainUrl;
@property(nonatomic) unsigned int totalGainVal; // @dynamic totalGainVal;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) LQTDetailButton *transferIn; // @dynamic transferIn;
@property(nonatomic) _Bool transferInDisable; // @dynamic transferInDisable;
@property(nonatomic) unsigned int transferInOutBtnStyle; // @dynamic transferInOutBtnStyle;
@property(retain, nonatomic) LQTDetailButton *transferOut; // @dynamic transferOut;
@property(nonatomic) _Bool transferOutDisable; // @dynamic transferOutDisable;
@property(retain, nonatomic) PopUpWithHalfDialog *upgradeToFixedDepositRemindHalfDialog; // @dynamic upgradeToFixedDepositRemindHalfDialog;
@property(retain, nonatomic) NSString *yesterdayGainDesc; // @dynamic yesterdayGainDesc;

@end

