//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface RecordingFeedbackView : UIView
{
    _Bool _bPreparing;
    _Bool _bTimeOutCounting;
    _Bool _bCanShowVoiceTrans;
    UIView *_bgBlurView;
    UIView *_recordTipContentView;
    UIImageView *_microphoneImageView;
    UIImageView *_cancelImageView;
    UIImageView *_recordSignalView;
    MMUIActivityIndicatorView *_indicatorView;
    UIImageView *_cancelTipImageView;
    UIImageView *_transTipImageView;
    UILabel *_operateTipsLabel;
    UIButton *_slideUpwardTipsBtn;
    UIImageView *_recordWarningView;
    UILabel *_warningMessageLabel;
    UILabel *_timeoutCountingLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *timeoutCountingLabel; // @synthesize timeoutCountingLabel=_timeoutCountingLabel;
@property(retain, nonatomic) UILabel *warningMessageLabel; // @synthesize warningMessageLabel=_warningMessageLabel;
@property(retain, nonatomic) UIImageView *recordWarningView; // @synthesize recordWarningView=_recordWarningView;
@property(retain, nonatomic) UIButton *slideUpwardTipsBtn; // @synthesize slideUpwardTipsBtn=_slideUpwardTipsBtn;
@property(retain, nonatomic) UILabel *operateTipsLabel; // @synthesize operateTipsLabel=_operateTipsLabel;
@property(retain, nonatomic) UIImageView *transTipImageView; // @synthesize transTipImageView=_transTipImageView;
@property(retain, nonatomic) UIImageView *cancelTipImageView; // @synthesize cancelTipImageView=_cancelTipImageView;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *recordSignalView; // @synthesize recordSignalView=_recordSignalView;
@property(retain, nonatomic) UIImageView *cancelImageView; // @synthesize cancelImageView=_cancelImageView;
@property(retain, nonatomic) UIImageView *microphoneImageView; // @synthesize microphoneImageView=_microphoneImageView;
@property(retain, nonatomic) UIView *recordTipContentView; // @synthesize recordTipContentView=_recordTipContentView;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(nonatomic) _Bool bCanShowVoiceTrans; // @synthesize bCanShowVoiceTrans=_bCanShowVoiceTrans;
@property(nonatomic) _Bool bTimeOutCounting; // @synthesize bTimeOutCounting=_bTimeOutCounting;
@property(nonatomic) _Bool bPreparing; // @synthesize bPreparing=_bPreparing;
- (void)setOperatTipLabelAlpha:(double)arg1;
- (void)setPeakPower:(float)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1 CanShowVoiceTrans:(_Bool)arg2;

@end

