//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveGradientLayerView, MMWebImageView, UIImageView, UILabel;

@interface MMFinderLiveConnectMicModePreviewItemView : UIView
{
    _Bool _videoAvailable;
    _Bool _isOtherAnchorAudioMode;
    unsigned long long _displayMode;
    UIImageView *_imageView;
    UIView *_audioBackgroundView;
    MMWebImageView *_avatarView;
    MMLiveGradientLayerView *_bottomGradientView;
    UILabel *_displayNameLabel;
    unsigned long long _userRole;
}

- (void).cxx_destruct;
@property _Bool isOtherAnchorAudioMode; // @synthesize isOtherAnchorAudioMode=_isOtherAnchorAudioMode;
@property(nonatomic) _Bool videoAvailable; // @synthesize videoAvailable=_videoAvailable;
@property(nonatomic) unsigned long long userRole; // @synthesize userRole=_userRole;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMLiveGradientLayerView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) MMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *audioBackgroundView; // @synthesize audioBackgroundView=_audioBackgroundView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (void)layoutForAudioAudience;
- (void)layoutForVideoAudienceOrOtherAnchor;
- (void)updateViewsVisibilityForAudioAudience;
- (void)updateViewsVisibilityForVideoAudience;
- (void)updateViewsVisibilityForOtherAnchor;
- (void)updateViewsVisibilityForAnchor;
- (void)updateViewsVisibility;
- (void)layoutSubviews;
- (void)renderImageBuffer:(struct __CVBuffer *)arg1;
- (void)updateAudioBackgroundViewWithAnchorBackgroundImage:(id)arg1 orBackgroundImageUri:(id)arg2;
- (void)updateWithAnchorBackgroundImage:(id)arg1 orBackgroundImageUri:(id)arg2 avatarUri:(id)arg3;
- (void)updateWithMicUser:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

