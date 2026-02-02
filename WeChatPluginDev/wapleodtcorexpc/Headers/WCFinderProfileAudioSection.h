//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSMutableArray, NSMutableSet, NSString, WCFinderStreamLoadingState;

@interface WCFinderProfileAudioSection : NSObject
{
    _Bool _hasFetchFirstPage;
    NSString *_finderUsername;
    NSMutableArray *_items;
    NSMutableSet *_itemIdSet;
    MMListenCategoryItem *_category;
    long long _secType;
    WCFinderStreamLoadingState *_state;
    long long _count;
    NSString *_title;
    CDUnknownBlockType _requestNext;
    CDUnknownBlockType _onClickItem;
}

+ (id)categoryItemFromCollectionInfo:(id)arg1;
+ (void)rmObserver:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onClickItem; // @synthesize onClickItem=_onClickItem;
@property(copy, nonatomic) CDUnknownBlockType requestNext; // @synthesize requestNext=_requestNext;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hasFetchFirstPage; // @synthesize hasFetchFirstPage=_hasFetchFirstPage;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) WCFinderStreamLoadingState *state; // @synthesize state=_state;
@property(nonatomic) long long secType; // @synthesize secType=_secType;
@property(retain, nonatomic) MMListenCategoryItem *category; // @synthesize category=_category;
@property(retain, nonatomic) NSMutableSet *itemIdSet; // @synthesize itemIdSet=_itemIdSet;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)requestMore:(CDUnknownBlockType)arg1;
- (id)loadingState;
- (id)sectionItems;
- (id)displayTitle;
- (void)notifyDataChanged;
- (void)addObserver:(id)arg1;
- (void)requestNextPage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

