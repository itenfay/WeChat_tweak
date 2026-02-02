//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMBaseTimeLabel, NSDate;

@interface MMCountDownLabel : UIView
{
    MMBaseTimeLabel *_baseTimeLabel;
    NSDate *_targetTime;
    CDUnknownBlockType _arriveTargetTime;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType arriveTargetTime; // @synthesize arriveTargetTime=_arriveTargetTime;
@property(retain, nonatomic) NSDate *targetTime; // @synthesize targetTime=_targetTime;
@property(readonly, nonatomic) MMBaseTimeLabel *baseTimeLabel; // @synthesize baseTimeLabel=_baseTimeLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateTime;

@end

