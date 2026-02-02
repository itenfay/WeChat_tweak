//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, MMLiveTaskId, MMTimer, MMUIButton, NSDictionary, NSMutableDictionary, NSString, UIButton, UILabel, UIView;
@protocol MMLiveStarterViewControllerDelegate;

@interface MMGroupLiveStarterViewController
{
    _Bool _isEditing;
    _Bool _isEdited;
    _Bool _isFrontCamera;
    UIView *_cancelEditMask;
    UILabel *_titleLabel;
    MMGrowTextView *_textView;
    UIView *_bottomLine;
    UIButton *_startLiveButton;
    UIButton *_cancelLiveButton;
    UILabel *_wordCountTips;
    MMUIButton *_closeButton;
    MMUIButton *_switchCameraButton;
    MMTimer *_coundownTimer;
    UILabel *_coundownTips;
    long long _timerCountdown;
    double _keyboardHeight;
    NSMutableDictionary *_extraInfo;
    NSString *_roomId;
    UILabel *_startTipLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *startTipLabel; // @synthesize startTipLabel=_startTipLabel;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) long long timerCountdown; // @synthesize timerCountdown=_timerCountdown;
@property(retain, nonatomic) UILabel *coundownTips; // @synthesize coundownTips=_coundownTips;
@property(retain, nonatomic) MMTimer *coundownTimer; // @synthesize coundownTimer=_coundownTimer;
@property(retain, nonatomic) MMUIButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *wordCountTips; // @synthesize wordCountTips=_wordCountTips;
@property(retain, nonatomic) UIButton *cancelLiveButton; // @synthesize cancelLiveButton=_cancelLiveButton;
@property(retain, nonatomic) UIButton *startLiveButton; // @synthesize startLiveButton=_startLiveButton;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *cancelEditMask; // @synthesize cancelEditMask=_cancelEditMask;
- (void)updateWriteStatusWith:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (id)updateText:(id)arg1 withMaxLimit:(long long)arg2;
- (id)getDefaultText;
@property(readonly, nonatomic) NSDictionary *startExtraInfo;
- (void)updateCountTimer;
- (void)stopCountdownTimer;
- (void)startCountdownTimer;
- (void)hideCountdownView;
- (void)showCountdownView;
- (void)updateWordCountTipsLabel:(int)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (unsigned long long)systemCapabilityAuthScene;
- (void)realStartLive;
- (void)cancelEdit;
- (void)onCancelEditMaskTouched:(id)arg1;
- (void)onCancelLiveActionClicked:(id)arg1;
- (void)onClickStartLiveAction:(id)arg1;
- (void)onSwitchCameraButtonClick;
- (void)onCloseButtonClicked;
- (void)stopLiveTimer;
- (void)dealloc;
- (void)layoutUI;
- (void)layoutStartTipLabel;
- (double)getGrowTextViewLeftRightMargin;
- (double)getStartLiveButtonBottomMargin;
- (void)addSubWidget:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initNotifications;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MMLiveStarterViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly) Class superclass;

@end

