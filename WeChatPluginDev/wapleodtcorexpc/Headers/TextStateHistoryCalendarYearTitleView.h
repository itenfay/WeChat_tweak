//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel;

@interface TextStateHistoryCalendarYearTitleView : UICollectionReusableView
{
    unsigned long long _year;
    MMUILabel *_yearLabel;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
@property(nonatomic) unsigned long long year; // @synthesize year=_year;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

