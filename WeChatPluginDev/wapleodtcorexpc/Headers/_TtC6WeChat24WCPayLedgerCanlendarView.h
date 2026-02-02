//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC6WeChat24WCPayLedgerCanlendarView : UIView
{
    MISSING_TYPE *days;
    MISSING_TYPE *weekdayOffset;
    MISSING_TYPE *todayOffset;
    MISSING_TYPE *taggedDays;
    MISSING_TYPE *selectionStart;
    MISSING_TYPE *selectionEnd;
    MISSING_TYPE *calendarDirty;
    MISSING_TYPE *imageView;
    MISSING_TYPE *hintLabels;
    MISSING_TYPE *selectionBaseLayer;
    MISSING_TYPE *kHintHeight;
    MISSING_TYPE *kTodayHintTag;
    MISSING_TYPE *ledgerDate;
    MISSING_TYPE *onRangeSelectionUpdated;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

