//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, NSTimer, WCFinderMembershipPaymentSelectView;
@protocol WCFinderMemberShipConsumeViewModelDelegate;

@interface WCFinderMemberShipConsumeViewModel : NSObject
{
    _Bool _autoRenewSwitch;
    int _reportScene;
    id <WCFinderMemberShipConsumeViewModelDelegate> _delegate;
    NSString *_finderUsername;
    NSString *_redirectFeedID;
    long long _qrcodeScene;
    NSString *_liveNoticeEncryptedId;
    NSString *_promoterToken;
    unsigned long long _entranceSource;
    NSString *_finderNickname;
    unsigned long long _memberPrice;
    unsigned long long _autoMemberPrice;
    NSString *_wecoinProductId;
    NSString *_billNo;
    NSData *_respBuff;
    NSTimer *_pollingTimer;
    WCFinderMembershipPaymentSelectView *_selectView;
    unsigned long long _visitorStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long visitorStatus; // @synthesize visitorStatus=_visitorStatus;
@property(retain, nonatomic) WCFinderMembershipPaymentSelectView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(nonatomic) _Bool autoRenewSwitch; // @synthesize autoRenewSwitch=_autoRenewSwitch;
@property(retain, nonatomic) NSData *respBuff; // @synthesize respBuff=_respBuff;
@property(copy, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(copy, nonatomic) NSString *wecoinProductId; // @synthesize wecoinProductId=_wecoinProductId;
@property(nonatomic) unsigned long long autoMemberPrice; // @synthesize autoMemberPrice=_autoMemberPrice;
@property(nonatomic) unsigned long long memberPrice; // @synthesize memberPrice=_memberPrice;
@property(copy, nonatomic) NSString *finderNickname; // @synthesize finderNickname=_finderNickname;
@property(nonatomic) unsigned long long entranceSource; // @synthesize entranceSource=_entranceSource;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(copy, nonatomic) NSString *liveNoticeEncryptedId; // @synthesize liveNoticeEncryptedId=_liveNoticeEncryptedId;
@property(nonatomic) long long qrcodeScene; // @synthesize qrcodeScene=_qrcodeScene;
@property(copy, nonatomic) NSString *redirectFeedID; // @synthesize redirectFeedID=_redirectFeedID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) __weak id <WCFinderMemberShipConsumeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSafeRemoveSelf;
- (void)pushVCAnimated:(id)arg1 removeSelf:(_Bool)arg2;
- (void)onPaymentConfirmButtonClicked;
- (void)showPayConfirmView;
- (void)stopPolling;
- (void)pollCGI;
- (void)startPollingCGIWithInterval:(double)arg1;
- (void)onMemberShipConsumeViewModelPurchaseMemberShipSuccess;
- (void)onJoinVIPButtonClicked:(unsigned long long)arg1;
- (void)updateVisitorStatus;
- (void)followContactIfNeeded;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)startConsume:(unsigned long long)arg1;
- (void)onfetchFinderMemberShipPayBillFail;
- (void)onfetchFinderMemberShipPayBillSuccess:(unsigned long long)arg1;
- (id)getCurrentViewController;
- (void)fetchFinderMemberShipPayBillWithFinderUsername:(id)arg1 subscriptionType:(unsigned long long)arg2 subscriptionExtInfo:(id)arg3 entranceSource:(unsigned long long)arg4;
- (id)genConsumeParameterWithMode:(unsigned long long)arg1;
- (id)genConsumeParameter;
- (id)genSubscribeParameter;
- (void)startMemberShipConsume;
- (void)updateMemberPrice:(unsigned long long)arg1;
- (id)initWithFinderUsername:(id)arg1 finderNickname:(id)arg2 memberPrice:(unsigned long long)arg3 autoMemberPrice:(unsigned long long)arg4 autoRenewSwitch:(_Bool)arg5 wecoinProductId:(id)arg6 redirectFeedID:(id)arg7 reportScene:(int)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

