//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUIButton, RecommendedMusicInfo, UIButton, WCFinderEditImageMusicView;

@interface SightCameraTopToolView : UIView
{
    _Bool _isRecording;
    _Bool _canRelayoutSubviews;
    long long _flashMode;
    UIButton *_closeButton;
    MMUIButton *_cameraSwitchButton;
    long long _viewStyle;
    unsigned long long _toolItems;
    MMTimer *_throttle;
    WCFinderEditImageMusicView *_musicBGMView;
    RecommendedMusicInfo *_patMusicInfo;
    CDUnknownBlockType _switchCameraBlock;
    CDUnknownBlockType _closeButtonBlock;
}

+ (long long)torchModeWithToolFlashMode:(long long)arg1;
+ (long long)flashModeWithToolFlashMode:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeButtonBlock; // @synthesize closeButtonBlock=_closeButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType switchCameraBlock; // @synthesize switchCameraBlock=_switchCameraBlock;
@property(nonatomic) _Bool canRelayoutSubviews; // @synthesize canRelayoutSubviews=_canRelayoutSubviews;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) WCFinderEditImageMusicView *musicBGMView; // @synthesize musicBGMView=_musicBGMView;
@property(retain, nonatomic) MMTimer *throttle; // @synthesize throttle=_throttle;
@property(nonatomic) unsigned long long toolItems; // @synthesize toolItems=_toolItems;
@property(nonatomic) long long viewStyle; // @synthesize viewStyle=_viewStyle;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) MMUIButton *cameraSwitchButton; // @synthesize cameraSwitchButton=_cameraSwitchButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (void)realSwitchCamera;
- (void)switchCamera;
- (void)onCloseButtonClicked;
- (void)updateCameraAccessibility;
- (void)updateMusicBGMViewDuration:(id)arg1;
- (void)_relayoutViews;
- (void)forceRelayoutSubviews;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 toolItems:(unsigned long long)arg2 patMusicInfo:(id)arg3 canRelayoutSubviews:(_Bool)arg4 viewStyle:(long long)arg5;
- (void)rotateToOrientation:(long long)arg1;
@property(nonatomic) long long orientation;

@end

