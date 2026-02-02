//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAssetInfo, MMAssetPickerBrowserStateInfo, NSString, UIButton, UIImageView, UITapGestureRecognizer, WCFinderFeedMediaWrap, WCPlayerPlayArgs, WCPlayerView;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter;

@interface MVImagePreviewVideoView
{
    _Bool _requestUneditedAsset;
    _Bool _shouldPlayWithEditAttr;
    MMAssetInfo *_assetInfo;
    id <MMImagePickerControlCenter> _controlCenter;
    id <MMAssetPickerBrowserViewDelegate> _browserDelegate;
    MMAssetPickerBrowserStateInfo *_stateInfo;
    UIButton *_playButton;
    WCPlayerView *_videoPlayerView;
    WCPlayerPlayArgs *_playerArgs;
    WCFinderFeedMediaWrap *_mediaWrap;
    UIImageView *_coverImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct CGSize _playButtonSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(retain, nonatomic) WCPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=_stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate=_browserDelegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) _Bool shouldPlayWithEditAttr; // @synthesize shouldPlayWithEditAttr=_shouldPlayWithEditAttr;
@property(nonatomic) _Bool requestUneditedAsset; // @synthesize requestUneditedAsset=_requestUneditedAsset;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)layoutSubviews;
- (void)onVideoPlayFinish;
- (void)onTap:(id)arg1;
- (void)onPlayButtonClicked;
- (void)clear;
- (void)pause;
- (void)stop;
- (void)setupWithAsset:(id)arg1;
- (void)loadAsset;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

