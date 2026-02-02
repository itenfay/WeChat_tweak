//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMRingView, NSObject, UILabel;
@protocol MMTapRecordButtonEventReciever, OS_dispatch_source;

@interface MMTapRecordButton : UIView
{
    _Bool _hasIgnoreUntilMaxSeconds;
    id <MMTapRecordButtonEventReciever> _reciever;
    double _maxSeconds;
    unsigned long long _state;
    UIView *_redPart;
    UIView *_blurPart;
    MMRingView *_normalRing;
    MMRingView *_processRing;
    NSObject<OS_dispatch_source> *_updateTimer;
    double _startTime;
    UILabel *_tips;
    UILabel *_timeLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasIgnoreUntilMaxSeconds; // @synthesize hasIgnoreUntilMaxSeconds=_hasIgnoreUntilMaxSeconds;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) MMRingView *processRing; // @synthesize processRing=_processRing;
@property(retain, nonatomic) MMRingView *normalRing; // @synthesize normalRing=_normalRing;
@property(retain, nonatomic) UIView *blurPart; // @synthesize blurPart=_blurPart;
@property(retain, nonatomic) UIView *redPart; // @synthesize redPart=_redPart;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double maxSeconds; // @synthesize maxSeconds=_maxSeconds;
@property(nonatomic) __weak id <MMTapRecordButtonEventReciever> reciever; // @synthesize reciever=_reciever;
- (void)dealloc;
- (void)stopUpdateProcess;
- (void)startUpdateProcess;
- (void)updateProcess;
- (void)reset;
- (void)onTap:(id)arg1;
- (void)setSubviewsRecord;
- (void)setSubviewsNormal;
- (void)layoutTips;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

