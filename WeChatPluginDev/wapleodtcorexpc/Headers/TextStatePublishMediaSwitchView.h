//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, TextStateMediaContainerView, TextStatePublishMediaInfo, TextStatePublishMediaView, TextStatePublishSourceInfo, UIImageView, UILongPressGestureRecognizer;

@interface TextStatePublishMediaSwitchView : UIView
{
    _Bool _isInInputState;
    _Bool _isPlayLiveByLongPress;
    unsigned int _switchValue;
    TextStateMediaContainerView *_containerView;
    CDUnknownBlockType _tapLiveButtonHandler;
    CDUnknownBlockType _longPreesPlayLiveHandler;
    NSString *_defaultImageId;
    TextStatePublishMediaInfo *_mediaInfo;
    TextStatePublishSourceInfo *_sourceInfo;
    TextStatePublishMediaView *_innerMediaView;
    UIImageView *_innerCoverView;
    UIImageView *_innerBackgroundView;
    MMUIButton *_blurButton;
    MMUIButton *_liveButton;
    CDUnknownBlockType _tapBlurButtonHandler;
    CDUnknownBlockType _mediaSwitchHandler;
    UILongPressGestureRecognizer *_longPressRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayLiveByLongPress; // @synthesize isPlayLiveByLongPress=_isPlayLiveByLongPress;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(copy, nonatomic) CDUnknownBlockType mediaSwitchHandler; // @synthesize mediaSwitchHandler=_mediaSwitchHandler;
@property(copy, nonatomic) CDUnknownBlockType tapBlurButtonHandler; // @synthesize tapBlurButtonHandler=_tapBlurButtonHandler;
@property(retain, nonatomic) MMUIButton *liveButton; // @synthesize liveButton=_liveButton;
@property(retain, nonatomic) MMUIButton *blurButton; // @synthesize blurButton=_blurButton;
@property(retain, nonatomic) UIImageView *innerBackgroundView; // @synthesize innerBackgroundView=_innerBackgroundView;
@property(retain, nonatomic) UIImageView *innerCoverView; // @synthesize innerCoverView=_innerCoverView;
@property(retain, nonatomic) TextStatePublishMediaView *innerMediaView; // @synthesize innerMediaView=_innerMediaView;
@property(retain, nonatomic) TextStatePublishSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) TextStatePublishMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) NSString *defaultImageId; // @synthesize defaultImageId=_defaultImageId;
@property(copy, nonatomic) CDUnknownBlockType longPreesPlayLiveHandler; // @synthesize longPreesPlayLiveHandler=_longPreesPlayLiveHandler;
@property(copy, nonatomic) CDUnknownBlockType tapLiveButtonHandler; // @synthesize tapLiveButtonHandler=_tapLiveButtonHandler;
@property(nonatomic) _Bool isInInputState; // @synthesize isInInputState=_isInInputState;
@property(retain, nonatomic) TextStateMediaContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned int switchValue; // @synthesize switchValue=_switchValue;
- (void)requestUpdateDataSource;
- (struct CGSize)mediaScreenSize;
- (void)onMediaSwitchWithView:(id)arg1;
- (void)onMediaSwitchWithImage:(id)arg1;
- (_Bool)isUseLivePhoto;
- (_Bool)isBlur;
- (void)onTapLiveButton;
- (void)onTapBlurButton;
- (void)restoreContainerToInner;
- (void)switchToSourceInfo:(id)arg1;
- (void)switchToMediaInfo:(id)arg1;
- (void)switchToDefaultImage:(id)arg1;
- (void)clearSwitch;
- (double)contentBottomY;
- (void)layoutSubviews;
- (void)handleLongPress:(id)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

