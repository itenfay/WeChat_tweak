//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MultiTalkHDHeadView, MultitalkMiniInAppTalkingInfo, MultitalkMinimizeView, UIImageView, UILabel;

@interface MultitalkMiniInAppView : UIView
{
    _Bool _isMyCameraOn;
    _Bool _isMyMicrophoneOn;
    MultitalkMinimizeView *_baseView;
    UIView *_extendView;
    UIImageView *_captureImageView;
    UIImageView *_microphoneImageView;
    MultiTalkHDHeadView *_talkingHeadView;
    UIView *_talkingRenderContainerView;
    UIView *_talkingRenderView;
    CDUnknownBlockType _autoResetTalkingInfoBlock;
    UIView *_talkingNameBackground;
    CAGradientLayer *_talkingNameBackgroundGradientLayer;
    UILabel *_talkingNameLabel;
    MultitalkMiniInAppTalkingInfo *_talkingInfo;
}

+ (id)miniInAppView;
+ (struct CGSize)preferredRenderViewSize;
- (void).cxx_destruct;
@property(retain, nonatomic) MultitalkMiniInAppTalkingInfo *talkingInfo; // @synthesize talkingInfo=_talkingInfo;
@property(retain, nonatomic) UILabel *talkingNameLabel; // @synthesize talkingNameLabel=_talkingNameLabel;
@property(retain, nonatomic) CAGradientLayer *talkingNameBackgroundGradientLayer; // @synthesize talkingNameBackgroundGradientLayer=_talkingNameBackgroundGradientLayer;
@property(retain, nonatomic) UIView *talkingNameBackground; // @synthesize talkingNameBackground=_talkingNameBackground;
@property(copy, nonatomic) CDUnknownBlockType autoResetTalkingInfoBlock; // @synthesize autoResetTalkingInfoBlock=_autoResetTalkingInfoBlock;
@property(retain, nonatomic) UIView *talkingRenderView; // @synthesize talkingRenderView=_talkingRenderView;
@property(retain, nonatomic) UIView *talkingRenderContainerView; // @synthesize talkingRenderContainerView=_talkingRenderContainerView;
@property(retain, nonatomic) MultiTalkHDHeadView *talkingHeadView; // @synthesize talkingHeadView=_talkingHeadView;
@property(retain, nonatomic) UIImageView *microphoneImageView; // @synthesize microphoneImageView=_microphoneImageView;
@property(retain, nonatomic) UIImageView *captureImageView; // @synthesize captureImageView=_captureImageView;
@property(retain, nonatomic) UIView *extendView; // @synthesize extendView=_extendView;
@property(nonatomic) _Bool isMyMicrophoneOn; // @synthesize isMyMicrophoneOn=_isMyMicrophoneOn;
@property(nonatomic) _Bool isMyCameraOn; // @synthesize isMyCameraOn=_isMyCameraOn;
@property(retain, nonatomic) MultitalkMinimizeView *baseView; // @synthesize baseView=_baseView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupTalkingInfo:(id)arg1;
- (void)cancelAutoResetTalkingInfoBlock;

@end

