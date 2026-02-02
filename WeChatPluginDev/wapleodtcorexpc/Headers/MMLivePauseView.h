//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLivePauseViewModel, NSString, RichTextView, UIButton, UILabel;
@protocol MMLivePauseViewDelegate;

@interface MMLivePauseView : UIView
{
    unsigned int _lastType;
    id <MMLivePauseViewDelegate> _delegate;
    UILabel *_messageLabel;
    UILabel *_accumulatedTimeLabel;
    UIButton *_resumeButton;
    RichTextView *_contentLabel;
    MMLivePauseViewModel *_viewModel;
    UIView *_contentView;
    UILabel *_subdescriptionLabel;
    long long _maxCountdown;
    long long _buttonMaxCountdown;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastType; // @synthesize lastType=_lastType;
@property(nonatomic) long long buttonMaxCountdown; // @synthesize buttonMaxCountdown=_buttonMaxCountdown;
@property(nonatomic) long long maxCountdown; // @synthesize maxCountdown=_maxCountdown;
@property(retain, nonatomic) UILabel *subdescriptionLabel; // @synthesize subdescriptionLabel=_subdescriptionLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMLivePauseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIButton *resumeButton; // @synthesize resumeButton=_resumeButton;
@property(retain, nonatomic) UILabel *accumulatedTimeLabel; // @synthesize accumulatedTimeLabel=_accumulatedTimeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak id <MMLivePauseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearPauseView;
- (void)onStopCountdown;
- (void)onUpdateEnableResumeButton:(_Bool)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateResumeButtonEnabled:(_Bool)arg1;
- (void)updateContentForceIfNeeded:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)clearCountdownDesc;
- (void)updateCountdownDesc:(long long)arg1;
- (id)realSubDescTitle:(long long)arg1;
- (id)realButtonTitle:(long long)arg1;
- (void)resumeButtonDidClick:(id)arg1;
- (void)clearAccumulatedTime;
- (void)updateAccumulatedTime:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

