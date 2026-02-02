//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface MMMusicFlexEditBarTimeCell : UICollectionViewCell
{
    UIView *_dotView;
    UILabel *_startTimeLabel;
    UILabel *_endTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(retain, nonatomic) UILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
- (void)setStartTimeSec:(double)arg1 endTimeSec:(double)arg2;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

