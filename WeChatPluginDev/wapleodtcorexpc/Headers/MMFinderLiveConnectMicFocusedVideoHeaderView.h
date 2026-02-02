//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveClockCountdownView, MMFinderLiveConnectMicUser, MMLiveTaskId, MMUIButton, PAGView, UIImageView, UILabel;
@protocol MMFinderLiveConnectMicFocusedVideoHeaderViewDelegate;

@interface MMFinderLiveConnectMicFocusedVideoHeaderView : UIView
{
    _Bool _showSoundIndicator;
    id <MMFinderLiveConnectMicFocusedVideoHeaderViewDelegate> _delegate;
    MMLiveTaskId *_taskId;
    UIImageView *_connectMicIconView;
    UILabel *_nicknameLabel;
    UIView *_heatValueLabelContainerView;
    UILabel *_heatValueLabel;
    UIView *_audioModeIconContainerView;
    UIImageView *_audioModeIconView;
    MMUIButton *_micMutedButton;
    PAGView *_soundIndicatorView;
    MMFinderLiveClockCountdownView *_paidMicCountdownView;
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
}

+ (double)maxWidthWithSuperviewWidth:(double)arg1 leftMargin:(double)arg2 taskId:(id)arg3;
+ (double)minHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
@property(retain, nonatomic) MMFinderLiveClockCountdownView *paidMicCountdownView; // @synthesize paidMicCountdownView=_paidMicCountdownView;
@property(retain, nonatomic) PAGView *soundIndicatorView; // @synthesize soundIndicatorView=_soundIndicatorView;
@property(retain, nonatomic) MMUIButton *micMutedButton; // @synthesize micMutedButton=_micMutedButton;
@property(retain, nonatomic) UIImageView *audioModeIconView; // @synthesize audioModeIconView=_audioModeIconView;
@property(retain, nonatomic) UIView *audioModeIconContainerView; // @synthesize audioModeIconContainerView=_audioModeIconContainerView;
@property(retain, nonatomic) UILabel *heatValueLabel; // @synthesize heatValueLabel=_heatValueLabel;
@property(retain, nonatomic) UIView *heatValueLabelContainerView; // @synthesize heatValueLabelContainerView=_heatValueLabelContainerView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *connectMicIconView; // @synthesize connectMicIconView=_connectMicIconView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool showSoundIndicator; // @synthesize showSoundIndicator=_showSoundIndicator;
@property(nonatomic) __weak id <MMFinderLiveConnectMicFocusedVideoHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isFeedStreamTask;
- (id)liveTask;
- (void)updatePaidCountdownViewWithTime:(unsigned long long)arg1;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)arg1 sdkUserId:(id)arg2;
- (void)updateSoundIndicatorVisibility;
- (void)initMicMutedButton;
- (void)initAudioModeIcon;
- (void)onClickMicMutedButton;
- (void)onTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateNickname;
- (unsigned long long)currentHeatValue;
- (void)updateLiveHeatValue;
- (void)updateMicMutedButtonAppearance;
- (void)updateAudioModeIconAppearance;
- (void)updateForAnchorOfTaskId:(id)arg1;
- (id)getPaidMicCountdownView;
- (void)updateWithConnectMicUser:(id)arg1 taskId:(id)arg2;
@property(readonly, nonatomic) _Bool containsVisibleComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

