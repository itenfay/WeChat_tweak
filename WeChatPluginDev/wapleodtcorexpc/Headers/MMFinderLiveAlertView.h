//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface MMFinderLiveAlertView
{
    _Bool _viewDismissCountDownRegistered;
    _Bool _displayCountDownInTitleTag;
    double _time;
    CDUnknownBlockType _autoDismissBlock;
    MMTimer *_countDownTimer;
    NSString *_rawViewTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rawViewTitle; // @synthesize rawViewTitle=_rawViewTitle;
@property(retain, nonatomic) MMTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) _Bool displayCountDownInTitleTag; // @synthesize displayCountDownInTitleTag=_displayCountDownInTitleTag;
@property(copy, nonatomic) CDUnknownBlockType autoDismissBlock; // @synthesize autoDismissBlock=_autoDismissBlock;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) _Bool viewDismissCountDownRegistered; // @synthesize viewDismissCountDownRegistered=_viewDismissCountDownRegistered;
- (void)updateCountTimer;
- (void)autoDismiss;
- (void)cancelAutoDismiss;
- (void)showWithTimeDuration:(double)arg1 autoDismissBlock:(CDUnknownBlockType)arg2 displayCountDownInTitle:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

