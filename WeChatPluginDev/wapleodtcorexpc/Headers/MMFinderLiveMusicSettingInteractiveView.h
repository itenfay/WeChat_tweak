//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, PAGView;
@protocol MMFinderLiveMusicSettingInteractiveDelegate;

@interface MMFinderLiveMusicSettingInteractiveView : UIView
{
    id <MMFinderLiveMusicSettingInteractiveDelegate> _interactiveDelegate;
    PAGView *_guideAnimatedView;
    MMUILabel *_guideLabel;
    double _guideSizeScale;
    long long _currentInteractiveState;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentInteractiveState; // @synthesize currentInteractiveState=_currentInteractiveState;
@property(nonatomic) double guideSizeScale; // @synthesize guideSizeScale=_guideSizeScale;
@property(retain, nonatomic) MMUILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(retain, nonatomic) PAGView *guideAnimatedView; // @synthesize guideAnimatedView=_guideAnimatedView;
@property(nonatomic) __weak id <MMFinderLiveMusicSettingInteractiveDelegate> interactiveDelegate; // @synthesize interactiveDelegate=_interactiveDelegate;
- (struct CGSize)getGuideContentSize;
- (void)createGuideContentScale;
- (double)scaleValue:(double)arg1;
- (void)onTapGesture:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)createGuideLabel;
- (void)createGuideAnimatedView;
- (void)stopGuidePlay;
- (_Bool)isShowingGuide;
- (void)onLiveMusicSettingInteractiveTap;
- (void)showGuideAnimatedView;
- (void)layoutGuideLabel;
- (void)layoutGuideAnimatedView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addGestureRecognizers;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

