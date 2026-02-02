//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAOverseaPrivacyConfirmLogic, WOAPPrivacyConfirmLogic;

@interface WAPrivacyConfirmProxy : NSObject
{
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    WAOverseaPrivacyConfirmLogic *_overseaPrivacyLogic;
}

+ (_Bool)isNeedOverseaPrivacyConfirm;
+ (_Bool)isNeedPrivacyConfirm;
- (void).cxx_destruct;
@property(retain, nonatomic) WAOverseaPrivacyConfirmLogic *overseaPrivacyLogic; // @synthesize overseaPrivacyLogic=_overseaPrivacyLogic;
@property(retain, nonatomic) WOAPPrivacyConfirmLogic *privacyConfirmLogic; // @synthesize privacyConfirmLogic=_privacyConfirmLogic;
- (void)requestOverseaPrivacyWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestPrivacyConfirmrequirement:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

