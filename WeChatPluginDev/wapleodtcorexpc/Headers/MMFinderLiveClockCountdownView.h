//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMFinderLiveClockCountdownView : UIView
{
    UIImageView *_clockImageView;
    UILabel *_timeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *clockImageView; // @synthesize clockImageView=_clockImageView;
- (void)layoutSubviews;
- (void)updateWithRemainTimeInSeconds:(unsigned long long)arg1;
- (void)initViewsWithFixedHeight:(double)arg1 font:(id)arg2;
- (id)initWithFixedHeight:(double)arg1 font:(id)arg2;
- (id)init;

@end

