//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveQuestActivity, MMTimer, NSMutableArray, NSString, UICollectionView;

@interface MMFinderLiveAnchorTaskCollectionViewModel : NSObject
{
    _Bool _isScrolling;
    _Bool _isAutoScrollInterrupt;
    unsigned int _scrollInterval;
    UICollectionView *_collectionView;
    CDUnknownBlockType _selectCallback;
    NSMutableArray *_anchorTaskActivities;
    FinderLiveQuestActivity *_lastVisibleActiviy;
    MMTimer *_timer;
}

+ (void)reportForActiviyClick:(id)arg1;
+ (void)reportForActiviyExpose:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isAutoScrollInterrupt; // @synthesize isAutoScrollInterrupt=_isAutoScrollInterrupt;
@property(retain, nonatomic) FinderLiveQuestActivity *lastVisibleActiviy; // @synthesize lastVisibleActiviy=_lastVisibleActiviy;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) unsigned int scrollInterval; // @synthesize scrollInterval=_scrollInterval;
@property(retain, nonatomic) NSMutableArray *anchorTaskActivities; // @synthesize anchorTaskActivities=_anchorTaskActivities;
@property(copy, nonatomic) CDUnknownBlockType selectCallback; // @synthesize selectCallback=_selectCallback;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)deleteActivityAtIndex:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onAnchorTaskActivityDidSelect:(id)arg1;
- (void)scrollCollectionViewToNext;
- (void)invokeAutoScroll;
- (void)cancelAutoScroll;
- (void)startScrollWithInterval:(unsigned int)arg1;
- (void)updateAnchorTaskActivities:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

