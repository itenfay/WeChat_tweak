//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, UIScrollView, WCFinderTabFontFactory, WCFinderTabSwitchCustomViewInfo;
@protocol WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate;

@interface WCFinderTabSwitchView : UIView
{
    _Bool _allowEmptySelect;
    _Bool _enableSelectBack;
    _Bool _dataSourceImplUniqueFunc;
    _Bool _delegateImplExposeFunc;
    _Bool _ignoreScrollProcess;
    id <WCFinderTabSwitchViewDelegate> _delegate;
    id <WCFinderTabSwitchViewDataSource> _dataSource;
    unsigned long long _tabNumber;
    double _itemPadding;
    double _cursorPaddingTitle;
    double _switchAnimationDuration;
    double _titleFontSize;
    double _barExpandSize;
    NSMutableArray *_entryBtnArray;
    NSMutableSet *_exposeItems;
    UIView *_bar;
    UIScrollView *_scrollView;
    UIView *_lineView;
    NSMutableDictionary *_textColors;
    NSMutableDictionary *_customViewInfos;
    unsigned long long _processDequeueIdx;
    WCFinderTabSwitchCustomViewInfo *_dequeueUseInfo;
    NSMutableArray *_reuseTabButtons;
    NSMutableArray *_selectedStack;
    WCFinderTabFontFactory *_fontFactory;
    struct UIEdgeInsets _contentInsets;
}

+ (double)displayHeightWithInsets:(struct UIEdgeInsets)arg1 titleFontSize:(double)arg2 cursorPaddingTitle:(double)arg3;
+ (double)displayHeightWithInsets:(struct UIEdgeInsets)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTabFontFactory *fontFactory; // @synthesize fontFactory=_fontFactory;
@property(retain, nonatomic) NSMutableArray *selectedStack; // @synthesize selectedStack=_selectedStack;
@property(retain, nonatomic) NSMutableArray *reuseTabButtons; // @synthesize reuseTabButtons=_reuseTabButtons;
@property(retain, nonatomic) WCFinderTabSwitchCustomViewInfo *dequeueUseInfo; // @synthesize dequeueUseInfo=_dequeueUseInfo;
@property(nonatomic) unsigned long long processDequeueIdx; // @synthesize processDequeueIdx=_processDequeueIdx;
@property(retain, nonatomic) NSMutableDictionary *customViewInfos; // @synthesize customViewInfos=_customViewInfos;
@property(nonatomic) _Bool ignoreScrollProcess; // @synthesize ignoreScrollProcess=_ignoreScrollProcess;
@property(retain, nonatomic) NSMutableDictionary *textColors; // @synthesize textColors=_textColors;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *bar; // @synthesize bar=_bar;
@property(nonatomic) _Bool delegateImplExposeFunc; // @synthesize delegateImplExposeFunc=_delegateImplExposeFunc;
@property(nonatomic) _Bool dataSourceImplUniqueFunc; // @synthesize dataSourceImplUniqueFunc=_dataSourceImplUniqueFunc;
@property(retain, nonatomic) NSMutableSet *exposeItems; // @synthesize exposeItems=_exposeItems;
@property(retain, nonatomic) NSMutableArray *entryBtnArray; // @synthesize entryBtnArray=_entryBtnArray;
@property(nonatomic) _Bool enableSelectBack; // @synthesize enableSelectBack=_enableSelectBack;
@property(nonatomic) double barExpandSize; // @synthesize barExpandSize=_barExpandSize;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) double switchAnimationDuration; // @synthesize switchAnimationDuration=_switchAnimationDuration;
@property(nonatomic) _Bool allowEmptySelect; // @synthesize allowEmptySelect=_allowEmptySelect;
@property(nonatomic) double cursorPaddingTitle; // @synthesize cursorPaddingTitle=_cursorPaddingTitle;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long tabNumber; // @synthesize tabNumber=_tabNumber;
@property(nonatomic) __weak id <WCFinderTabSwitchViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderTabSwitchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dequeueCustomView:(id)arg1;
- (void)registerCustomView:(Class)arg1 forIdentifier:(id)arg2 configer:(CDUnknownBlockType)arg3 updater:(CDUnknownBlockType)arg4;
- (long long)backSelected;
- (void)updateSelectedIndex:(long long)arg1;
- (void)updateScrollProgress:(double)arg1;
- (void)showToastForItem:(long long)arg1 toastView:(id)arg2 bgColor:(id)arg3 duration:(double)arg4;
- (void)layoutSubviews;
- (void)cleanExposeItem;
- (void)checkEposeItems;
- (void)didMoveToWindow;
- (void)sizeToFit;
- (struct CGRect)displayBarFrameForBtn:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)updateSelectedWithButton:(id)arg1 animated:(_Bool)arg2 context:(void *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onClickTabButton:(id)arg1;
- (void)selectedIdx:(long long)arg1 animated:(_Bool)arg2 context:(void *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)selectedIdx:(long long)arg1;
- (id)tabViewAtIdx:(long long)arg1;
- (void)clearTabUnreadCount:(long long)arg1;
- (void)reloadTab:(long long)arg1;
- (void)updateButtons;
- (id)selectedItemBtn;
@property(readonly, nonatomic) unsigned long long selected;
- (void)updateAllItemTextColor;
- (void)updateCustomViewBtnColor:(id)arg1;
- (void)updateItemTextColor:(id)arg1;
- (id)findReuseButton:(long long)arg1 hash:(unsigned long long)arg2;
- (id)ensureDisplayTabItemAtIndex:(long long)arg1;
- (void)reloadData;
- (void)setScrollOffsetX:(double)arg1;
- (double)scrollOffsetX;
- (id)containerView;
@property(nonatomic) _Bool displayCursorBar;
@property(nonatomic) _Bool displayBottomLine;
- (void)setTextColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

