//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface WCPlayerProgressTimeLabel
{
    MMUILabel *_currentTimeLabel;
    MMUILabel *_splitLabel;
    MMUILabel *_totalTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *splitLabel; // @synthesize splitLabel=_splitLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)formatStrOfTime:(double)arg1;
- (void)updateCurrentTime:(double)arg1;
- (void)updateTotalTime:(double)arg1;
- (id)genTimeLabelFontOfSize:(double)arg1;
- (void)initSubviews;
- (id)init;

@end

