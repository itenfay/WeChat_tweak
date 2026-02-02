//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface MMLiveMorphCoverPresentAnimator : NSObject
{
    UIView *_coverView;
    struct CGSize _coverSize;
    struct CGRect _sourceFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize coverSize; // @synthesize coverSize=_coverSize;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

