//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLivePerformanceViewModel, MMTimer, NSDateFormatter, NSString, UILabel, UITextView;

@interface MMLivePerformanceOverlay : UIView
{
    MMLivePerformanceViewModel *_viewModel;
    UILabel *_timerTextView;
    UITextView *_textView;
    MMTimer *_timer;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *timerTextView; // @synthesize timerTextView=_timerTextView;
@property(retain, nonatomic) MMLivePerformanceViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)timerTick;
- (void)livePerformanceViewModelDidUpdate:(id)arg1;
- (void)updatePerformanceContent;
- (void)layoutSubviews;
- (void)loadTextView;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

