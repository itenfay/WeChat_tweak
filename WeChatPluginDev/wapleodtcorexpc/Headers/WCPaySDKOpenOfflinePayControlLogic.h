//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPaySDKOpenOfflinePayControlLogic
{
    _Bool _bIsSuccOpenOfflinePay;
    NSString *_appId;
    NSString *_bundleId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsSuccOpenOfflinePay; // @synthesize bIsSuccOpenOfflinePay=_bIsSuccOpenOfflinePay;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)stopLogic;
- (void)onOfflinePayLogicStop:(_Bool)arg1;
- (void)walletLockVerifyCancel:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)startLogic;
- (id)initWithAppId:(id)arg1 bundleId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

