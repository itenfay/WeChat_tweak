//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayCloseWalletLockCgiDelegate;

@interface WCPayCloseWalletLockCgi
{
    NSString *_password;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCPayCloseWalletLockCgiDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

