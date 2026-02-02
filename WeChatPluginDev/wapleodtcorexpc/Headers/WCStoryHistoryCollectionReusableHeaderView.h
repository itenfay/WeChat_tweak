//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, NSArray, NSString;

@interface WCStoryHistoryCollectionReusableHeaderView : UICollectionReusableView
{
    MMUILabel *_timeLabel;
    MMUILabel *_yearLabel;
    NSString *_time;
    NSArray *_monthArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *monthArray; // @synthesize monthArray=_monthArray;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) MMUILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (_Bool)isCurrentMonth:(id)arg1;
- (void)setTime:(id)arg1 showYear:(_Bool)arg2;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

