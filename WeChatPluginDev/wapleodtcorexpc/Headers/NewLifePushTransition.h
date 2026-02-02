//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface NewLifePushTransition : NSObject
{
    double _duration;
    UIImage *_fromImage;
    UIColor *_backgroundColor;
    double _startTime;
    CDUnknownBlockType _startCallback;
    CDUnknownBlockType _endCallback;
    struct CGRect _fromFrame;
    struct CGRect _fromContentFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType endCallback; // @synthesize endCallback=_endCallback;
@property(copy, nonatomic) CDUnknownBlockType startCallback; // @synthesize startCallback=_startCallback;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *fromImage; // @synthesize fromImage=_fromImage;
@property(nonatomic) struct CGRect fromContentFrame; // @synthesize fromContentFrame=_fromContentFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (double)transitionDuration:(id)arg1;
- (void)startAnimation:(id)arg1 backgroundView:(id)arg2 toViewMask:(id)arg3 fromViewMask:(id)arg4 fromViewContainer:(id)arg5 transitionContext:(id)arg6 fromImageView:(id)arg7 fromViewMaskTargetFrame:(struct CGRect)arg8 toViewMaskTargetFrame:(struct CGRect)arg9;
- (void)animateTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

