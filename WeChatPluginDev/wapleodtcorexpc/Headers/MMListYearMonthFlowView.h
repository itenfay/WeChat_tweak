//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, UITapGestureRecognizer;
@protocol MMListYearMonthFlowViewDelegate;

@interface MMListYearMonthFlowView
{
    id <MMListYearMonthFlowViewDelegate> _delegate;
    MMUILabel *_yearMonthLabel;
    MMUIImageView *_selectDownIcon;
    UITapGestureRecognizer *_selectTapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *selectTapGesture; // @synthesize selectTapGesture=_selectTapGesture;
@property(retain, nonatomic) MMUIImageView *selectDownIcon; // @synthesize selectDownIcon=_selectDownIcon;
@property(retain, nonatomic) MMUILabel *yearMonthLabel; // @synthesize yearMonthLabel=_yearMonthLabel;
@property(nonatomic) __weak id <MMListYearMonthFlowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectButtonDidClicked;
- (void)updateYearMonth:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

