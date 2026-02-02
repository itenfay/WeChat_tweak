//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCFinderTimeLabel
{
    UILabel *_currentTimeLabel;
    UILabel *_splitLabel;
    UILabel *_totalTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *splitLabel; // @synthesize splitLabel=_splitLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
- (void)layoutView;
- (void)updateCurTime:(double)arg1;
- (void)updateTotalTime:(double)arg1;
- (id)genLabel;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

