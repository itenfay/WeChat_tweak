//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, NSMutableArray, TextStateHistoryCalendarItem;

@interface TextStateHistoryCalendarDayCell : UICollectionViewCell
{
    TextStateHistoryCalendarItem *_item;
    MMUILabel *_dayLabel;
    NSMutableArray *_iconViewList;
    unsigned long long _count;
}

+ (double)iconMarginForCount:(unsigned long long)arg1;
+ (double)iconLengthForCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *iconViewList; // @synthesize iconViewList=_iconViewList;
@property(retain, nonatomic) MMUILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) TextStateHistoryCalendarItem *item; // @synthesize item=_item;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

