//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIColor, UIFont, WCFinderExpandableTagSelectorExpandInfo;
@protocol WCFinderExpandableTagSelectorDataSource, WCFinderExpandableTagSelectorDelegate;

@interface WCFinderExpandableTagSelector : UIView
{
    struct DelegateFlag _delegateFlag;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    UIColor *_panelTextColor;
    UIColor *_panelSelectedTextColor;
    UIColor *_panelSelectedCardColor;
    double _itemPadding;
    NSDictionary *_defaultSelecteds;
    NSArray *_items;
    id <WCFinderExpandableTagSelectorDataSource> _dataSource;
    id <WCFinderExpandableTagSelectorDelegate> _delegate;
    NSMutableArray *_rootViews;
    UIView *_expandView;
    UIView *_itemContainerView;
    UICollectionView *_itemCollectionView;
    WCFinderExpandableTagSelectorExpandInfo *_expandInfo;
    NSMutableSet *_displayItems;
    NSMutableDictionary *_userManualSelecteds;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userManualSelecteds; // @synthesize userManualSelecteds=_userManualSelecteds;
@property(retain, nonatomic) NSMutableSet *displayItems; // @synthesize displayItems=_displayItems;
@property(nonatomic) struct DelegateFlag delegateFlag; // @synthesize delegateFlag=_delegateFlag;
@property(retain, nonatomic) WCFinderExpandableTagSelectorExpandInfo *expandInfo; // @synthesize expandInfo=_expandInfo;
@property(retain, nonatomic) UICollectionView *itemCollectionView; // @synthesize itemCollectionView=_itemCollectionView;
@property(retain, nonatomic) UIView *itemContainerView; // @synthesize itemContainerView=_itemContainerView;
@property(retain, nonatomic) UIView *expandView; // @synthesize expandView=_expandView;
@property(retain, nonatomic) NSMutableArray *rootViews; // @synthesize rootViews=_rootViews;
@property(nonatomic) __weak id <WCFinderExpandableTagSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderExpandableTagSelectorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSDictionary *defaultSelecteds; // @synthesize defaultSelecteds=_defaultSelecteds;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
@property(retain, nonatomic) UIColor *panelSelectedCardColor; // @synthesize panelSelectedCardColor=_panelSelectedCardColor;
@property(retain, nonatomic) UIColor *panelSelectedTextColor; // @synthesize panelSelectedTextColor=_panelSelectedTextColor;
@property(retain, nonatomic) UIColor *panelTextColor; // @synthesize panelTextColor=_panelTextColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct Group *)_fetchGroupInfo:(id)arg1 group:(long long)arg2;
- (id)_fetchIdentifier:(id)arg1 indexPath:(id)arg2;
- (long long)_fetchNumberOfGroupCount:(id)arg1 group:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) NSDictionary *selectedItems;
- (_Bool)isItemSelected:(id)arg1 identifier:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)calculateExpandHeight;
- (id)createCollectionView;
- (void)_onButtonClick:(id)arg1;
- (void)_hiddenSelectPanel;
- (void)hiddenPanel;
- (void)layoutSubviews;
- (void)_layoutButtons;
- (void)_updateItemViewStatus:(id)arg1 level:(long long)arg2;
- (void)setButton:(id)arg1 arrowOpen:(_Bool)arg2;
- (void)sizeToFitButton:(id)arg1 textIconPadding:(double)arg2;
- (id)itemViewForIdentifier:(id)arg1;
- (void)setupRootItems;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

