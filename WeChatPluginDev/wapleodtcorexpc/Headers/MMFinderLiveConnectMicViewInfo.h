//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicAudioOnlyAnchorView, MMFinderLiveConnectMicUser, MMFinderLiveGestureAnimationContainerView, MMLiveRemoteTrtcCustomRenderWrapper, NSString, UIView;

@interface MMFinderLiveConnectMicViewInfo : NSObject
{
    _Bool _isStartCustomRender;
    _Bool _useVideo;
    _Bool _isViewHidden;
    MMFinderLiveConnectMicUser *_userInfo;
    UIView *_userView;
    MMLiveRemoteTrtcCustomRenderWrapper *_customRenderWrapper;
    MMFinderLiveConnectMicAudioOnlyAnchorView *_audioModeBackgroundView;
    MMFinderLiveGestureAnimationContainerView *_gestureAnimationContainer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isViewHidden; // @synthesize isViewHidden=_isViewHidden;
@property(nonatomic) _Bool useVideo; // @synthesize useVideo=_useVideo;
@property(retain, nonatomic) MMFinderLiveGestureAnimationContainerView *gestureAnimationContainer; // @synthesize gestureAnimationContainer=_gestureAnimationContainer;
@property(retain, nonatomic) MMFinderLiveConnectMicAudioOnlyAnchorView *audioModeBackgroundView; // @synthesize audioModeBackgroundView=_audioModeBackgroundView;
@property(nonatomic) _Bool isStartCustomRender; // @synthesize isStartCustomRender=_isStartCustomRender;
@property(nonatomic) __weak MMLiveRemoteTrtcCustomRenderWrapper *customRenderWrapper; // @synthesize customRenderWrapper=_customRenderWrapper;
@property(retain, nonatomic) UIView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;
- (void)refreshViewsAppearence;
- (void)updateViewsHidden:(_Bool)arg1;
- (void)removeViewsFromSuperView;
- (void)updateViewsRect:(struct CGRect)arg1;
- (void)updateUIForCustomRenderChanged;
- (void)stopCustomRender;
- (void)startCustomRender:(id)arg1;
- (void)configureCoverViewWithFinderLiveTaskId:(id)arg1 coverImageViewName:(id)arg2 backgroundVideoViewName:(id)arg3;
- (void)configureCoverViewWithFinderLiveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

