//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, UILabel;
@protocol WCFinderCountdownViewDelegate;

@interface WCFinderCountdownView : UIView
{
    id <WCFinderCountdownViewDelegate> _delegate;
    MMTimer *_countdownTimer;
    UILabel *_countdownTips;
    long long _curCountdownNum;
    long long _countdownLimit;
}

- (void).cxx_destruct;
@property(nonatomic) long long countdownLimit; // @synthesize countdownLimit=_countdownLimit;
@property(nonatomic) long long curCountdownNum; // @synthesize curCountdownNum=_curCountdownNum;
@property(retain, nonatomic) UILabel *countdownTips; // @synthesize countdownTips=_countdownTips;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) __weak id <WCFinderCountdownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopCountdownAction;
- (void)updateCountTimer;
- (void)startCountdownAction;
- (void)updateCountdownLimit:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 countdownLimit:(long long)arg2;

@end

