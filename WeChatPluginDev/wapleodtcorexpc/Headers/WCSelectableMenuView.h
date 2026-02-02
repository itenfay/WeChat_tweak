//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WCSelectableMenuView : UIView
{
    double _itemCornerRadius;
    NSArray *_items;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _selection;
    NSArray *_itemViews;
    double _itemViewHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double itemViewHeight; // @synthesize itemViewHeight=_itemViewHeight;
@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(copy, nonatomic) CDUnknownBlockType selection; // @synthesize selection=_selection;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double itemCornerRadius; // @synthesize itemCornerRadius=_itemCornerRadius;
- (void)onTapItemView:(id)arg1;
- (id)selectedItemView;
- (double)calculatedHeight;
- (void)batchUpdateItemWidth;
- (void)setFrame:(struct CGRect)arg1;
- (void)makeView;
- (id)initWithItems:(id)arg1 selectedIndex:(unsigned long long)arg2;

@end

