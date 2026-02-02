//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIColor, UIFont, UIScrollView, UIView;
@protocol CameraScanTabViewDelegate;

@interface CameraScanTabView
{
    _Bool _isForceUpdatingContentOffset;
    unsigned long long _currTabIndex;
    unsigned long long _lastScrollSwitchBeginTimeStamp;
    id <CameraScanTabViewDelegate> _tabViewDelegate;
    unsigned long long _initTabIndex;
    UIFont *_titleFont;
    UIColor *_titleNormalColor;
    UIColor *_titleHighlightColor;
    double _scrollViewHeight;
    NSMutableArray *_tabButtonList;
    UIScrollView *_scrollView;
    UIView *_indectorView;
    unsigned long long _targetTabIndex;
    unsigned long long _beginDragTabIndex;
    long long _fromTabAction;
    NSMutableArray *_voiceOverElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
@property(nonatomic) _Bool isForceUpdatingContentOffset; // @synthesize isForceUpdatingContentOffset=_isForceUpdatingContentOffset;
@property(nonatomic) long long fromTabAction; // @synthesize fromTabAction=_fromTabAction;
@property(nonatomic) unsigned long long beginDragTabIndex; // @synthesize beginDragTabIndex=_beginDragTabIndex;
@property(nonatomic) unsigned long long targetTabIndex; // @synthesize targetTabIndex=_targetTabIndex;
@property(retain, nonatomic) UIView *indectorView; // @synthesize indectorView=_indectorView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *tabButtonList; // @synthesize tabButtonList=_tabButtonList;
@property(nonatomic) double scrollViewHeight; // @synthesize scrollViewHeight=_scrollViewHeight;
@property(retain, nonatomic) UIColor *titleHighlightColor; // @synthesize titleHighlightColor=_titleHighlightColor;
@property(retain, nonatomic) UIColor *titleNormalColor; // @synthesize titleNormalColor=_titleNormalColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) unsigned long long initTabIndex; // @synthesize initTabIndex=_initTabIndex;
@property(nonatomic) __weak id <CameraScanTabViewDelegate> tabViewDelegate; // @synthesize tabViewDelegate=_tabViewDelegate;
@property(readonly, nonatomic) unsigned long long lastScrollSwitchBeginTimeStamp; // @synthesize lastScrollSwitchBeginTimeStamp=_lastScrollSwitchBeginTimeStamp;
@property(nonatomic) unsigned long long currTabIndex; // @synthesize currTabIndex=_currTabIndex;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)initVoiceOverElements;
- (void)onTabButtonClick:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)calContentOffsetForTabBtnIndex:(unsigned long long)arg1;
- (long long)calDotPointTabIndexWithScrollView:(id)arg1;
- (void)selectTabIndex:(long long)arg1 hasShock:(_Bool)arg2 tabAction:(long long)arg3;
- (void)takeShock;
- (_Bool)isSwitchingToTargetIndex;
- (void)scrollDidSwitchToTargetIndex;
- (void)setScrollTargetIndex:(unsigned long long)arg1 tabAction:(long long)arg2;
- (_Bool)isTabIndexValid:(long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) unsigned long long tabButtonsCount;
- (void)onDidLayout:(struct CGRect)arg1;
- (void)scrollSwitchToTabIndex:(long long)arg1 hasShock:(_Bool)arg2 tabAction:(long long)arg3;
- (void)showTabButtons;
- (void)appendWithTitle:(id)arg1 tag:(unsigned long long)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

