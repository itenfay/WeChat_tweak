//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandOverseaPrivacyConfirmLogic
{
    CDUnknownBlockType _openBlock;
    CDUnknownBlockType _closeBlock;
}

+ (_Bool)shouldShowCloseOverseaPrivacyConfirm;
+ (_Bool)isNeedOverseaPrivacyConfirm;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType openBlock; // @synthesize openBlock=_openBlock;
- (void)onCancelServiceAuth;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)requestCloseOverseaPrivacyAuthorizationWithCloseBlock:(CDUnknownBlockType)arg1;
- (void)requestOpenOverseaPrivacyAuthorizationWithOpenBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

