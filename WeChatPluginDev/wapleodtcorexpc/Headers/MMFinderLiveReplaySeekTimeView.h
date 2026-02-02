//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface MMFinderLiveReplaySeekTimeView : UIView
{
    _Bool _showHour;
    unsigned int _currentTime;
    unsigned int _totalTime;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    MMUILabel *_slashLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showHour; // @synthesize showHour=_showHour;
@property(retain, nonatomic) MMUILabel *slashLabel; // @synthesize slashLabel=_slashLabel;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(nonatomic) unsigned int totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned int currentTime; // @synthesize currentTime=_currentTime;
- (id)formattedStringOfTimeInSecond:(unsigned int)arg1;
- (void)updateTotalTimeLabel;
- (void)updateCurrentTimeLabel;
- (id)createLabel;
- (void)initializeComponents;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

