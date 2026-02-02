//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface WCFinderUserBindPhoneAssist : NSObject
{
    CDUnknownBlockType _complete;
    UIViewController *_fromVC;
}

+ (void)checkWithUserPrepare:(id)arg1 type:(long long)arg2 isRegChain:(_Bool)arg3 fromVC:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
- (void)bindPhoneReturn;
- (void)continueBindPhone;
- (void)cancelBindPhone;
- (void)showAlertWithTitle:(id)arg1 content:(id)arg2;
- (void)showBindPhoneView:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

