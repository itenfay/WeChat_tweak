//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, TextStateHistoryCalendarSection;

@interface TextStateHistoryCalendarSectionHeaderView : UICollectionReusableView
{
    _Bool _singleRowLayout;
    TextStateHistoryCalendarSection *_section;
    MMUILabel *_timeLabel;
    MMUILabel *_topUseIconLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *topUseIconLabel; // @synthesize topUseIconLabel=_topUseIconLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool singleRowLayout; // @synthesize singleRowLayout=_singleRowLayout;
@property(retain, nonatomic) TextStateHistoryCalendarSection *section; // @synthesize section=_section;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

