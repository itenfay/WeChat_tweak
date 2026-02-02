//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAOverseaPrivacyConfirmLogic : NSObject
{
    CDUnknownBlockType _completeAction;
}

+ (_Bool)isNeedOverseaPrivacyConfirm;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeAction; // @synthesize completeAction=_completeAction;
- (void)onCancelServiceAuth;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)requestOverseaPrivacyWithCompleteAction:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

