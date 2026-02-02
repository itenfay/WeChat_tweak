//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString;

@interface WCStoryFloatTopBar
{
    NSString *_time;
    MMUILabel *_timeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (void)updateNewHistoryInfo:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

