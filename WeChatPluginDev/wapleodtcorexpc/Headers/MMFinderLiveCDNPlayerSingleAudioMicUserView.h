//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUser, WCFinderHeadImageView;

@interface MMFinderLiveCDNPlayerSingleAudioMicUserView : UIView
{
    _Bool _hideAudioMicUserAvatar;
    MMFinderLiveConnectMicUser *_userInfo;
    WCFinderHeadImageView *_headImageView;
    WCFinderHeadImageView *_backgroundHeadImageView;
    UIView *_audioUserBlurView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideAudioMicUserAvatar; // @synthesize hideAudioMicUserAvatar=_hideAudioMicUserAvatar;
@property(retain, nonatomic) UIView *audioUserBlurView; // @synthesize audioUserBlurView=_audioUserBlurView;
@property(retain, nonatomic) WCFinderHeadImageView *backgroundHeadImageView; // @synthesize backgroundHeadImageView=_backgroundHeadImageView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;
- (void)updateUserAvatarAlpha:(double)arg1;
- (void)clearAndHide;
- (void)showWithConnectMicUserInfo:(id)arg1;
- (void)layoutUI;
- (void)configUI;
- (void)layoutSubviews;
- (void)updateHeadImageView;

@end

