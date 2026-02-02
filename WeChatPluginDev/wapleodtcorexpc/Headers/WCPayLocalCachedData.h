//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCPayLocalCachedData : NSObject
{
    _Bool m_bResetMainBindSerial;
    NSString *m_nsLastBindSerial;
    _Bool m_bShowedBalanceDescriptionTips;
    _Bool m_bShowedFaceToFaceTransferViewTips;
    _Bool m_bShowedFaceToFaceReceiveMoneyTips;
    NSString *m_nsWCPayOfflinePayLastSelectedCardBindSerial;
    NSMutableDictionary *m_arrWXBorrowMoneyItemRedCode;
    NSMutableSet *m_setReceivedHBMsgID;
    NSMutableSet *m_setReceivedTransferMsgID;
    unsigned int m_localBadgeIndex;
    NSMutableDictionary *m_dicFunctionVisits;
    _Bool m_bShowedChangeWalletTips;
    NSMutableDictionary *m_dicBanners;
    NSMutableDictionary *m_dicAllSceneLastCard;
    _Bool m_bIsShowFetchFirstTips;
    NSString *m_nsCardDetailBaseUrl;
    _Bool m_bIsAcceptRealnameLicense;
    double licenseLastQueryTime;
    long long licenseQueryDelaySeconds;
    double m_tLBSLastShowTime;
    _Bool m_bIsShowOfflinePayTips;
    NSString *m_nsBalanceDetailRealnameGuideTitle;
    NSString *m_nsWalletBalanceTitle;
    _Bool _m_bIsShowHKFacingReceiveFirstTips;
    NSMutableSet *m_setGroupPayLaunchRecord;
    NSMutableSet *m_setGroupPayPaySuccessRecord;
    NSString *_m_walletUrl;
    NSMutableArray *_m_receivedHBMsgIDArray;
    NSMutableArray *_m_transferMsgIDArray;
    NSMutableArray *_m_groupPayLaunchRecordArray;
    NSMutableArray *_m_groupPayPaySuccessRecordArray;
    NSMutableArray *_m_synthesizeRecordQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsShowHKFacingReceiveFirstTips; // @synthesize m_bIsShowHKFacingReceiveFirstTips=_m_bIsShowHKFacingReceiveFirstTips;
@property(retain, nonatomic) NSMutableArray *m_synthesizeRecordQueue; // @synthesize m_synthesizeRecordQueue=_m_synthesizeRecordQueue;
@property(retain, nonatomic) NSMutableArray *m_groupPayPaySuccessRecordArray; // @synthesize m_groupPayPaySuccessRecordArray=_m_groupPayPaySuccessRecordArray;
@property(retain, nonatomic) NSMutableArray *m_groupPayLaunchRecordArray; // @synthesize m_groupPayLaunchRecordArray=_m_groupPayLaunchRecordArray;
@property(retain, nonatomic) NSMutableArray *m_transferMsgIDArray; // @synthesize m_transferMsgIDArray=_m_transferMsgIDArray;
@property(retain, nonatomic) NSMutableArray *m_receivedHBMsgIDArray; // @synthesize m_receivedHBMsgIDArray=_m_receivedHBMsgIDArray;
@property(copy, nonatomic) NSString *m_walletUrl; // @synthesize m_walletUrl=_m_walletUrl;
@property(retain, nonatomic) NSString *m_nsWalletBalanceTitle; // @synthesize m_nsWalletBalanceTitle;
@property(retain, nonatomic) NSString *m_nsBalanceDetailRealnameGuideTitle; // @synthesize m_nsBalanceDetailRealnameGuideTitle;
@property(nonatomic) _Bool m_bIsShowOfflinePayTips; // @synthesize m_bIsShowOfflinePayTips;
@property(nonatomic) double m_tLBSLastShowTime; // @synthesize m_tLBSLastShowTime;
@property(retain, nonatomic) NSMutableSet *m_setGroupPayPaySuccessRecord; // @synthesize m_setGroupPayPaySuccessRecord;
@property(retain, nonatomic) NSMutableSet *m_setGroupPayLaunchRecord; // @synthesize m_setGroupPayLaunchRecord;
@property(nonatomic) long long licenseQueryDelaySeconds; // @synthesize licenseQueryDelaySeconds;
@property(nonatomic) double licenseLastQueryTime; // @synthesize licenseLastQueryTime;
@property(nonatomic) _Bool m_bIsAcceptRealnameLicense; // @synthesize m_bIsAcceptRealnameLicense;
@property(retain, nonatomic) NSString *m_nsCardDetailBaseUrl; // @synthesize m_nsCardDetailBaseUrl;
@property(nonatomic) _Bool m_bIsShowFetchFirstTips; // @synthesize m_bIsShowFetchFirstTips;
@property(retain, nonatomic) NSMutableDictionary *m_dicAllSceneLastCard; // @synthesize m_dicAllSceneLastCard;
@property(retain, nonatomic) NSMutableDictionary *m_dicBanners; // @synthesize m_dicBanners;
@property(nonatomic) _Bool m_bShowedChangeWalletTips; // @synthesize m_bShowedChangeWalletTips;
@property(retain, nonatomic) NSMutableDictionary *m_dicFunctionVisits; // @synthesize m_dicFunctionVisits;
@property(nonatomic) unsigned int m_localBadgeIndex; // @synthesize m_localBadgeIndex;
@property(retain, nonatomic) NSMutableSet *m_setReceivedTransferMsgID; // @synthesize m_setReceivedTransferMsgID;
@property(retain, nonatomic) NSMutableSet *m_setReceivedHBMsgID; // @synthesize m_setReceivedHBMsgID;
@property(retain, nonatomic) NSMutableDictionary *m_arrWXBorrowMoneyItemRedCode; // @synthesize m_arrWXBorrowMoneyItemRedCode;
@property(retain, nonatomic) NSString *m_nsWCPayOfflinePayLastSelectedCardBindSerial; // @synthesize m_nsWCPayOfflinePayLastSelectedCardBindSerial;
@property(nonatomic) _Bool m_bShowedFaceToFaceTransferViewTips; // @synthesize m_bShowedFaceToFaceTransferViewTips;
@property(nonatomic) _Bool m_bShowedFaceToFaceReceiveMoneyTips; // @synthesize m_bShowedFaceToFaceReceiveMoneyTips;
@property(nonatomic) _Bool m_bShowedBalanceDescriptionTips; // @synthesize m_bShowedBalanceDescriptionTips;
@property(retain, nonatomic) NSString *m_nsLastBindSerial; // @synthesize m_nsLastBindSerial;
@property(nonatomic) _Bool m_bResetMainBindSerial; // @synthesize m_bResetMainBindSerial;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

