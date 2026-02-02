//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactInitLogic, MMTimer, NSString;
@protocol initLogicControllerDelegate;

@interface InitLogicController
{
    id <initLogicControllerDelegate> m_delegate;
    _Bool m_bIsIniting;
    _Bool m_bFromReg;
    MMTimer *m_percenTimer;
    unsigned int m_curPercent;
    unsigned int m_uiEventID;
    ContactInitLogic *m_contactInitLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bFromReg; // @synthesize m_bFromReg;
@property(readonly, nonatomic) _Bool m_bIsIniting; // @synthesize m_bIsIniting;
@property(nonatomic) __weak id <initLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onContactInitSuccess;
- (void)onContactInitFail;
- (void)onContactInitProcessUpdate:(unsigned int)arg1;
- (void)retryInitContact;
- (void)tryInitContact;
- (void)onNewInitOK;
- (void)onNewInitFail;
- (void)onNewInitConnectFail;
- (void)stopIniting:(unsigned int)arg1;
- (void)appFirstBecomeActive;
- (_Bool)startInit;
- (void)stopPercentTimer;
- (void)startPercentTimer;
- (void)onPercentTimer;
- (void)percentIniting;
- (unsigned int)getCurNetworkStatus;
- (_Bool)initInternal;
- (_Bool)isNeedInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

