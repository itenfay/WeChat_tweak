//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WCPayRealnameSelectGuardianViewController;

@interface WXPLiteAppRealnameService : NSObject
{
    UIViewController *_curViewController;
    WCPayRealnameSelectGuardianViewController *_selectGuardianVC;
    CDUnknownBlockType _verifyParentCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType verifyParentCallback; // @synthesize verifyParentCallback=_verifyParentCallback;
@property(retain, nonatomic) WCPayRealnameSelectGuardianViewController *selectGuardianVC; // @synthesize selectGuardianVC=_selectGuardianVC;
@property(nonatomic) __weak UIViewController *curViewController; // @synthesize curViewController=_curViewController;
- (void)notifyRealNameCancel;
- (void)notifyRealNameResult:(id)arg1;
- (void)selectGuardianViewControllerDidVerifyParentFromLiteApp:(_Bool)arg1 appid:(id)arg2 path:(id)arg3 query:(id)arg4;
- (void)selectGuardianViewControllerRequestToHandleRouteInfo:(id)arg1;
- (void)selectGuardianViewControllerDidCancel;
- (void)startUnderAgeParentVerify:(id)arg1 dict:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

