//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTimecodeView, MMUIView;

@interface MJPublisherPlaybackProgressSlider
{
    MJTimecodeView *_timeCodeView;
    MMUIView *_expandedCircleView;
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *expandedCircleView; // @synthesize expandedCircleView=_expandedCircleView;
@property(retain, nonatomic) MJTimecodeView *timeCodeView; // @synthesize timeCodeView=_timeCodeView;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (void)hideTimeCodeAnimated:(_Bool)arg1;
- (void)hideExpandedCircleAnimated:(_Bool)arg1;
- (void)showTimeCodeAnimated:(_Bool)arg1;
- (void)showExpandedCircleAnimated:(_Bool)arg1;
- (void)updateThumbPosition:(_Bool)arg1;
- (void)updateTimeCodeView;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

