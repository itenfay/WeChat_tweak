//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountControlData, WCAccountErrorHandleLogic;

@interface WCAccountBaseControlLogic
{
    WCAccountControlData *m_data;
    WCAccountErrorHandleLogic *m_errorHandleLogic;
    _Bool m_bNeverAutoStop;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCAccountControlData *data; // @synthesize data=m_data;
- (id)getViewController;
- (void)onErrorHandleLogicDone;
- (_Bool)isFromReg;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2 closeFirstViewWithFadeoutAnimation:(_Bool)arg3;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2;
- (void)checkStopLogic;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2 forceFullScreen:(_Bool)arg3;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;
- (_Bool)onHandleError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)vcResignFirstResponder;
- (void)vcBecomeFirstResponder;
- (void)stopLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

