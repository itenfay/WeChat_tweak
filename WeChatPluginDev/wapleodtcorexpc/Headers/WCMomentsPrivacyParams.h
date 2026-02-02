//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexPath, NSIndexSet, UIView;

@interface WCMomentsPrivacyParams : NSObject
{
    _Bool _expandSelection;
    NSArray *_table;
    UIView *_footerView;
    CDUnknownBlockType _onReload;
    NSIndexPath *_selectedIndexPath;
    NSIndexPath *_originSelectedIndexPath;
    long long _itemCount;
    NSIndexSet *_lastItemIndexSet;
    NSDictionary *_indexToIndexPath;
    NSDictionary *_indexPathToIndex;
    struct UIEdgeInsets _footerViewInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *indexPathToIndex; // @synthesize indexPathToIndex=_indexPathToIndex;
@property(retain, nonatomic) NSDictionary *indexToIndexPath; // @synthesize indexToIndexPath=_indexToIndexPath;
@property(retain, nonatomic) NSIndexSet *lastItemIndexSet; // @synthesize lastItemIndexSet=_lastItemIndexSet;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) _Bool expandSelection; // @synthesize expandSelection=_expandSelection;
@property(retain, nonatomic) NSIndexPath *originSelectedIndexPath; // @synthesize originSelectedIndexPath=_originSelectedIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType onReload; // @synthesize onReload=_onReload;
@property(nonatomic) struct UIEdgeInsets footerViewInsets; // @synthesize footerViewInsets=_footerViewInsets;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *table; // @synthesize table=_table;
- (_Bool)scopeHasChanged;
- (_Bool)isIndexLastItemInSection:(long long)arg1;
- (long long)indexFromIndexPath:(id)arg1;
- (id)indexPathFromIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)selectedItem;
- (void)selectItemAtIndexPath:(id)arg1;
- (void)initLookUpTable;
- (void)initViewState;
- (id)initWithTable:(id)arg1 originSelectedIndexPath:(id)arg2;

@end

