//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIView, WCFinderNavTabTitleViewLayout;
@protocol WCFinderNavTabTitleViewDelegate;

@interface WCFinderNavTabTitleView
{
    _Bool _autoAdjustSize;
    UIView *_container;
    NSMutableArray *_titleViews;
    UIView *_cursorView;
    id <WCFinderNavTabTitleViewDelegate> _delegate;
    double _cursorProgress;
    WCFinderNavTabTitleViewLayout *_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNavTabTitleViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) double cursorProgress; // @synthesize cursorProgress=_cursorProgress;
@property(nonatomic) __weak id <WCFinderNavTabTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool autoAdjustSize; // @synthesize autoAdjustSize=_autoAdjustSize;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) NSMutableArray *titleViews; // @synthesize titleViews=_titleViews;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickButton:(id)arg1;
- (void)updateSelectedIdx:(long long)arg1;
- (struct CGRect)cursorFrameForView:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)sizeToFitButtons;
- (void)layoutContainer;
- (void)didMoveToWindow;
- (void)updateCursor;
- (void)bindTabDefine:(id)arg1 toBtn:(id)arg2;
- (void)updateLayoutFrom:(id)arg1 to:(id)arg2;
- (void)commonInitWithAutoAdjustSize:(_Bool)arg1 needCursor:(_Bool)arg2;
- (id)initWithAutoAdjustSize:(_Bool)arg1 needCursor:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

