//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMBadgeView, MMTimerLabel, MMUIButton, UIButton, UILabel;
@protocol MultitalkSecondOperateViewDelegate;

@interface MultitalkSecondOperateView : UIView
{
    id <MultitalkSecondOperateViewDelegate> _m_delegate;
    MMUIButton *_m_addMemberButton;
    UIButton *_m_shareScreenButton;
    MMBadgeView *_m_shareScreenBadgeView;
    MMUIButton *_m_minimizeButton;
    MMTimerLabel *_m_timerView;
    UILabel *_m_statusLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_statusLabel; // @synthesize m_statusLabel=_m_statusLabel;
@property(retain, nonatomic) MMTimerLabel *m_timerView; // @synthesize m_timerView=_m_timerView;
@property(retain, nonatomic) MMUIButton *m_minimizeButton; // @synthesize m_minimizeButton=_m_minimizeButton;
@property(retain, nonatomic) MMBadgeView *m_shareScreenBadgeView; // @synthesize m_shareScreenBadgeView=_m_shareScreenBadgeView;
@property(retain, nonatomic) UIButton *m_shareScreenButton; // @synthesize m_shareScreenButton=_m_shareScreenButton;
@property(retain, nonatomic) MMUIButton *m_addMemberButton; // @synthesize m_addMemberButton=_m_addMemberButton;
@property(nonatomic) __weak id <MultitalkSecondOperateViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateTimerForIlinkToMultiTalk:(double)arg1;
- (long long)currentDuration;
- (void)restartTimer;
- (void)updateStatusWording:(id)arg1;
- (void)onMinimizeButtonClick;
- (void)onShareScreenButtonClicked:(id)arg1;
- (void)onAddMemberButtonClick;
- (void)initStatusLabel;
- (void)initTimerView;
- (void)initShareScreenButton;
- (void)initAddMemberButton;
- (void)initMinimizeButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)getIsMinimizeButtonHidden;
- (void)updateMinimizeButtonHidden:(_Bool)arg1;
- (void)updateShareScreenBadgeHidden:(_Bool)arg1;
- (void)updateShareScreenButtonHidden:(_Bool)arg1;
- (void)updateAddMemberButtonHidden:(_Bool)arg1;
- (void)showOperateView;
- (void)hideOperateView;

@end

