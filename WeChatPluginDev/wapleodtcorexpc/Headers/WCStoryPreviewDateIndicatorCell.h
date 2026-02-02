//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UIView;

@interface WCStoryPreviewDateIndicatorCell : UICollectionViewCell
{
    UIView *_bgView;
    MMUILabel *_monthLabel;
    MMUILabel *_dayLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) MMUILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void)setDateString:(id)arg1;

@end

