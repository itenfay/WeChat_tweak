//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol MMLiveMorphDismissSource;

@interface MMLiveMorphDismissAnimator : NSObject
{
    UIView *_videoView;
    UIView *_maskView;
    UIView *_customSnapView;
    id <MMLiveMorphDismissSource> _sourceContext;
    struct CGSize _videoSize;
    struct CGRect _sourceFrame;
    struct CGRect _targetFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMLiveMorphDismissSource> sourceContext; // @synthesize sourceContext=_sourceContext;
@property(retain, nonatomic) UIView *customSnapView; // @synthesize customSnapView=_customSnapView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
- (void)animateNoopTransition:(id)arg1;
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

