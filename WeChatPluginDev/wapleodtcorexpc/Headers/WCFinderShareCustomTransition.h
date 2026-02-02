//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderShareAbstractCell;

@interface WCFinderShareCustomTransition : NSObject
{
    _Bool _willPresent;
    id <WCFinderShareAbstractCell> _shareCell;
    NSString *_shareCellIdentifier;
    struct CGRect _toRect;
}

+ (struct CGRect)transitionRectForFeedId:(id)arg1 image:(id)arg2 inNav:(id)arg3;
+ (void)bindTransitionAnimatorFromCell:(id)arg1 fromFeedId:(id)arg2 fromVC:(id)arg3 toVC:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shareCellIdentifier; // @synthesize shareCellIdentifier=_shareCellIdentifier;
@property(nonatomic) __weak id <WCFinderShareAbstractCell> shareCell; // @synthesize shareCell=_shareCell;
@property(nonatomic) _Bool willPresent; // @synthesize willPresent=_willPresent;
@property(nonatomic) struct CGRect toRect; // @synthesize toRect=_toRect;
- (void)updateToRect:(struct CGRect)arg1;
- (struct CGRect)displayImageFrameForDismiss:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithShareCell:(id)arg1 toRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

