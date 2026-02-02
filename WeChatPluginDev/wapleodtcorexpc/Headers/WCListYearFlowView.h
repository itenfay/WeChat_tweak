//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, UITapGestureRecognizer;
@protocol WCListYearFloatViewDelegate;

@interface WCListYearFlowView
{
    _Bool _canClick;
    id <WCListYearFloatViewDelegate> _delegate;
    MMUILabel *_yearLabel;
    MMUIImageView *_selectDownIcon;
    UITapGestureRecognizer *_selectTapGesture;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *selectTapGesture; // @synthesize selectTapGesture=_selectTapGesture;
@property(retain, nonatomic) MMUIImageView *selectDownIcon; // @synthesize selectDownIcon=_selectDownIcon;
@property(retain, nonatomic) MMUILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
@property(nonatomic) __weak id <WCListYearFloatViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canClick; // @synthesize canClick=_canClick;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectButtonDidClicked;
- (void)updateYear:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

