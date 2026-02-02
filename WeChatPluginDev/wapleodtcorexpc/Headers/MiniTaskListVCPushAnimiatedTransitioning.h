//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData, NSString, UIImage, UIImageView, UILabel, UIView, UIViewController;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskListVCPushAnimiatedTransitioning : NSObject
{
    _Bool _isInteracting;
    _Bool _isPresent;
    unsigned int _animationType;
    UIViewController *animatedTransitionRespondViewController;
    UIView *_backgroundView;
    UIImageView *_fakeSnapshot;
    UIView *_fakeSnapshotMask;
    MinimizeTaskData *_launchTaskData;
    id <MiniTaskTransitionAnimationDelegate> _delegate;
    UIView *_fakeSnapshotShadowView;
    UIView *_educationLabel;
    UIView *_exitButton;
    UIImage *_guideContextfakeSnapshotImage;
    UILabel *_guideContextEducationLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *guideContextEducationLabel; // @synthesize guideContextEducationLabel=_guideContextEducationLabel;
@property(retain, nonatomic) UIImage *guideContextfakeSnapshotImage; // @synthesize guideContextfakeSnapshotImage=_guideContextfakeSnapshotImage;
@property(retain, nonatomic) UIView *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIView *educationLabel; // @synthesize educationLabel=_educationLabel;
@property(retain, nonatomic) UIView *fakeSnapshotShadowView; // @synthesize fakeSnapshotShadowView=_fakeSnapshotShadowView;
@property(nonatomic) unsigned int animationType; // @synthesize animationType=_animationType;
@property(nonatomic) __weak id <MiniTaskTransitionAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MinimizeTaskData *launchTaskData; // @synthesize launchTaskData=_launchTaskData;
@property(retain, nonatomic) UIView *fakeSnapshotMask; // @synthesize fakeSnapshotMask=_fakeSnapshotMask;
@property(retain, nonatomic) UIImageView *fakeSnapshot; // @synthesize fakeSnapshot=_fakeSnapshot;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

