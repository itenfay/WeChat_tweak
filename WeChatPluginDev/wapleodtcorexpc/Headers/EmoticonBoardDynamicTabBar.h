//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, EmoticonBoardDynamicTabBarLayout, EmoticonTabItem, MMTimer, NSArray, NSMutableArray, NSString, NSValue, UIButton, UICollectionView;
@protocol EmoticonBoardDynamicTabBarDelegate;

@interface EmoticonBoardDynamicTabBar : UIView
{
    CADisplayLink *_transitionDisplayLink;
    long long _progressCount;
    long long _currentCount;
    NSValue *_recentTouchPointValue;
    double _transitionPositionPercent;
    MMTimer *_countDownTimer;
    EmoticonTabItem *_settingItem;
    EmoticonTabItem *_plusItem;
    EmoticonTabItem *_searchItem;
    _Bool _darkMode;
    _Bool _hasFloatingFoldButton;
    _Bool _hasPlusButton;
    _Bool _hasSettingButton;
    _Bool _hasSearchButton;
    id <EmoticonBoardDynamicTabBarDelegate> _delegate;
    NSString *_selectedPid;
    NSArray *_emoticonTabItems;
    NSMutableArray *_innerTabItems;
    UIView *_contentView;
    UIButton *_foldButton;
    UIView *_buttonFloatingBackgroundView;
    UICollectionView *_collectionView;
    EmoticonBoardDynamicTabBarLayout *_collectionLayout;
    UIView *_lineView;
    struct UIEdgeInsets _inset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) EmoticonBoardDynamicTabBarLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *buttonFloatingBackgroundView; // @synthesize buttonFloatingBackgroundView=_buttonFloatingBackgroundView;
@property(retain, nonatomic) UIButton *foldButton; // @synthesize foldButton=_foldButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *innerTabItems; // @synthesize innerTabItems=_innerTabItems;
@property(retain, nonatomic) NSArray *emoticonTabItems; // @synthesize emoticonTabItems=_emoticonTabItems;
@property(nonatomic) _Bool hasSearchButton; // @synthesize hasSearchButton=_hasSearchButton;
@property(nonatomic) _Bool hasSettingButton; // @synthesize hasSettingButton=_hasSettingButton;
@property(nonatomic) _Bool hasPlusButton; // @synthesize hasPlusButton=_hasPlusButton;
@property(nonatomic) _Bool hasFloatingFoldButton; // @synthesize hasFloatingFoldButton=_hasFloatingFoldButton;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) NSString *selectedPid; // @synthesize selectedPid=_selectedPid;
@property(nonatomic) __weak id <EmoticonBoardDynamicTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGPoint)safeXContentOffsetFromContentOffset:(struct CGPoint)arg1 collectionView:(id)arg2;
- (void)onClickFloatingButton;
- (void)setSelectedPid:(id)arg1 shouldAdjustContentOffset:(_Bool)arg2;
- (void)reloadData;
@property(readonly, nonatomic) unsigned long long tabCount;
- (void)configButtons;
- (void)configHardcodeEmoticonItems;
- (void)configCollectionView;
- (void)configCollectionViewLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

