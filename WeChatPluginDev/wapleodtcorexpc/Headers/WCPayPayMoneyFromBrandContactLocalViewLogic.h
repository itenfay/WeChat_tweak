//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayPayMoneyFromBrandContactLocalViewLogic
{
    NSString *m_nsHandleURL;
}

- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)OnHandleWCPayURL:(id)arg1 Error:(id)arg2;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4;
- (void)OrderDetailBack;
- (void)OrderDetailPay:(id)arg1;
- (void)OrderDetailAdd:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (void)SetHandleURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

