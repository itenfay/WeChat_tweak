//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTransitionUnit : NSObject
{
    unsigned long long _transitionType;
    struct CGPoint _transitionBeginPoint;
    struct CGRect _transitionResultRect;
}

+ (id)transitionUnitWithType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) struct CGRect transitionResultRect; // @synthesize transitionResultRect=_transitionResultRect;
@property(nonatomic) struct CGPoint transitionBeginPoint; // @synthesize transitionBeginPoint=_transitionBeginPoint;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

