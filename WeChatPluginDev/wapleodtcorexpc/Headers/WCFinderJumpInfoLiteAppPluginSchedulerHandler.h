//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppViewController, NSString, UIViewController;

@interface WCFinderJumpInfoLiteAppPluginSchedulerHandler : NSObject
{
    _Bool _isBeingDismissed;
    int _businessType;
    UIViewController *_fromVC;
    MMLiteAppViewController *_toLiteAppVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) __weak MMLiteAppViewController *toLiteAppVC; // @synthesize toLiteAppVC=_toLiteAppVC;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
- (void)handleLifeCycleEvent:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

