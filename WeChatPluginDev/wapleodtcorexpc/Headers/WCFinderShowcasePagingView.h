//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMapTable, NSMutableArray, NSMutableSet, NSString, UIColor, UIScrollView;
@protocol WCFinderShowcasePagingViewDatasource, WCFinderShowcasePagingViewDelegate;

@interface WCFinderShowcasePagingView : UIView
{
    _Bool _showPlaceholder;
    UIScrollView *_scrollView;
    double _padding;
    long long _pagingNumber;
    Class _itemClass;
    double _cardCorner;
    UIColor *_cardColor;
    UIColor *_highlightColor;
    id <WCFinderShowcasePagingViewDatasource> _datasource;
    id <WCFinderShowcasePagingViewDelegate> _delegate;
    long long _count;
    NSMutableArray *_cacheViews;
    NSMapTable *_cell2IndexMap;
    NSMapTable *_index2CellMap;
    long long _selectedIndex;
    NSMutableSet *_exposedItems;
    struct CGSize _cacheSize;
    struct CGSize _cacheItemSize;
    struct _NSRange _oldCheckRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposedItems; // @synthesize exposedItems=_exposedItems;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMapTable *index2CellMap; // @synthesize index2CellMap=_index2CellMap;
@property(retain, nonatomic) NSMapTable *cell2IndexMap; // @synthesize cell2IndexMap=_cell2IndexMap;
@property(retain, nonatomic) NSMutableArray *cacheViews; // @synthesize cacheViews=_cacheViews;
@property(nonatomic) struct _NSRange oldCheckRange; // @synthesize oldCheckRange=_oldCheckRange;
@property(nonatomic) struct CGSize cacheItemSize; // @synthesize cacheItemSize=_cacheItemSize;
@property(nonatomic) struct CGSize cacheSize; // @synthesize cacheSize=_cacheSize;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) __weak id <WCFinderShowcasePagingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderShowcasePagingViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) _Bool showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *cardColor; // @synthesize cardColor=_cardColor;
@property(nonatomic) double cardCorner; // @synthesize cardCorner=_cardCorner;
@property(retain, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) long long pagingNumber; // @synthesize pagingNumber=_pagingNumber;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_onTapCell:(id)arg1;
- (void)_endHightlightCell:(id)arg1;
- (void)_onHightlightCell:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (double)itemWidth;
- (id)fetchView:(struct CGRect)arg1;
- (void)applyItemsLayout;
- (void)didMoveToSuperview;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

